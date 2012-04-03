// Room: /open/start/room/f3.c

#include <../start.h>

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�㿴��һƬ�����͵ĵ�������г����ŵ��ݵ���ζ��
�Ĵ������ĵ����������ڹ�����ũ���ǣ�������һ����׼��
ũ�徰��������ȥ���Կ������ƴ塣

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/start/npc/buffalo" : 1,
  "/open/start/npc/hen" : 2,
  "/open/start/npc/farmer1" : 1,
]));

  set("outdoors", "/open/start");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/start/room/s8",
  "west" : "/open/start/room/f2",
  "south" : "/open/start/room/f8",
  "east" : "/open/start/room/f4",
]));

  setup();
}
