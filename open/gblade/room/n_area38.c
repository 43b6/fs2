// n_area38.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "");
        set("long",
             n_area(38)
);

        set("exits", ([
            "west"  : __DIR__"n_area36",
      ]));

        set("objects", ([
      ]));

        setup();
}
