// Room: /open/poison/room/room12
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "˵���ò���");
  set ("long", @LONG
������˵���ò�������ͬ�����γ�һ��������ʵĴ���
�ã�ƽ�������������ڴ�������ѧϰ������ѧ��֪ʶ�ͼ�
�ܡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"r1.c",
  "north" : __DIR__"room11",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/envoy2" : 1,
]));

  setup();
}
