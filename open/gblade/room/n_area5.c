// n_area5.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(5)
);

        set("exits", ([
            "east" : __DIR__"n_area4",
            "west" : __DIR__"n_area6",
      ]));

        set("objects", ([
      ]));

        setup();
}
