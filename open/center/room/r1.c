// Room: /u/l/lotus/girl/r1.c
#include "/open/open.h"


#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��ɫ�ķ���");
  set ("long", @LONG
һ����ʰ���Ĵ�, ��ɫ���Ļ, ��������, �輸����һƿװ��
ˮ��Ǿޱ, ��ɫ��������Ҳ���˴��СС��Ǿޱ.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : CENTER_ROOM"w1",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"r1.c");
  create_door("south", "��ľ��", "north", DOOR_CLOSED);
  setup();
}
