// n_area40.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "");
        set("long",
             n_area(40)
);

        set("exits", ([
            "east"  : __DIR__"n_area39",
      ]));

        set("objects", ([
      ]));

        setup();
}
