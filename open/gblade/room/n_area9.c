// n_area9.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "���С·");
        set("long",
             n_area(9)
);

        set("exits", ([
            "north" : __DIR__"n_area7",
            "west"  : __DIR__"n_area10",
            "south" : __DIR__"n_area11",
      ]));

        set("objects", ([
      ]));

        setup();
}
