// n_area59.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(59)
);

        set("exits", ([
            "north" : __DIR__"n_area52",
            "east"  : __DIR__"n_area56",
            "west"  : __DIR__"n_area58",
      ]));

        set("objects", ([
      ]));

        setup();
}
