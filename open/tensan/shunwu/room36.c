inherit ROOM;
#include <ansi.h>
#include <room.msg>

void create () {
        set ("short","�������");
        set ("long",
        (: print_room_msg :)
        );
    
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
        "����" : __DIR__"room35",
        "����" : __DIR__"room38",
        "����" : __DIR__"room39",
        "����" : __DIR__"room37",
        ]));

        setup();
}
