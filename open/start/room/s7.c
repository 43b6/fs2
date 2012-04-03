// Room: /open/start/room/s7.c

#include <../start.h>

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
���������������ļ����������ڶ��������Ǵ�����
��������ĵط������ӵ����������氲���Ĵ����γɽ�Ȼ
��ͬ���������磬������������ƴ��������ֵĵط��ɣ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/start/room/s6",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 2 */
  "/open/start/npc/chicken" : 3,
  "/open/start/npc/hen" : 3,    //hen add by nako
]));

  setup();
}
