#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
          set("short","���Ʊ���");
        set("valid_startroom", 1);
set ("long", @LONG
������ѩ���ɵ�ʥ�ء����Ʊ����������װ���� �������䱦 ,
�Եû����Ƿ�����ѩ���ɵ��Ӿۻ�ʱ�����й������ʱ���һ����Ҫ
������
LONG);
set("exits",([
		"south":__DIR__"room5_out",
		"north":__DIR__"room6",
		"east":__DIR__"room10",
		"west":__DIR__"room18",
        ]) );
	set("light_up",1);
	set("objects",([
	"/open/snow/npc/sing-chens" : 1,
	]));
        setup();
}
void init()
{
	object me = this_player();
	if( wizardp(me) && me->query("id") != "fund" ) me->move("/open/wiz/jobroom");
}
int valid_leave( object me , string dir )
{
	object ob;
	if( dir != "north" ) return 1;
	if( ( ob = present( "sing chens",this_object() ) ) ) {
		message_vision("$N˵��������ط����������롣\n",ob);
		return 0;
	}
	return 1;
}
