// Room: /u/l/lotus/girl/r4.c
#include "/open/open.h"


#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "����ɫ�ķ���");
  set ("long", @LONG
һ����ʰ���Ĵ�, ����ɫ���Ļ, ��������, �輸����һƿ��
����. ��ǽ����һ������, ����һ������ʨ��, ��һ����Ż�ƿ.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : CENTER_ROOM"w2.c",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"r4.c");
  create_door("north", "��ľ��", "south", DOOR_CLOSED);
  setup();
}
