// n_area34.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "����С·");
        set("long",
             n_area(34)
);

        set("exits", ([
            "east"  : __DIR__"n_area33",
            "south" : __DIR__"n_area36",
      ]));

        set("objects", ([
      ]));

        setup();
}
