#include <ansi.h>

inherit NPC;

string do_ask();

void create()
{
      set("title","����");
      set_name("�ݸ���",({"thin woman","thin","woman"}) );
      set("long",@LONG
һ��������ݵĸ��ˣ�ȴ��һ˫�̱����۾������ָ��˺ų��ǽ��ϵ�����ĵ���
���ø���ֵı���Ҳ�ǵ��ʲ������ָ��˵ġ�
LONG
      );
      set("age",49);                 
      set("attitude","peaceful");
      set("gender","Ů��");

      set_skill("dodge",30);
      set_skill("unarmed",35);
      set_skill("parry",25);
      set("combat_exp",1000);

      set("chat_chance",4);
      set("chat_msg",({
      "�ݸ���Ц��:�!�����Ӱ�,��.....\n",
      "�ݸ���Ц��:�Ǹ����°�,��˵����������һ������ҵ��!��....\n",
      }) );      

      set("chat_chance_combat",9);
      set("chat_msg_combat",({
      "�ݸ�����Ц��:��Ȼ��ô����,���������һ�̰ɡ�\n",
      "�ݸ������˵:С��,�����»�̫�ûᵱ�׳�,�ǲ���?�ҿ��п����!!\n",
      }) );
  set("inquiry",([
  "��ɱ������" : (: do_ask :),
  ]));

      setup();

      carry_object("/obj/cloth")->wear();
      add_money("silver",2);
}

int accept_fight(object who)
{
      write("�ݸ���������ָ�����ڶ��䡣\n");
      switch( random(2) ) {
       case 0: say ("�ݸ���̾��:��������Ҫز��,��~~��ϧ����\n");break;
       case 1: say ("�ݸ��˺ȵ�:"+RANK_D->query_rude(who)+"!�������������,��������������ֶΡ�\n");break;
  return 1;
      }
  return 1;
}
string do_ask()
{
  int me;
  object who = this_player();
    if(who->query_temp("marks/hand")!=1)
  {
    return "��ô�����ʶ�ɱ�� ?\n";
  }
  else
  {
  who->set_temp("marks/hand_again",1);
       return "���� !������..�ÿ�����С�ֵ�ѽ !û��ϵ ,��ɱֻ�ǲ���Ƿ��������� ,����һ�ο���..��Ӧ�û����˵���� .\n";
  }
}
