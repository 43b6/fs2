inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "[5m[1;37m�������������[2;37;0m");
  set ("long", @LONG

    ���߽�����, ͻȻһ���紵��, ���������ɳ, ����
�����⼲�統��, �ٸ�һ������, ��ǰһƬģ��, �������
���ܵ����

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "leave" : "/open/main/room/maiu-1.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/m-ya" : 1,
]));
  set("no_transmit", 1);

  setup();
  replace_program(ROOM);
}
