// room.c

#pragma save_binary

#include <dbase.h>
#include <room.h>

inherit F_DBASE;
inherit F_CLEAN_UP;

static mapping doors;

int query_max_encumbrance() { return 100000000000; }

private object make_inventory(string file)
{
	object ob;

	ob = new(file);
    if(!ob) return 0;
	ob->move(this_object());
	ob->set("startroom", base_name(this_object()));
	return ob;
}

void reset()
{
	mapping ob_list, ob;
	string *list;
	int i,j;

	//
	// Check loaded objects to match the objects specified in "objects"
	// while query("objects") is 
	// ([ <object filename>: <amount>, ..... ])
	// and query_temp("objects") is
	// ([ <object filename>: ({ob1, ob2, ...}), .... ])
	//
//Ӧ��Ҫ���һ���Ƿ���no_clean_up����Ϊ0,��Ȼ��û�в�reborn��room��by bss
    if(!query("no_clean_up"))
    set("no_clean_up", 0);
//����������������reborn��room,��Ϊ���¿��������������������Ĺ���
    else    
    {
    if(query("have_reborn")) return ;
      set("have_reborn",1);
    }
	ob_list = query("objects");
	if( !mapp(ob_list) ) return;
        if( query("no_reset") ) return;
//��������,������һ��ʼ����no_reset,�͸���������object�ڷ�����!!
	
	if( !mapp(ob = query_temp("objects")) )
		ob = allocate_mapping(sizeof(ob_list));
	list = keys(ob_list);
	for(i=0; i<sizeof(list); i++) {
		// Allocate an array if we have multiple same object specified.
		if(	undefinedp(ob[list[i]])
		&&	intp(ob_list[list[i]])
		&&	ob_list[list[i]] > 1 )
			ob[list[i]] = allocate(ob_list[list[i]]);

		switch(ob_list[list[i]]) {
		case 1:
			if( !ob[list[i]] ) ob[list[i]] = make_inventory(list[i]);
           if(ob[list[i]])
			if( environment(ob[list[i]]) != this_object()
			&&	ob[list[i]]->is_character() ) {
				if( !ob[list[i]]->return_home(ob[list[i]]->query("startroom")) )
					add("no_clean_up", 1);
				if( !ob[list[i]]->move(ob[list[i]]->query("startroom")) )
					add("no_clean_up", 1);
			}
			break;
		default:
			for(j=0; j<ob_list[list[i]]; j++) {
				// If the object is gone, make another one.
				if( !objectp(ob[list[i]][j]) ) {
					ob[list[i]][j] = make_inventory(list[i]);
					continue;
				}
				// Try to call the wandering npc come back here.
				if( environment(ob[list[i]][j]) != this_object()
				&&	ob[list[i]][j]->is_character() ) {
					if( !ob[list[i]][j]->return_home(ob[list[i]][j]->query("startroom")) )
						add("no_clean_up", 1);
					if( !ob[list[i]][j]->move(ob[list[i]][j]->query("startroom")) )
						add("no_clean_up", 1);
				}
			}
		}
	}
	set_temp("objects", ob);
}

// Redirect item_desc of the door to this function in default.
string look_door(string dir, object ob)
{
	if( !mapp(doors) || undefinedp(doors[dir]) )
		return "��Ҫ��ʲô��\n";
	if ( doors[dir]["status"] == DOOR_LOCKED )
		return "���" + doors[dir]["name"] + "�����ŵġ�\n";
	if( doors[dir]["status"] == DOOR_CLOSED )
		return "���" + doors[dir]["name"] + "�ǹ��ŵġ�\n";
	else
		return "���" + doors[dir]["name"] + "�ǿ��ŵġ�\n";
}

varargs int open_door(string dir, int from_other_side)
{
	mapping exits;
	object ob;

	if( !mapp(doors) || undefinedp(doors[dir]) )
		return notify_fail("�������û���š�\n");

	if( (doors[dir]["status"] == DOOR_LOCKED) )
		return notify_fail( doors[dir]["name"] + "�����ŵ�, ������Ƚ����򿪡�\n");
	if( (doors[dir]["status"] != DOOR_CLOSED) )
		return notify_fail( doors[dir]["name"] + "�Ѿ��ǿ��ŵ��ˡ�\n");

	exits = query("exits");
	if( !mapp(exits) || undefinedp(exits[dir]) )
		error("Room: open_door: attempt to open a door with out an exit.\n");

	if( from_other_side )
		message("vision", "���˴���һ�߽�" + doors[dir]["name"] + "���ˡ�\n", this_object());
	else if( objectp(ob = find_object(exits[dir])) ) {
		if( !ob->open_door(doors[dir]["other_side_dir"], 1) ) return 0;
	}

	doors[dir]["status"] = 0;
	return 1;
}

