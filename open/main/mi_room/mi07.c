inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", HIW"���������"NOR);
  set ("long", @LONG

    ���߽�����, ͻȻһ���紵��, ���������ɳ, ����
�����⼲�統��, �ٸ�һ������, ��ǰ�ƺ��м�յ�ƻ�, ָ
�����߳��˵ء�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "leave" : "/open/main/room/maiu-1.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/hu" : 1,
]));
  set("light_up", 1);
  set("no_transmit",1);

  setup();
}
