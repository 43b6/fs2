// n_area14.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡С·");
        set("long",
             n_area(14)
);

        set("exits", ([
            "north" : __DIR__"n_area3",
            "south" : __DIR__"n_area15",
      ]));

        set("objects", ([
      ]));

        setup();
}
