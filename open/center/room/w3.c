// Room: /u/l/lotus/girl/w3.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "走道");
  set ("long", @LONG
挂了两盏明晃晃的花灯, 煞是好看。南面和北面各有一道雕花木
门。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r6.c",
  "north" : __DIR__"r5.c",
  "east" : __DIR__"w2.c",
]));
  set("light_up", 1);
  set("file_name", __DIR__"w3.c");
  create_door("north", "雕花木门", "south", DOOR_CLOSED);
  create_door("south", "雕花木门", "north", DOOR_CLOSED);
  setup();
}
