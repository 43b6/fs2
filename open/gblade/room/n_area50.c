// n_area50.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "");
        set("long",
             n_area(50)
);

        set("exits", ([
            "east"  : __DIR__"n_area51",
      ]));

        set("objects", ([
      ]));

        setup();
}
