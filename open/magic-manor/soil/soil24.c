inherit ROOM;
#include <ansi.h>
#include <soil.msg>
#include <damage06.c>

string *exit = ({ __DIR__"soil21",__DIR__"soil22",__DIR__"soil23",__DIR__"soil24",});

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
