// Room: /open/start/room/f21.c

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

  set("objects", ([ /* sizeof() == 1 */
  "/open/start/npc/farmer2" : 1,
]));

  set("outdoors", "/open/start");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/start/room/f16",
  "east" : "/open/start/room/f22",
]));

  setup();
}
