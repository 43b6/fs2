inherit ROOM;
#include <ansi.h>
#include <wood.msg>
#include <damage01.c>

string *exit = ({ __DIR__"wood01",__DIR__"wood02",__DIR__"wood03",__DIR__"wood04",});

void create()
{
        set("short","ľ����һ¥");
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
