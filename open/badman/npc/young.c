#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  set_name("����",({"young"}) );
  set("long","���������е����۽ǵ���ǵĵ��̣�\n��ͷ�ڷ�Ҳû��ã�ֻ���˸��ᡣ\n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",12345678);
  set("age",18);
  set("no_kill",1);
  set("kee",987654);
  set("max_kee",987654);
  set("force",77777);
  set("max_force",77777);
  set("force_factor",999);
  set_skill("unarmed",150);
  set_skill("badstrike",150);
  map_skill("unarmed","badstrike");
  
  setup();
}
void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1 , ob);   }
}
void greeting(object ob)
{
  if (ob->query("quests/karup",1))
  {
   message_vision("[1;37m�ţ���ô�����뿪�գ���[0m\n",ob);
  }
  else {
  message_vision("[1;32m�ţ�û�°ɣ������Ҽ�ʱ�ϵ�����Ȼ���Σ���ˡ�
��߿��Ƕ��˹ȵĽ��أ��Ժ��Ǳ��Ҵ��ĺá�[1;36m
������Ҫ�ҵĶ�������������ɣ��Ժ�ҪС�ĵ㰡��[1;37m
��������������������ȶ������ٶ����ˣ�Σ�հ���[0m\n",ob);
  new("/data/autoload/badman/ste.c")->move(ob);
  ob->set("quests/karup",1);
  ob->set("marks/fish",1);
  }
}
