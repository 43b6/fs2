// n_area58.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(58)
);

        set("exits", ([
            "north" : __DIR__"n_area51",
            "east"  : __DIR__"n_area59",
            "west"  : __DIR__"n_area57",
            "south" : __DIR__"n_area64",
      ]));

        set("objects", ([
      ]));

        setup();
}
