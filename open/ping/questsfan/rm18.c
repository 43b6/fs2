// Room: /u/d/dhk/questsfan/rm10
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""HIY"����"HIG"����"NOR"");
  set ("long", @LONG
�����һ�����ַ��ӣ��ߴ�����֡�������������������ɫ
ȷ��û��һ��ֹͣ��С�꣬�����������ֵı�ƾͽУ����ո��ء�
����˵������ղ�ͣ��������Ϊ������һ���ڴ˵���Ϣ����Ϊ̫��
�����ô˵���һ��С�꣬��������Ϣ��ȴ�Ҵ���ȥ����û�����ⳡ
��ֹͣ�����ԴӴ���������ûͣ����

LONG);

  set("exits", ([ /* sizeof() == 5 */
  "westup" : __DIR__"rm19",
  "east" : __DIR__"rm11",
  "southdown" : __DIR__"rm10",
  "westdown" : __DIR__"rm17",
  "northup" : __DIR__"rm12",
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
  if(who->query_temp("run")!=3 && who->query_temp("run")==2)
  {
   tell_object(who,""WHT"�����ɫ����Ӱ�ֿ���������ɽ����ȥ���������ȴ������ʶ��"NOR"\n");
   who->set_temp("run",3);
   remove_call_out("dhk");
  }
}

