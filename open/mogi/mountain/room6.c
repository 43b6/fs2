// room1.c by roger

inherit ROOM;
#include <ansi.h>
#include <mountain.msg>
void create () {
set ("short","��а��");
   set ("long",
     (: print_mountain_msg :)
    );

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 2 */
       "north" : __DIR__"room7",
       "south" : __DIR__"room4",
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/beast" : 1,
      ]));

        setup();
}
