//room:/open/dancer/room/start.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIY "���߹���" NOR );
  set ("long", @LONG

                ���߹���

���������ߵĹ�����������������(join)��Ϊ����
��������ֱ�Ӱݹ��������Ϊʦ���������˸е�����
����Ϊ��Զ�ھ��µ���ҹ��С���乫����������ӽ�
�µľ����أ�

LONG);

  set("light_up", 1);
  set("valid_startroom", 1);
  set("exits", ([ /* sizeof() == 1 */
 "west" : __DIR__"r69",

]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/master_linr.c" : 1,
]));

  setup();
  call_other("/obj/dancer_bc.c","???");
  }