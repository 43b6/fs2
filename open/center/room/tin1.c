// Room: /u/l/lotus/girl/tin1.c
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������յ���λεĻ���, ɷ�Ǻÿ�, ���ﳪС�����ĸ���һ��һ
��Ʈ�� ~~
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"guest2.c",
  "north" : __DIR__"tin2.c",
  "east" : __DIR__"guest3.c",
]));
  set("light_up", 1);

  setup();
}
