// Room: /u/l/lotus/girl/w6.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "井边");
  set ("long", @LONG
一口井, 井旁有盆子, 可能是姑娘洗完衣服后留下的. 隐隐约约
听到女孩子的哭声, 不知道是哪个方向传来的 .....
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r9.c",
  "east" : __DIR__"w5",
]));
  set("outdoors", "/u/l");
  create_door("south", "破旧的木门", "north", DOOR_CLOSED);
  setup();
}
