#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","װ����");
  set ("long", @LONG
�����Ǻ�������������ȡ�����ĵط�����������Կ������ٵı���
����Կ���һ��װ���䣬ֻ��Ҷ��ɱͬ��ſ�����ȡ��
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "down":__DIR__"masterm.c",
  "east":__DIR__"misrm3.c",
]));

  set("objects",([
/*        "/open/killer/npc/spy1": 1, */
        "/open/killer/obj/misbox1.c": 1,
]));
  setup();
}
void init()
{ 
   add_action("do_search","search");
}
int do_search()
{
   object me;
   me = this_player();
   
   if (me->query_temp("god")==1)
   {
    tell_room(me,""+me->query("name")+"����·����������ȥ��\n");
    me->set_temp("key",0);
    me->move(__DIR__"misrm2.c");
    return 1;
   }
   return 0;
}
