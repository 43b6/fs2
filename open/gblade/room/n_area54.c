// n_area54.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(54)
);

        set("exits", ([
            "north" : __DIR__"n_area47",
            "east"  : __DIR__"n_area55",
            "west"  : __DIR__"n_area53",
            "south" : __DIR__"n_area61",
      ]));

        set("objects", ([
      ]));

        setup();
}
