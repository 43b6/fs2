// room7.1 by roger
inherit ROOM;
#include <ansi.h>
#include <forest.msg>
void create () {
set ("short","ħɭ��");
   set ("long",
     (: print_forest_msg :)
    );

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 2 */
      "west" : __DIR__"room48",
      "east" : __DIR__"room57",
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/beast" : 1,
      ]));

        setup();
}
