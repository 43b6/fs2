// Room: /u/d/dhk/questsfan/rm14
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[0;32m��������[2;37;0m");
  set ("long", @LONG
���ֱ��ա��������ɡ��ɹ����أ��������ֵ���һƬ������
��û�������꾥�ɣ������ر𡣲�ʱ�м�ֻ��������β����񱼶�
������Ȼ������������������ر���Ǡ��ǵ�һ��ͻȻ�Ĵ�����Ȼ
����һ��İ�������һ��ͻ���������������൱�����𺳵ġ�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "westdown" : __DIR__"rm15",
  "southdown" : __DIR__"rm20",
  "eastdown" : __DIR__"rm19",
  "eastup" : __DIR__"rm13",
]));
  set("outdoors", "/u/d");

  setup();
}
void init()
{
    call_out("dhk",1,this_player());
}
void dhk(object who)
{
  if(who->query_temp("run")!=7 && who->query_temp("run")==6)
  {
   tell_object(who,""WHT"׷����ô�������ϳ�����������"HIY"�貨΢��"NOR+WHT"�������ɫ����Ӱ����ֳ�����ɽ�ϱ�ȥ������׷�ɡ�"NOR"\n");
   who->set_temp("run",7);
   remove_call_out("dhk");
  }
}

