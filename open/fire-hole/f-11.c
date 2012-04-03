#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIR"火龙幻界边缘"NOR);
  set ("long", @LONG
这里是结界的边缘, 这里的魔法力就没那么的强烈了, 天候温度跟平
常一样, 但还未离开幻界的控制范围, 这里有一根直达云际, 十分奇怪的
巨石, 这个也是拿来巩固结界用的吧! 
LONG);

  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"f-10.c",
  "southwest" : __DIR__"f-18.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/fire-hole/npc/fire-liz.c" : 1,
  "/open/fire-hole/npc/fire-turtle.c" : 1,
]));

  setup();
}
