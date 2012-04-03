// Room: /open/center/room/tin4.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "¥�ݿ�");
  set ("long", @LONG
�Ͳ�����Ȼ��ͬ������, ���ŵ���, һ��ɽˮ����ī��, ��֦
��÷, �����������Ű�Ȼ������. ��һ��¥��ͨ����¥С��ķ���,
������һ�ȵ�ľ��.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"tin3.c",
  "south" : __DIR__"r10.c",
  "up" : __DIR__"f2a.c",
//  "east" : __DIR__"gstore",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/chang.c" : 1,
]));
  create_door("south", "��ľ��", "north", DOOR_CLOSED);
  setup();
}
