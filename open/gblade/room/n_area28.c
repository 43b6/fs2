// n_area28.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(28)
);

        set("exits", ([
            "north" : __DIR__"n_area26",
            "east"  : __DIR__"n_area29",
      ]));

        set("objects", ([
      ]));

        setup();
}
