inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "别有洞天");
        set ("long", @LONG
想不到在这样的山洞之中还有这样的一个地方，里面光线充足，
长满了各式奇异的花花草草，还有各种珍奇的药草，另外有一棵水果
树在这洞天的一角，树上还长了两颗硕大的果实，令你想一嚐牠鲜美
的滋味，但是你却一直闻到一股更奇特的味道从另一方传了过来。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "out"      : __DIR__"mon29",
        "east"     : __DIR__"mon31",

]));
        setup();
}

