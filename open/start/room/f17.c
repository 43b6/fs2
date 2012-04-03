// Room: /open/start/room/f17.c

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
  "/open/start/npc/sparrow" : 2,
  "/open/start/obj/bogle" : 1,
]));

  set("outdoors", "/open/start");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/start/room/f12",
  "west" : "/open/start/room/f16",
  "south" : "/open/start/room/f22",
  "east" : "/open/start/room/f18",
]));

  setup();
}
