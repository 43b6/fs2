#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "卧房");
  set ("long", @LONG

刚至房中，便有一股细细的甜香，房中如雪洞一般，一色的玩器全无；案
上只有一个土定瓶，瓶中供着数枝菊，并两部书，茶壶，茶杯而已；床上
只吊着青纱帐幔，衾褥也十分朴素。传闻王家大小姐喜好素净，看这里的
摆饰，传闻并不假。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "east" : (: look_door,     "east" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g3-5",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/leing.c" : 1,
]));
  set("light_up", 1);

	create_door("east","雕花紫檀木门","west",DOOR_CLOSED);
  setup();
}
