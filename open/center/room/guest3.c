// Room: /u/l/lotus/girl/guest3.c
#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "曲厅");
  set ("long", @LONG
唱歌的姑娘年纪轻轻的, 技巧很好, 吸引了很多人在这儿饮酒听
小曲儿. 一旁拉琴的老头子, 是个好手, 听说巧心姑娘是他的关门弟
子,现在年岁大了, 不肯再收弟子了.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : CENTER_ROOM"guest.c",
  "north" : CENTER_ROOM"guest4.c",
  "west" : CENTER_ROOM"tin1.c",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"guest3.c");

  setup();
}
