// Room: /u/l/lotus/girl/r6.c
#include <room.h>

#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "��ɫ�ķ���");
  set ("long", @LONG
һ����ʰ���Ĵ�, ����ɫ���Ļ, ��������, �輸����һ��ƿ
ʢ��������, �����������һ���������, ͸���������ĸо�.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : CENTER_ROOM"w3.c",
]));
  set("light_up", 1);

  create_door("north", "��ľ��", "south", DOOR_CLOSED);
  setup();
}
