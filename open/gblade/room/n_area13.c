// n_area13.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "��Ұʯ��");
        set("long",
             n_area(13)
);

        set("exits", ([
            "north" : __DIR__"n_area12",
      ]));

        set("objects", ([
      ]));

        setup();
}
