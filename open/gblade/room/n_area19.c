// n_area19.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "����㳡");
        set("long",
             n_area(19)
);

        set("exits", ([
            "north" : __DIR__"n_area15",
            "east"  : __DIR__"n_area20",
            "west"  : __DIR__"n_area18",
            "south" : __DIR__"n_area22",
      ]));

        set("objects", ([
      ]));

        setup();
}
