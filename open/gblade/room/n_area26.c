// n_area26.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(26)
);

        set("exits", ([
            "north" : __DIR__"n_area24",
            "west"  : __DIR__"n_area66",
            "south" : __DIR__"n_area28",
      ]));

        set("objects", ([
      ]));

        setup();
}
