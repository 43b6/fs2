// n_area6.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "���С·");
        set("long",
             n_area(6)
);

        set("exits", ([
            "east"  : __DIR__"n_area5",
            "south" : __DIR__"n_area7",
      ]));

        set("objects", ([
      ]));

        setup();
}
