// n_area57.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "");
        set("long",
             n_area(57)
);

        set("exits", ([
            "east"  : __DIR__"n_area58",
      ]));

        set("objects", ([
      ]));

        setup();
}
