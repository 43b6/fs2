// Room: /u/d/dhk/questsfan/rm13
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""HIC+BLINK"�ֱ����"NOR"");
  set ("long", "
�˵�����ɽ����ߴ���վ���ڴ�����һ���������ף���Ȼ�Ե�
֮�У��������������¼���һ���֮���������ޱ��۴�ص�����
���������̹ѽ�����Դ˵���һ�ųƣ�Ի���ֱ���ء��������ڣ�
��������һ��ƽ��ȷ���Գ�Ȼ֮��������ؿ����ķֿ�����������
�У��ϲ����졢�²����صĹ¼š����ڳ�Ц��ص����ܣ�Ψ�Ҷ���
�ĸо���
  ������"HIR"������"NOR"������"HIY"������������������"NOR"������"HIR"������"NOR"������

");

  set("exits", ([ /* sizeof() == 3 */
  "southdown" : __DIR__"rm19",
  "westdown" : __DIR__"rm14",
  "eastdown" : __DIR__"rm12",
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
  int linpo=(int)(who->query_skill("linpo-steps",1));
  int move=(int)(who->query_skill("move",1));
  int dodge=(int)(who->query_skill("dodge",1));
  int exp=(int)(who->query("combat_exp")); 
  object mime=new("/open/ping/questsfan/npc/mime.c");  if(who->query_temp("run_over")!=1 && who->query_temp("run")==7)
  {
   if(linpo>=100 && move>=70 && dodge>= 70 && exp>=2000000)
   {
   tell_object(who,""HIR"��Ȼ����ͣ�����ˡ�"NOR"\n");
if(!present("mime duan",environment(who)))
{
   mime->move(__DIR__"rm13.c");
}
   tell_object(who,"����˵��:���¶��ҽ�׷���ᣬ��Ϊ�ι��ء�"NOR"\n");
   who->set_temp("run_over",1); 
   who->set_temp("run",0);   }
else
{
   tell_object(who,"\n"WHT"�����ɫ����Ӱ�ֿ���������ɽ����ȥ������˵:�����Ϊ��������׷���ҡ�"NOR"\n");
tell_object(who,""WHT"������!!!"NOR"\n");
   who->set_temp("run",8);
}
   remove_call_out("dhk");
  }
}

