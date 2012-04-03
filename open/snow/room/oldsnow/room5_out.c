#include <room.h>

inherit ROOM;

void create()
{
	set("short","���Ʊ����ſ�");
	set("long","���������Ʊ������棬�������������߹�����������ֻҪ���������߹��ᣬ�Ϳ��Բμ����и������йص����ɡ�\n");
        set("exits", ([
		"north":__DIR__"room2",
		"down":__DIR__"room4",
        ]) );
	set("light_up",1);
	set("objects",([
	"/open/snow/npc/lu" : 1,
	]));
        setup();
}
int valid_leave( object me , string dir )
{
	if( dir != "north" ) return 1;
	if( present("lu",this_object()) )
	{
		tell_object(me,"½С˫��ס�����ȥ·��\n");
		return 0;
	}
	return 1;
}
void init()
{
	object me = this_player();
	if( wizardp(me) && me->query("id") != "fund" ) me->move("/open/wiz/jobroom");
}
