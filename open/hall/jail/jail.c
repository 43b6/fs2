// Room: /open/hoom/hall/jail.c

inherit ROOM;
#include <room.h>

#include <ansi.h>

void create()

{

        set("short", "牢头休息区");
        set("long", @LONG
这ㄦ是牢头的休席区，一个腊蹋的壮汉正翘着二郎腿，哼着淫秽的
小调..桌上摆着几碟小菜和一壶白干，这家伙似乎还蛮会享受的......
牢头的身上挂着一串钥匙，但是你最好不要有劫狱的念头，除非你很强
壮..嘿嘿....
LONG);

        set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"jail1",
  "north" :__DIR__"jail2",

  ]));

        set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/j_head" : 1,
]));
create_door("out", HIR "厚重锈气的铁门" NOR ,"enter",DOOR_CLOSED);
        setup();

}

