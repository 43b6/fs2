// Room: /u/d/dhk/questsfan/rm15
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[0;37mʯ��[0m");
  set ("long", @LONG
�����һ����ݲ�������ʯ�����ĵط��������������һЩ��
�ι�״�ľ�ʯ�Ĵ�����������ȴ�ֲ���������ɵģ����Դ˵ص���
��ʯ�֡�Ҳ������ϸ������Щ��ʯ����Щ�ʵ���ɢ����Щ�ʵؼ�Ӳ
��ʽ������ʯ�ζ��У���һ����ʯͷ���԰һ�㡣

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/woman" : 2,
]));
  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"rm20",
  "eastup" : __DIR__"rm14",
  "eastdown" : __DIR__"rm16",
  "west" : __DIR__"rm26",
]));

  setup();
}
void init()
{
    call_out("dhk",1,this_player());
}
void dhk(object who)
{
  if(who->query_temp("run")!=6 && who->query_temp("run")==5)
  {
   tell_object(who,""WHT"�����ɫ����Ӱ����ֳ�����ɽ�ϱ�ȥ��������Ŭ���������ۣ�����׷�ϲ�����"NOR"\n");
   who->set_temp("run",6);
   remove_call_out("dhk");
  }
}

