// n_area49.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "����������");
        set("long",
             n_area(49)
);

        set("exits", ([
            "north" : __DIR__"n_area42",
            "east"  : __DIR__"n_area53",
            "west"  : __DIR__"n_area52",
            "south" : __DIR__"n_area56",
      ]));

        set("objects", ([
      ]));

        setup();
}
