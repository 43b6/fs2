// n_area46.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(46)
);

        set("exits", ([
            "east"  : __DIR__"n_area47",
            "west"  : __DIR__"n_area42",
            "south" : __DIR__"n_area53",
      ]));

        set("objects", ([
      ]));

        setup();
}
