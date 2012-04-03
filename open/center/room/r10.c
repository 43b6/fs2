// Room: /open/center/room/r10.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�ղ������Ĺ��������, Ѿ��ƻ������һ����, ��ʱ����������
����. ƻ�������㴳�˽���, �Ծ��Ŀ�����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"tin4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  CENTER_NPC"ping.c" : 1,
]));
  set("light_up", 1);
  create_door("north", "��ľ��", "south", DOOR_CLOSED);
  setup();
}
