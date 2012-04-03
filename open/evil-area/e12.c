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
"east":__DIR__"e13",
"south":__DIR__"e11",
]));
	set("objects",([
__DIR__"npc/evil-clever":1,
]));
	setup();
}

int valid_leave(object me,string dir)
{
	if(dir=="east")
	{
		if(present("evil-ghost",environment(me)) || present("evil-clever",environment(me)) || present("spider-girl",environment(me)))
			return notify_fail("�ڴ˵ص�а�����赲ס�����ȥ·��\n");
	}
return 1;
}