// Room: /u/l/lotus/girl/tin2.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��Ժ�ſ�");
  set ("long", @LONG
������˺Ȼ������ֵ�����һ��һ����, ������һ����ͨ����
Ժ��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"tin1.c",
  "west" : __DIR__"w4.c",
  "east" : __DIR__"guest4.c",
]));
  set("light_up", 1);
  create_door("west", "ľ��", "east", DOOR_CLOSED);
  setup();
}
