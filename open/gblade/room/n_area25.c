// n_area25.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(25)
);

        set("exits", ([
            "west"  : __DIR__"n_area20",
            "south" : __DIR__"n_area27",
      ]));

        set("objects", ([
      ]));

        setup();
}
