#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "瀑布上游");
  set ("long", @LONG
费尽千辛万苦 ,终于凭着过人的轻功和敏捷的思绪登上了瀑布的
上游 ,眼看着那小屋就近在眼前了 ,快进去吧 !

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room36",
  "southdown" : __DIR__"room27",
]));
  create_door("enter", "木雕门", "out", DOOR_CLOSED);
  setup();
}


