// Room: /u/l/lotus/girl/r5.c
#include "/open/open.h"


#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��ˬ�ķ���");
  set ("long", @LONG
һ�Ÿ���ʰ���Ĵ�, ����ɫ���Ļ, ��������, ��̺Ҳ������
ɫ��, �輸����һƿ��ɫ��С��.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : CENTER_ROOM"w3.c",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"r5.c");
  create_door("south", "��ľ��", "north", DOOR_CLOSED);
  setup();
}
