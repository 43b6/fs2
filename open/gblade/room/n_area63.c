// n_area63.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "����С·");
        set("long",
             n_area(63)
);

        set("exits", ([
            "north" : __DIR__"n_area56",
      ]));

        set("objects", ([
      ]));

        setup();
}
