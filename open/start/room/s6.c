// Room: /open/start/room/s6.c

#include <../start.h>

inherit ROOM;

void create ()
{
  set ("short", "ţ��");
  set ("long", @LONG
ţһֱ����������ʵ�Ļ�飬����ũ���ǵĺð��֣�
�Կ����͵����ԣ�ʹ��ũ�����ܹ�˳���ĸ��֣�Ҳ��ˣ�
ţ����ũ���ǵ���Ҫ�Ը�����������
    ����ӵļ����ǲɼ��������ķ�ʽ����ר���չˣ�
������С����Ű��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/start/room/s7",
  "north" : "/open/start/room/s4",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 2 */
  "/open/start/npc/b_guard" : 1,
  "/open/start/npc/y_buffalo" : 2,
]));

  setup();
}
