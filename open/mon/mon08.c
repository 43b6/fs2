inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "登山小道");
        set ("long", @LONG
小道上满是黄土杂草，通往长白山上的路途仍旧崎岖不平，愈往
上走愈觉得荒凉，愈往前走前途愈觉得茫茫然。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "east"  : __DIR__"mon10",
        "west"  : __DIR__"mon07",
]));
        setup();
}

