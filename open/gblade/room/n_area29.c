// n_area29.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(29)
);

        set("exits", ([
            "east"  : __DIR__"n_area30",
            "west"  : __DIR__"n_area28",
      ]));

        set("objects", ([
      ]));

        setup();
}
