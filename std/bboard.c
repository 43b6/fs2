// bboard.c ���� by babe

#include <ansi.h>

#define BOARD_CAPACITY query("capacity")

inherit ITEM;
inherit F_SAVE;

int do_help(string);

void setup()
{
	string loc;

	seteuid(getuid());

	if( stringp( loc = query("location") ) )
		move(loc);
	else {
		write( "������Ӳ�֪��Ҫ�����Ķ���\n" );
		return;
	}
	set( "no_get", 1 );
	restore();
}

void init()
{
	add_action("do_read", "read");
	add_action("do_discard", "discard");
        add_action("do_help", "help");
}

string query_save_file()
{
	string id;

	if( !stringp( id = query("board_id") ) )
		return 0;
	return DATA_DIR + "board/" + id;
}

string short()
{
	mapping *notes;
	int i, unread, last_read_time;

	notes = query("notes");
	if( !pointerp(notes) || !sizeof(notes) )
		return ::short() + " [ û���κ����� ]";

	if( this_player() ) {
		last_read_time = (int)this_player()->query("board_last_read/" + (string)query("board_id"));
		for(unread = 0, i=sizeof(notes)-1; i>=0; i--, unread ++)
			if( notes[i]["time"] <= last_read_time )
				break;
	}
	if( unread )
		return sprintf( "%s [ %d �����ԣ�%d ��δ�� ]", ::short(), sizeof(notes), unread);
	else
		return sprintf( "%s [ %d ������ ]", ::short(), sizeof(notes));
}

string long()
{
	mapping *notes;
	int i, last_time_read, n;
	string msg, tmp;

	notes = query("notes");
	msg = query("long");
	msg = msg + "���԰��ʹ�÷������ help board��\n";
	if( !pointerp(notes) || !sizeof(notes) ) return query("long");

	last_time_read = this_player()->query("board_last_read/" + (string)query("board_id"));
	for(i=0; i<sizeof(notes); i++) {
		tmp = notes[i]["title"];
		n = 55-strlen(notes[i]["author"]);
		if (strlen(tmp) > n) tmp = tmp[0..n-1];
		else {
		  n -= strlen(tmp);
		  while (n-->0) tmp+=".";
		}
		tmp += " "+notes[i]["author"];
		msg += sprintf("%s[%02d]" NOR " %s (%s)\n",
			( notes[i]["time"] > last_time_read ? HIY: ""),
			i+1,
			tmp,
			ctime(notes[i]["time"])[0..15] );
	}
	return msg;
}

int do_read(string arg)
{
	int	i, num;
	mapping	*notes, last_read_time;
	string	myid, tmp;
	object	me;

	last_read_time = this_player()->query("board_last_read");
	myid = query("board_id");
	notes = query("notes");
	me = this_player();

	if( !pointerp(notes) || !sizeof(notes) )
		return notify_fail("���԰���Ŀǰû���κ����ԡ�\n");

	if( !arg ) return notify_fail("ָ���ʽ��read <���Ա��>|new|next\n");
	if( arg=="new" || arg=="next" ) {
		if( !mapp(last_read_time) || undefinedp(last_read_time[myid]) )
			num = 1;
		else
			for(num = 1; num<=sizeof(notes); num++)
				if( notes[num-1]["time"] > last_read_time[myid] ) break;

	} else if( !sscanf(arg, "%d", num) )
		return notify_fail("��Ҫ���ڼ������ԣ�\n");

	if( num < 1 || num > sizeof(notes) )
		return notify_fail("û���������ԡ�\n");
	num--;
	if( !stringp(notes[num]["title"]) )
		notes[num]["title"] = "�ޱ���";
	tmp = replace_string( notes[num]["title"], HIG, "" );
	tmp = replace_string( tmp, HIC, "" );
	if( strlen( tmp + notes[num]["author"] ) > 60 )
		tmp = notes[num]["title"][0..73-strlen(notes[num]["author"])];
	else {
		i = 60 - strlen( tmp + notes[num]["author"] );
		tmp = notes[num]["title"];
		while(i--)
			tmp += " ";
	}
	me->start_more(
		sprintf( "["HIY"%|3d"NOR"] %s"HIW"%s"HIM"(%s)\n"
		      HIR"������������������������������������������������������������������������������\n"NOR,
		num + 1, tmp, notes[num]["author"], ctime(notes[num]["time"])[0..9] )
		+ notes[num]["msg"] );

	// Keep track which post we were reading last time.
	if( !mapp(last_read_time) )
		me->set("board_last_read", ([ myid: notes[num]["time"] ]) );
	else
		if( undefinedp(last_read_time[myid]) || notes[num]["time"] > last_read_time[myid] )
			last_read_time[myid] = notes[num]["time"];

	return 1;
}

int do_discard(string arg)
{
	mapping *notes;
	string *masters, myid;
	object	me;
	int num, i, n, master;

	if( !arg || sscanf(arg, "%d", num)!=1 )
		return notify_fail("ָ���ʽ��discard <���Ա��>\n");
	me = this_player();
	myid = me->query("id");

	notes = query("notes");
	if( !arrayp(notes) || num < 1 || num > sizeof(notes) )
		return notify_fail("û���������ԡ�\n");
	num--;

	master  = 0;
	if ( !masters=query("master") ||
	     (pointerp(masters) &&
		!stringp(masters[0])) )
	{
	}
	else if (n=sizeof(masters)) {
	  for (i=0; i<n; i++)
	    if (masters[i] == myid) {
	      master = 1;
	      break;
	    }
	}

	if( notes[num]["author"] !=
	    (string) me->query("name")+
	    "("+me->query("id")+")"
	&& !master
	&& (string)SECURITY_D->get_status(me) != "(admin)"
	&& (string)SECURITY_D->get_status(me) != "(manager)")
		return notify_fail("��û��Ȩ��ɾ���˷��š�\n");

	notes = notes[0..num-1] + notes[num+1..sizeof(notes)-1];
	set("notes", notes);
	save();
	write("ɾ���� " + (num+1) + " ������ OK��\n");

	return 1;
}

int do_help(string str)
{
	if( str!="board" )
		return 0;

	write( @Help
	�� ���԰�ʹ�÷���

	    ����ռ������ط�������һЩ�������Ե����԰棬��Щ���԰��ʹ�÷�������ͬС
	�죬�����϶��ṩ����ָ�

	post <����>      ��ʼ�������ԣ������ָ��һ������������ԡ�
	followup <���>  ���Ÿ�ָ����ŵ�����, �����Զ���Ϊ"Re:[���]����"��
	read <���>      �Ķ�ָ����ŵ����ԡ�
	read new         �Ķ�����һƪδ���������ԡ�
	read next        ͬ�ϡ�
	discard <���>   ɾ��ָ����ŵ����ԡ�

	������ʦ�͸ð��������֮�⣬��ֻ��ɾ���Լ�д�����ԡ�

Help);

	return 1;
}
