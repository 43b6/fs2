// n_area30.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(30)
);

        set("exits", ([
            "north" : __DIR__"n_area22",
            "east"  : __DIR__"n_area31",
            "west"  : __DIR__"n_area29",
            "south" : __DIR__"n_area33",
      ]));

        set("objects", ([
      ]));

        setup();
}
