inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", HIC"���������"NOR);
  set ("long", @LONG

    ���߽�����, ͻȻһ���紵��, ���������ɳ, ����
�����⼲�統��, �ٸ�һ������, ��ǰ�ƺ��м�յ�ƻ�, ָ
�����߳��˵ء�

LONG);

  set("exits", ([ /* sizeof() == 5 */
  "��Ȩ" : __DIR__"mi_dead.c",
  "���" : __DIR__"mi03.c",
  "����" : __DIR__"mi_dead.c",
  "����" : __DIR__"mi_dead.c",
  "����" : "/open/main/room/maiu-1.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/killer" : 2,
]));
  set("light_up", 1);
  set("no_transmit",1);

  setup();
}
