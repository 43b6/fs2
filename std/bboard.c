// bboard.c 修正 by babe

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
		write( "这个板子不知道要摆在哪儿。\n" );
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
		return ::short() + " [ 没有任何留言 ]";

	if( this_player() ) {
		last_read_time = (int)this_player()->query("board_last_read/" + (string)query("board_id"));
		for(unread = 0, i=sizeof(notes)-1; i>=0; i--, unread ++)
			if( notes[i]["time"] <= last_read_time )
				break;
	}
	if( unread )
		return sprintf( "%s [ %d 张留言，%d 张未读 ]", ::short(), sizeof(notes), unread);
	else
		return sprintf( "%s [ %d 张留言 ]", ::short(), sizeof(notes));
}

string long()
{
	mapping *notes;
	int i, last_time_read, n;
	string msg, tmp;

	notes = query("notes");
	msg = query("long");
	msg = msg + "留言版的使用方法请见 help board。\n";
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
		return notify_fail("留言板上目前没有任何留言。\n");

	if( !arg ) return notify_fail("指令格式：read <留言编号>|new|next\n");
	if( arg=="new" || arg=="next" ) {
		if( !mapp(last_read_time) || undefinedp(last_read_time[myid]) )
			num = 1;
		else
			for(num = 1; num<=sizeof(notes); num++)
				if( notes[num-1]["time"] > last_read_time[myid] ) break;

	} else if( !sscanf(arg, "%d", num) )
		return notify_fail("你要读第几张留言？\n");

	if( num < 1 || num > sizeof(notes) )
		return notify_fail("没有这张留言。\n");
	num--;
	if( !stringp(notes[num]["title"]) )
		notes[num]["title"] = "无标题";
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
		      HIR"───────────────────────────────────────\n"NOR,
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
		return notify_fail("指令格式：discard <留言编号>\n");
	me = this_player();
	myid = me->query("id");

	notes = query("notes");
	if( !arrayp(notes) || num < 1 || num > sizeof(notes) )
		return notify_fail("没有这张留言。\n");
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
		return notify_fail("你没有权力删除此封信。\n");

	notes = notes[0..num-1] + notes[num+1..sizeof(notes)-1];
	set("notes", notes);
	save();
	write("删除第 " + (num+1) + " 号留言 OK。\n");

	return 1;
}

int do_help(string str)
{
	if( str!="board" )
		return 0;

	write( @Help
	□ 留言版使用方法

	    狂想空间有许多地方都会有一些供人留言的留言版，这些留言版的使用方法都大同小
	异，基本上都提供下列指令：

	post <标题>      开始进行留言，你必须指定一个标题才能留言。
	followup <编号>  回信给指定编号的留言, 标题自动设为"Re:[编号]标题"。
	read <编号>      阅读指定编号的留言。
	read new         阅读您第一篇未读过的留言。
	read next        同上。
	discard <编号>   删除指定编号的留言。

	除了巫师和该板的所有者之外，你只能删除自己写的留言。

Help);

	return 1;
}
