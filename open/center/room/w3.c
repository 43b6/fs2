// Room: /u/l/lotus/girl/w3.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "�ߵ�");
  set ("long", @LONG
������յ���λεĻ���, ɷ�Ǻÿ�������ͱ������һ����ľ
�š�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r6.c",
  "north" : __DIR__"r5.c",
  "east" : __DIR__"w2.c",
]));
  set("light_up", 1);
  set("file_name", __DIR__"w3.c");
  create_door("north", "��ľ��", "south", DOOR_CLOSED);
  create_door("south", "��ľ��", "north", DOOR_CLOSED);
  setup();
}
