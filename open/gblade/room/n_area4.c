// n_area4.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(4)
);

        set("exits", ([
            "east" : __DIR__"n_area3",
            "west" : __DIR__"n_area5",
      ]));

        set("objects", ([
      ]));

        setup();
}
