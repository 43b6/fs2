// Room: /open/death/gate.c
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", "[1;37m���Ź�[2;37;0m");
  set ("long", @LONG
�������������������ڡ����Źء���������ǰ������һ���ߴ��
��ɫ��¥���ڶ��������޿�������ж�ǰ������Ϊһ�����Źؾ��޷���
�������ˡ�
LONG);
 set("no_auc",1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"gateway",
  "south" : __DIR__"bridge3",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wgargoyle" : 1,
]));
  set("no_magic", 1);
  set("no_transmit", 2);

  setup();
}

int valid_leave(mixed me, string dir)
{
        if (dir == "south") 
                return notify_fail("���˹��Źؾͱ����ȥ�ˣ�\n");
        else
                return 1;
}

