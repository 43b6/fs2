// n_area55.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "");
        set("long",
             n_area(55)
);

        set("exits", ([
            "west"  : __DIR__"n_area54",
      ]));

        set("objects", ([
      ]));

        setup();
}
