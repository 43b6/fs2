// Room: /u/l/lotus/girl/tree2
#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "前院");
  set ("long", @LONG
院中有一棵大榕树, 客人们的轿子就停在树下. 各式各样的大轿
子, 从普通的到华丽的, 可想而知这里三教九流的人都有. 院子四周
种满了茶花, 开得相当好看.
LONG);

  set("light_up", 1);
  set("outdoors", "/u/l/lotus/girl");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tree.c",
  "south" : __DIR__"men.c",
]));

  setup();
}
