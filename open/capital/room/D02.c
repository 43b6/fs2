// Room: /open/capital/room/D02.c
#include </open/capital/capital.h>
#include <ansi.h>


inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����Ǿ��ǵ����������֮һ������������������������, ʥ�ϵ�
ס�����ڣ������������̲�Ҳ�ر��ϸ�����������ݲ������˽���
���£��ǿ��ǳԲ��涵�����ˡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/gate_soldier" : 1,
]));

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r15",
  "east" : "/open/main/room/r16",
]));

  setup();
}

int valid_leave(object me , string dir)
{
        object guard;
        guard=present("gate soldier",this_object());
        if( dir=="north" && objectp(guard) && !me->query_temp("���������������") )
         if(!guard->query_temp("unconcious"))
          if(!wizardp(me))
           return notify_fail("����������������˵��[1;31m������ȷ�ϲſ��Խ��ǡ�[0m\n");
        return ::valid_leave(me,dir);
}
