// n_area21.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡");
        set("long",
             n_area(21)
);

        set("exits", ([
            "north" : __DIR__"n_area18",
            "east"  : __DIR__"n_area22",
      ]));

        set("objects", ([
      ]));

        setup();
}
