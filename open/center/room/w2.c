// Room: /u/l/lotus/girl/w2.c
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

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r4.c",
  "north" : __DIR__"r3.c",
  "west" : __DIR__"w3.c",
  "east" : __DIR__"w1.c",
]));
  set("light_up", 1);
  create_door("south", "��ľ��", "north", DOOR_CLOSED);
  create_door("north", "��ľ��", "south", DOOR_CLOSED);
  setup();
}
