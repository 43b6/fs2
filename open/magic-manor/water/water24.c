inherit ROOM;
#include <ansi.h>
#include <water.msg>
#include <damage06.c>

string *exit = ({ __DIR__"water21",__DIR__"water22",__DIR__"water23",__DIR__"water24",});

void create()
{
        set("short","ˮ������¥");
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

