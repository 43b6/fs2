// Room: /u/l/lotus/girl/r3.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "���ɫ�ķ���");
  set ("long", @LONG
�������ҵĴ�, ���ɫ���Ļ, ���������������Դ�͸������
��ɫ, �輸����һƿ��ˮ�ٺ�.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"w2.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  CENTER_NPC"fung.c" : 1,
  CENTER_NPC"cowman.c" : 1,
]));
  set("light_up", 1);
  create_door("south", "��ľ��", "north", DOOR_CLOSED);
  setup();
}
