// n_area17.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡");
        set("long",
             n_area(15)
);

        set("exits", ([
            "east"  : __DIR__"n_area15",
            "south" : __DIR__"n_area18",
      ]));

        set("objects", ([
      ]));

        setup();
}
