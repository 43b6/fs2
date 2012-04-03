inherit ROOM;
#include <ansi.h>
#include <road.msg>

void create ()
{
	set("short",BBLU+YEL"��а��"NOR);
	set("long",
(: print_road_msg :)
);
	set("no_transmit",1);
        set("light_up",-1);
	set("exits",([
"north":__DIR__"e13",
"west":__DIR__"e15",
"east":__DIR__"w01",
]));
	set("objects",([
__DIR__"npc/spider-girl":2,
]));
	setup();
}

int valid_leave(object me,string dir)
{
	if(dir=="west" || dir=="east")
	{
		if(present("evil-ghost",environment(me)) || present("evil-clever",environment(me)) || present("spider-girl",environment(me)))
			return notify_fail("�ڴ˵ص�а�����赲ס�����ȥ·��\n");
	}
return 1;
}