// Room: /u/r/ranko/room/sh4.c
#include <room.h>
#include "/open/open.h"

inherit HOCKSHOP;

void create ()
{
  set ("short", "当铺");
  set ("long", @LONG
本村仅有的一间当铺，店里堆放了许多破破烂烂的东西，东一
堆，西一堆凌乱地放着。大多是一些没有价值的物品，据说本店的
老板是一个奇怪的人，专门喜欢收集一些别人不要的东西当成宝来
存放着，因此村民只要一有不要的东西大多会拿来此处卖，而老板
也是来者不拒，甚么物品都照单全收。
你可以在此典当物品(pawn)，请人鉴定物品价值(value)，或赎回
典当的物品(redeem)。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"v2-5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/pawn.c" : 1,
]));
  set("light_up", 1);

  setup();
}
