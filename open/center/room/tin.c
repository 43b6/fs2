// Room: /u/l/lotus/girl/guest4.c
#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "楼梯口");
  set ("long", @LONG
悬挂了两个明晃晃的花灯, 煞是好看有一道楼梯通往香楼上小姐
的房间。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tin2.c",
   "south" : __DIR__"tin3.c",
]));

  set("light_up", 1);
  set("file_name", __DIR__"guest4.c");
  setup();
}