varargs int unlock_door(string dir, int from_other_side)
{
	mapping exits;
	object ob;

	if( !mapp(doors) || undefinedp(doors[dir]) )
		return notify_fail("�������û���š�\n");

	if( !(doors[dir]["status"] & DOOR_LOCKED) ) {
		write ( doors[dir]["name"] + "��û�����š�\n");
		return 0;
	}

	exits = query("exits");
	if( !mapp(exits) || undefinedp(exits[dir]) )
		error("Room: unlock_door: attempt to open a door with out an exit.\n");

	if( from_other_side )
		message("vision", "����һ��, ���˴���һ�߽�" + doors[dir]["name"] + "�������ˡ�\n", this_object());
	else if( objectp(ob = find_object(exits[dir])) ) {
		if ( !ob->unlock_door(doors[dir]["other_side_dir"], 1) )
                  return 0;
	}

	doors[dir]["status"] &= (!DOOR_LOCKED);
	doors[dir]["status"] |= (DOOR_CLOSED);
	return 1;
}

varargs int close_door(string dir, int from_other_side)
{
	mapping exits;
	object ob;

	if( !mapp(doors) || undefinedp(doors[dir]) )
		return notify_fail("�������û���š�\n");

	if( (doors[dir]["status"] & DOOR_LOCKED) )
		return notify_fail( doors[dir]["name"] + "�Ѿ������ŵ��ˡ�\n");
	else if( (doors[dir]["status"] & DOOR_CLOSED) )
		return notify_fail( doors[dir]["name"] + "�Ѿ��ǹ��ŵ��ˡ�\n");

	exits = query("exits");
	if( !mapp(exits) || undefinedp(exits[dir]) )
		error("Room: close_door: attempt to open a door with out an exit.\n");

	if( from_other_side )
		message("vision", "���˴���һ�߽�" + doors[dir]["name"] + "�����ˡ�\n", this_object());
	else if( objectp(ob = find_object(exits[dir])) ) {
		if( !ob->close_door(doors[dir]["other_side_dir"], 1) ) return 0;
	}

	doors[dir]["status"] |= DOOR_CLOSED;
	return 1;
}

varargs int lock_door(string dir, int from_other_side)
{
	mapping exits;
	object ob;

	if( !mapp(doors) || undefinedp(doors[dir]) )
		return notify_fail("�������û���š�\n");

	if( (doors[dir]["status"] & DOOR_LOCKED) ) {
		write ( doors[dir]["name"] + "�Ѿ������ŵ��ˡ�\n");
		return 0;
	}
	else if( !(doors[dir]["status"] & DOOR_CLOSED) ) {
		write ( doors[dir]["name"] + "�ǿ��ŵ�, �����Ƚ������ϡ�\n");
		return 0;
	}

	exits = query("exits");
	if( !mapp(exits) || undefinedp(exits[dir]) )
		error("Room: lock_door: attempt to open a door with out an exit.\n");

	if( from_other_side )
		message("vision", "����һ��, ���˴���һ�߽�" + doors[dir]["name"] + "�����ˡ�\n", this_object());
	else if( objectp(ob = find_object(exits[dir])) ) {
		if ( !ob->lock_door(doors[dir]["other_side_dir"], 1) )
                  return 0;
	}

	doors[dir]["status"] &= !DOOR_CLOSED;
	doors[dir]["status"] |= DOOR_LOCKED;

	return 1;
}

int check_door(string dir, mapping door)
{
	// If we have no responding door, assume it is correct.
	if( !mapp(doors) || undefinedp(doors[dir]) ) return 1;

	door["status"] = doors[dir]["status"];
	return 1;
}

varargs void create_door(string dir, mixed data, string other_side_dir, int status)
{
	mapping d, exits, item_desc;
	object ob;

	exits = query("exits");
	if( !mapp(exits) || undefinedp(exits[dir]) )
		error("Room: create_door: attempt to create a door without exit.\n");

	// Compact mode.
	if( stringp(data) ) {
		d = allocate_mapping(4);
		d["name"] = data;
		d["id"] = ({ dir, data, "door" });
		d["other_side_dir"] = other_side_dir;
		d["status"] = status;
	} else if( mapp(data) )
		d = data;
	else
		error("Create_door: Invalid door data, string or mapping expected.\n");

	set("item_desc/" + dir, (: look_door, dir :) );

	if( objectp(ob = find_object(exits[dir])) ) {
		if( !ob->check_door(other_side_dir, d) )
			return;
	}

	if( !mapp(doors) ) doors = ([ dir: d ]);
	else doors[dir] = d;
}

mapping query_doors() { return doors; }

mixed query_door(string dir, string prop)
{
	if( !mapp(doors) || undefinedp(doors[dir]) ) return 0;
	else return doors[dir][prop];
}

int valid_leave(object me, string dir)
{
	if( mapp(doors) && !undefinedp(doors[dir]) ) {
		if( doors[dir]["status"] & DOOR_LOCKED )
			return notify_fail("������Ȱ�" + doors[dir]["name"] + "�����򿪣�\n");
                if (doors[dir]["status"] & DOOR_CLOSED )
			return notify_fail("������Ȱ�" + doors[dir]["name"] + "�򿪣�\n");
		// if ( door[dir]["status"] & DOOR_HAS_TRAP ) ....
	}
	return 1;
}

void setup()
{
	seteuid(getuid());
	this_object()->reset();
}

string short()
{
  return query("short");
}

string long()
{
  return query("long");
}
