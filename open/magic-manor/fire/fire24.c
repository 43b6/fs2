inherit ROOM;
#include <ansi.h>
#include <fire.msg>
#include <damage06.c>

string *exit = ({ __DIR__"fire21",__DIR__"fire22",__DIR__"fire23",__DIR__"fire24",});

void create()
{
        set("short","��������¥");
        set("long", (: printf_msg :) );
        set("exits", ([
	"south"	: exit[random(sizeof(exit))],
	"north"	: exit[random(sizeof(exit))],
	"east"	: exit[random(sizeof(exit))],
	"west"	: exit[random(sizeof(exit))],
        ]));
        set("light", 1);
	set("no_auc", 1);
	set("no_transmit",1);
        setup();

}

