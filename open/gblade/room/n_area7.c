// n_area7.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "���С·");
        set("long",
             n_area(7)
);

        set("exits", ([
            "north" : __DIR__"n_area6",
            "east"  : __DIR__"n_area65",
            "west"  : __DIR__"n_area8",
            "south" : __DIR__"n_area9",
      ]));

        set("objects", ([
      ]));

        setup();
}
