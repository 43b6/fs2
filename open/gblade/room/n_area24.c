// n_area24.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(24)
);

        set("exits", ([
            "east"  : __DIR__"n_area18",
            "south" : __DIR__"n_area26",
      ]));

        set("objects", ([
      ]));

        setup();
}
