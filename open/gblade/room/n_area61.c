// n_area61.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(61)
);

        set("exits", ([
            "north" : __DIR__"n_area54",
            "east"  : __DIR__"n_area62",
            "west"  : __DIR__"n_area60",
      ]));

        set("objects", ([
      ]));

        setup();
}
