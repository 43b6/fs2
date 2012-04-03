// room.c


#include <dbase.h>
#include <room.h>

inherit F_DBASE;
inherit F_CLEAN_UP;


int query_max_encumbrance() { return 100000000000; }

object make_inventory(string file)
{
	object ob;

	ob = new(file);
	ob->move(this_object());
	ob->set("startroom", base_name(this_object()));
	return ob;
}

varargs void create_door( string door , mixed dir , string s_dir , string e_dir)
{
}
string look_door( string dir )
{
	return "";
}
void reset()
{
	mapping ob_list , ob = ([]);
	string *list , filename;
	object *all = all_inventory(this_object());
	int i , j , k;

	ob_list = query("objects");
	// �� reborn
        if( query("no_reset"))  return;
	if( !mapp(ob_list) ) return;
	list = keys(ob_list);
	for( j = 0 ; j < sizeof(all) ; j ++ )
	{
		filename = base_name(all[j]);
		if( ob_list[filename] ) ob[filename] += 1;
		else if( !interactive(all[j]) ) destruct(all[j]);
	}
	for( i = 0 ; i < sizeof(list) ; i ++ ) {
		j = ob_list[list[i]] - ob[list[i]];
		for( k = 0 ; k < j ; k ++ ) make_inventory( list[i] );
	}
}

int valid_leave(object me, string dir)
{
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
