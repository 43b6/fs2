// n_area44.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�����");
        set("long",
             n_area(44)
);

        set("exits", ([
            "east"  : __DIR__"n_area45",
            "west"  : __DIR__"n_area43",
            "south" : __DIR__"n_area51",
      ]));

        set("objects", ([
      ]));

        setup();
}
