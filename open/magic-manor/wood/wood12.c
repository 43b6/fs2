inherit ROOM;
#include <ansi.h>
#include <wood.msg>
#include <damage03.c>

string *exit = ({ __DIR__"wood09",__DIR__"wood10",__DIR__"wood11",__DIR__"wood12",});

void create()
{
        set("short","ľ������¥");
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
