#include <ansi.h>

inherit NPC;
string do_ask();

void greeting(object who);

void create()
{
      set("title","����");
      set_name("�ָ���",({"fat woman","fat","woman"}) );
      set("long",@LONG
 һ�������˶�ĸ��ˣ�Χ��һ���������Χȹ�����������ϵ��˳��̣���ɤ�ź�����
�����������Ͽ�˵�������ܳ����ҡ�û�µĻ��������ԶЩ��
LONG
      );
      set("age",38);
      set("attitude","peaceful");
      set("gender","Ů��");

      set_skill("dodge",25);
      set_skill("unarmed",30);
      set_skill("move",30);
      set("combat_exp",2000);

      set("chat_chance",4);
      set("chat_msg",({
      "�ָ��˿�ĭ��ɵ�˵:����Ǹ����°�,��˵��Ů����˦��Ү����.....\n",
      "�ָ����˸߲��ҵ�˵:�ҼҵĴ󱦰�,��Խ��Խ��������.....\n",
      "�ָ��������ֻ���˵:��˵��,���ڵ���̫̫�ͱ�������Ү....\n",
      "�ָ����������ֵ�˵:��ɱ�����ְ�,������Ǳ���һ������������ϵ�Ү....\n",
      }) );
      set("inquiry",([
      "����"   : (: do_ask :),
      "���Ƽ�ǿ" : (: do_ask :),
      "��ǿ����" : (: do_ask :),
      ]));

      setup();

      carry_object("/obj/cloth")->wear();
      add_money("silver",3);
}

int accept_fight(object who)
{
      message_vision("�ָ�����������$Nһ�ۡ�\n",who);
      command ("say ��ô?���������è�Ĺ���Ҳ������ﶯ��?Ѱ��ô?\n");
      return 1;
}

void init()
{
      object who;
      ::init();
      if( interactive( who=this_player()) && !is_fighting() ) {
        remove_call_out("greeting");
        call_out("greeting",1,who);
      }
}

void greeting(object who)
{
      if( !who||environment(who)!=environment() ) return;
      switch (random(2)) {
      case 0:
      say("�ָ������:��ô���ĸ���Ҳ�������������ô��������ȥȥ��\n");
      break;
      case 1: 
      say("�ָ��˵ɵ�:ι!"+RANK_D->query_rude(who)+",û�µĻ��͸������ԶЩ,�����������졣\n");
      break;
      }
}

string do_ask()
{
  int me;
  object who = this_player();
    if(who->query_temp("marks/karup")!=1)
  {
   return "����˵ɶ��?\n";
  }
  else
  {
   who->set_temp("marks/karup2",1);
   return "�ڶ��˹��е�ĳ����������лᷢ��Ķ���....\n";
  }
}
