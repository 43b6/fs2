// Room: /u/d/dhk/questsfan/rm15
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""WHT"ʯ��"NOR"");
  set ("long", @LONG
�����һ����ݲ�������ʯ�����ĵط��������������һЩ��
�ι�״�ľ�ʯ�Ĵ�����������ȴ�ֲ���������ɵģ����Դ˵ص���
��ʯ�֡�Ҳ������ϸ������Щ��ʯ����Щ�ʵ���ɢ����Щ�ʵؼ�Ӳ
��ʽ������ʯ�ζ��У���һ����ʯͷ���԰һ�㡣

LONG);

  set("exits", ([ /* sizeof() == 5 */
  "southdown" : __DIR__"rm16",
  "northup" : __DIR__"rm14",
  "west" : __DIR__"rm15",
  "eastup" : __DIR__"rm19",
  "eastdown" : __DIR__"rm17",
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
  if(who->query_temp("run")!=5 && who->query_temp("run")==4)
  {
   tell_object(who,""WHT"�����ɫ����Ӱ�ֿ��ٳ����߱�ȥ������׷�ϲ�����"NOR"\n");
   who->set_temp("run",5);
   remove_call_out("dhk");
  }
}

