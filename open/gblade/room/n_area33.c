// n_area33.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "����С·");
        set("long",
             n_area(33)
);

        set("exits", ([
            "north" : __DIR__"n_area30",
            "east"  : __DIR__"n_area35",
            "west"  : __DIR__"n_area34",
      ]));

        set("objects", ([
      ]));

        setup();
}
