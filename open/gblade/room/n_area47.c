// n_area47.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(47)
);

        set("exits", ([
            "east"  : __DIR__"n_area48",
            "west"  : __DIR__"n_area46",
            "south" : __DIR__"n_area54",
      ]));

        set("objects", ([
      ]));

        setup();
}
