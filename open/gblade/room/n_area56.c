// n_area56.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����Ͽ�");
        set("long",
             n_area(56)
);

        set("exits", ([
            "north" : __DIR__"n_area49",
            "east"  : __DIR__"n_area60",
            "west"  : __DIR__"n_area59",
            "south" : __DIR__"n_area63",
      ]));

        set("objects", ([
      ]));

        setup();
}
