#include <room.h>

inherit ROOM;

void create()
{
           set("short","��Ѩ");
       set("long","һ����ɭɭ�Ķ�Ѩ�ڣ�������ֻ�м�΢���Ĺ��ߣ�����ǿ���Կ������ڡ�\n");
        set("exits", ([
		"north":__DIR__"room3",
        ]) );
	set("light_up",1);
        setup();
}
