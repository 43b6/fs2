// n_area41.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "");
        set("long",
             n_area(41)
);

        set("exits", ([
            "west"  : __DIR__"n_area39",
      ]));

        set("objects", ([
      ]));

        setup();
}
