inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", RED"���������"NOR);
  set ("long", @LONG

    ���߽�����, ͻȻһ���紵��, ���������ɳ, ����
�����⼲�統��, �ٸ�һ������, ��ǰ�ƺ��м�յ�ƻ�, ָ
�����߳��˵ء�

LONG);

  set("exits", ([ /* sizeof() == 5 */
  "���" : __DIR__"mi_dead.c",
  "��Ȩ" : __DIR__"mi01.c",
  "����" : __DIR__"mi02.c",
  "����" : __DIR__"mi_dead.c",
  "����" : "/open/main/room/maiu-1.c",
]));
  set("light_up", 1);
  set("no_transmit",1);

  setup();
}
