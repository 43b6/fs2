// n_area15.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡");
        set("long",
             n_area(15)
);

        set("exits", ([
            "north" : __DIR__"n_area14",
            "east"  : __DIR__"n_area17",
            "west"  : __DIR__"n_area16",
            "south" : __DIR__"n_area19",
      ]));

        set("objects", ([
      ]));

        setup();
}
