inherit ROOM;
#include <ansi.h>
#include <gold.msg>
#include <damage02.c>

string *exit = ({ __DIR__"gold05",__DIR__"gold06",__DIR__"gold07",__DIR__"gold08",});

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

