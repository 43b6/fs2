#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
          set("short","�����Թ���");
        set("valid_startroom", 1);
          set("long","���Ѿ���������Թ���ֻ�����ܶ�����ʯ���Լ�һЩ�����ڴ˵��˵ĺ��ǣ��ڴ������޷���������\n");
        set("exits", ([
		"north":__DIR__"room5",
		"south":__DIR__"room5",
		"west":__DIR__"room5c",
			"east":__DIR__"room5g",
        ]) );
	set("objects",([SNOW_NPC"ghost":1]));
       set("no_fight",1);
        setup();
}
