// n_area52.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(52)
);

        set("exits", ([
            "north" : __DIR__"n_area45",
            "east"  : __DIR__"n_area49",
            "west"  : __DIR__"n_area51",
            "south" : __DIR__"n_area59",
      ]));

        set("objects", ([
      ]));

        setup();
}
