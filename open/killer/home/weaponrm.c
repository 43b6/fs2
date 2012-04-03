#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","������");
  set ("long", @LONG
�����Ǻ�����ƽʱ��������ĵط�����������Կ������ٵı���
���Ǵ���ǰ�����ֻ�к������ĵ��ӿ�����������ȡ���������Ǳ���
������������ı���ʹ����(report)����֪����ʲô��������(list)��
����Ҳ�Ǵ�ž�������µ�װ���ĺõط�������չ����˰ɣ�
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "up":__DIR__"ru2.c",
]));

  set("objects",([
        "/open/killer/npc/manager": 1,
        "/open/killer/npc/young": 1,
]));
  setup();
}
void init()
{ 
   add_action("do_open","open");
}
int do_open()
{
   object me;
   me = this_player();
   
   if (me->query_temp("key")==3)
   {
    tell_room(me,""+me->query("name")+"���ţ���ר�ñ�������ȥ��\n");
    me->set_temp("key",0);
    me->move(__DIR__"haterm.c");
    return 1;
   }
   return 0;
}
