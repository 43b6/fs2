// n_area43.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "");
        set("long",
             n_area(43)
);

        set("exits", ([
            "east"  : __DIR__"n_area44",
      ]));

        set("objects", ([
      ]));

        setup();
}
