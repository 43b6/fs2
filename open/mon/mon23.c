inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "碎岩小径");
        set ("long", @LONG
细细的碎石布满了整个小径，稀稀疏疏的野草已藏不住这里的荒
凉，罕至的人烟，孤独的小径，只剩孤空中的苍鹰高空相随，冷冷的
小径，只剩缥缈中的云雾贴身相伴。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "southdown"      : __DIR__"mon22",
        "westup"         : __DIR__"mon24",

]));
        setup();
}

