// n_area51.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(51)
);

        set("exits", ([
            "north" : __DIR__"n_area44",
            "east"  : __DIR__"n_area52",
            "west"  : __DIR__"n_area50",
            "south" : __DIR__"n_area58",
      ]));

        set("objects", ([
      ]));

        setup();
}
