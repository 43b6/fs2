inherit ROOM;
#include <ansi.h>
#include <gold.msg>
#include <damage03.c>

string *exit = ({ __DIR__"gold09",__DIR__"gold10",__DIR__"gold11",__DIR__"gold12",});

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

