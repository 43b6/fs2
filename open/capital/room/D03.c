// Room: /open/capital/room/D03.c
#include </open/capital/capital.h>

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����Ǿ��ǵ����������֮һ�������š�, ���ھ���������������
��, ʥ�ϵ�ס�����ڣ������������̲�Ҳ�ر��ϸ�����������ݲ�
�����˽������£��ǿ��ǳԲ��涵�����ˡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/gate_soldier" : 1,
]));

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/main/room/s17",
  "north" : "/open/capital/room/r35",
]));

  setup();
}

int valid_leave(object me, string dir)
{
        object guard;

        if (!objectp (guard=present ("gate soldier",this_object())))
	  return 1;

        if (dir=="north" && !me->query_temp("���������������"))
	 if(!guard->query_temp("unconcious"))
          if(!wizardp(me))
           return notify_fail("������������������˵��[1;31m������ȷ�ϲſ��Խ��ǡ�[0m\n");

	return 1;
}
