// n_area27.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(27)
);

        set("exits", ([
            "north" : __DIR__"n_area25",
            "south" : __DIR__"n_area32",
      ]));

        set("objects", ([
      ]));

        setup();
}
