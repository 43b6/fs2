// Room: /u/l/lotus/girl/r2.c
#include "/open/open.h"


#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��ɫ�ķ���");
  set ("long", @LONG
һ����ʰ���Ĵ�, ��ɫ���Ļ, ��������. ��������һ��ƿ��
�ӻ�. ���������͸����ɫ�Ĵ��������,������һ��ʮ����ܰ�ĸ�
��.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : CENTER_ROOM"w1.c",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"r2.c");
  create_door("north", "��ľ��", "south", DOOR_CLOSED);
  setup();
}
