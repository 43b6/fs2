// n_area3.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(3)
);

        set("exits", ([
            "east"  : __DIR__"n_area2",
            "west"  : __DIR__"n_area4",
            "south" : __DIR__"n_area14",
      ]));

        set("objects", ([
      ]));

        setup();
}
