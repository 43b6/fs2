// n_area36.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "����С·");
        set("long",
             n_area(36)
);

        set("exits", ([
            "north" : __DIR__"n_area34",
            "east"  : __DIR__"n_area38",
            "west"  : __DIR__"n_area37",
            "south" : __DIR__"n_area39",
      ]));

        set("objects", ([
      ]));

        setup();
}
