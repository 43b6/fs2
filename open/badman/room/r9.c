// Room: /open/badman/room/r9

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "����ڲ�");
  set ("long", @LONG
��û�뵽....:b

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"r8",
]));
  create_door("north", "����", "south", DOOR_LOCKED);

  setup();
}
