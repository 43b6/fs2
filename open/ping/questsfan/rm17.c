// Room: /u/d/dhk/questsfan/rm17
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

  set("exits", ([ /* sizeof() == 6 */
  "westup" : __DIR__"rm20",
  "westdown" : __DIR__"rm16",
  "southdown" : __DIR__"rm9",
  "northup" : __DIR__"rm19",
  "eastdown" : __DIR__"rm10",
  "eastup" : __DIR__"rm18",
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
  if(who->query_temp("run")!=4 && who->query_temp("run")==3)
  {
tell_object(who,""WHT"�����ɫ����Ӱ�ֿ���������ɽ�ϱ�ȥ����������Ҫ������׽�Բء�"NOR"\n");
   who->set_temp("run",4);
   remove_call_out("dhk");
  }
}

