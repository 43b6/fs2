// n_area60.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(60)
);

        set("exits", ([
            "north" : __DIR__"n_area53",
            "east"  : __DIR__"n_area61",
            "west"  : __DIR__"n_area56",
      ]));

        set("objects", ([
      ]));

        setup();
}
