inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", HIY"���������"NOR);
  set ("long", @LONG

    ���߽�����, ͻȻһ���紵��, ���������ɳ, ����
�����⼲�統��, �ٸ�һ������, ��ǰ�ƺ��м�յ�ƻ�, ָ
�����߳��˵ء�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"mi09.c",
  "leave" : "/open/main/room/maiu-1.c",
]));
  set("light_up", 1);
  set("no_transmit",1);

  setup();
}
