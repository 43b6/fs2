inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // 不是说要加这一行吗?
        set("short",HIC"-四象迷宫阵眼-"NOR);
        set("long", @LONG
这里是阵法的中心，只见眼前一亮所有四象迷宫的幻象都消失了，
壁上的夜明珠将这里照亮的十分光彩亮丽。眼前站者两个泷山护卫。
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/wu/room/gen2",
  "north" : "/open/wu/room/gen8",
]));
  set("light_up", 1);
  set("no_transmit",1);
  set("no_auc",1);
  set("need_key/north",1);
  create_door("north",HIR"红色铁门"NOR,"south",DOOR_LOCKED);
  set("objects", ([ /* sizeof() == 1 */
"/open/wu/npc/guard" : 2,
  "/open/wu/npc/guard1" : 1,
]));
  setup();
}
