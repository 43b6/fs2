// n_area45.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(45)
);

        set("exits", ([
            "east"  : __DIR__"n_area42",
            "west"  : __DIR__"n_area44",
            "south" : __DIR__"n_area52",
      ]));

        set("objects", ([
      ]));

        setup();
}
