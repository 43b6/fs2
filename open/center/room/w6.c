// Room: /u/l/lotus/girl/w6.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ�ھ�, ����������, �����ǹ���ϴ���·������µ�. ����ԼԼ
����Ů���ӵĿ���, ��֪�����ĸ��������� .....
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r9.c",
  "east" : __DIR__"w5",
]));
  set("outdoors", "/u/l");
  create_door("south", "�ƾɵ�ľ��", "north", DOOR_CLOSED);
  setup();
}
