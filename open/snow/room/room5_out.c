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
        setup();
}
