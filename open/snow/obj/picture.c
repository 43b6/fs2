inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIG "·��ͼ" NOR,({"snow picture","picture"}));
	set("unit","��");
	set("value",10);
        setup();
}
void init()
{
	add_action("do_read","read");
}
int do_read( string arg )
{
	object env = environment( this_player() );
	if( !arg || arg != "picture" ) return 0;
	if( base_name( env ) != "/open/snow/room/room3" ) {
		tell_object( this_player() ,@LONG
		/\
	      /    \
	   /         \
-----------        *   \
LONG);
		return 1;
	}
	tell_object( this_player() , "�������﷢����·��ͼ��ָʾ��·�ڡ�\n" );
	this_player()->move("/open/snow/room/dguger_room");
	return 1;
}
