// n_area42.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "���򱱿�");
        set("long",
             n_area(42)
);

        set("exits", ([
            "north" : __DIR__"n_area39",
            "east"  : __DIR__"n_area46",
            "west"  : __DIR__"n_area45",
            "south" : __DIR__"n_area49",
      ]));

        set("objects", ([
      ]));

        setup();
}
