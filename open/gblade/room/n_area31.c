// n_area31.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(31)
);

        set("exits", ([
            "east"  : __DIR__"n_area32",
            "west"  : __DIR__"n_area30",
      ]));

        set("objects", ([
      ]));

        setup();
}
