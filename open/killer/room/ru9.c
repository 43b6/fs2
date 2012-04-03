#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","总坛大厅左翼");
  set ("long", @LONG
这里是黑牙联总坛大厅左翼，为通往黑牙联最狡诈的银狼暗杀组的通道。
如此设计是为了保护大厅的安全，然而没有叶秀杀命令，他们也不敢主动保护。
然而，必须小心的是不知道何时会有人从你背后冒出来，然后给你一刀。
狭长的通道，隐藏的机关，正代表了你将要去的地方。
传说当年金刀门进攻此处，死伤无数。
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "westdown":__DIR__"silr1",
  "south":__DIR__"ru7",
]));

 /* set("objects",([
        "/open/killer/npc/spy1.c" : 1,
        ]));  */
  setup();
}