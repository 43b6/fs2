// n_area53.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(53)
);

        set("exits", ([
            "north" : __DIR__"n_area46",
            "east"  : __DIR__"n_area54",
            "west"  : __DIR__"n_area49",
            "south" : __DIR__"n_area60",
      ]));

        set("objects", ([
      ]));

        setup();
}
