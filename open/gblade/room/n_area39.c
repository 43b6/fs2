// n_area39.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "����С·");
        set("long",
             n_area(39)
);

        set("exits", ([
            "north" : __DIR__"n_area36",
            "east"  : __DIR__"n_area41",
            "west"  : __DIR__"n_area40",
            "south" : __DIR__"n_area42",
      ]));

        set("objects", ([
      ]));

        setup();
}
