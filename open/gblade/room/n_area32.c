// n_area32.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(32)
);

        set("exits", ([
            "north" : __DIR__"n_area27",
            "west"  : __DIR__"n_area31",
      ]));

        set("objects", ([
      ]));

        setup();
}
