inherit ROOM;
#include <ansi.h>
void create () {
        set ("short","登山步道");
        set ("long",@LONG
你眼前看到一条登山步道无限的往上延伸而去，正所谓万丈高楼平地
起，虽然你不知道这条路有多长，不过不踏出你的第一步肯定是永远到不
了山顶的。
LONG);
           
        set("exits", ([ /* sizeof() == 1 */
        "northup" : __DIR__"room4",
        "south" :  __DIR__"room2",       
        ]));

       
        setup();
}
