// Room: /open/poison/room/room15
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�ؾ���");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"room13",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "east" : (: look_door,     "east" :),
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/obj/pbasebook.c" : 1,
]));
  set("light_up", 1);
  set("need_key", ([ /* sizeof() == 1 */
  "east" : 1,
]));

  setup();
}
