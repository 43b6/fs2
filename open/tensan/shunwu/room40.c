inherit ROOM;
#include <ansi.h>
#include <room.msg>

void create () {
        set ("short","玄武幻阵");
        set ("long",
        (: print_room_msg :)
        );
    
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
        "北门" : __DIR__"room43",
        "南门" : __DIR__"room39",
        "东门" : __DIR__"room44",
        "西门" : __DIR__"room35",
        ]));

        setup();
}
