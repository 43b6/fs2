#include </open/open.h>
#include <ansi.h>

inherit NPC;
inherit F_MASTER;

void create()
{
   set_name("����",({"john fon","john","fon"}));
   set("family","���˹�");
   set("nickname","�ټ���ѧ");
   set("title","����ͷ��");
   set("gender", "����");
   set("age",52);
   set("class", "bandit");
        set("guild_master", 1);
   set("bellicosity",1000);
   set("attitude", "badman");
   set("combat_exp",1000000);
   set("spi",50);
   set("int",50);
   set("str",10);
   set("cor",10);
   set("max_gin",1200);
   set("max_kee",3200);
   set("max_sen",1200);
   set("max_force",3500);
   set("force",3500);
   set("force_factor",10);
   
   set_skill("array",80);
   set_skill("steal",100);
   set_skill("change",100);
   set_skill("cure",60);
   set_skill("dodge",80);
   set_skill("force",80);
   set_skill("gamble",70);
   set_skill("literate",50);
   set_skill("magic",50);
   set_skill("move",80);
   set_skill("parry",80);
   set_skill("spells",50);
   set_skill("sword",80);
   set_skill("unarmed",80);
   set_skill("blade",80);
   set_skill("riding",20);
   set_skill("poison",60);
   set_skill("stabber",80);
   set_skill("archery",80);
   set_skill("whip",80);
   set_skill("throwing",80);
   set_skill("dagger",80);
   set_skill("plan",60);

setup();
        add_money("gold",30);
}

void init()
{
        object ob;
        ::init();
        if( interactive(ob = this_player())&& !is_fighting() ) 
 {
        remove_call_out("greeting");
        call_out("greeting",1 , ob);
 }
        add_action("do_join", "join");
}

int do_join()
{
        object who;
        who = this_player();

        if( who->query("class") )
        return notify_fail("���Ѿ��Ǳ�Ĺ����Ա�ˣ��������ң�\n");
        who->set("class", "bandit");
    tell_object(users(),"[1;36m���и��һ������������������[0m");
 
        return 1;
}

void greeting(object ob)
{
  if( ob->query("class")=="bandit")
 {
  if (ob->query("quests/steal") == 1 )
  {
   message_vision("[1;37m�ţ�͵�û����ɣ���[0m\n",ob);
  }
  else if (ob->query("combat_exp") > 100000 && ob->query("kar") == 30 )
  {
   message_vision("[1;32m���ϣ���ôǿ�˵����Ѿ����ٿ����ˣ�
�Ҿ��صؽ�����ô͵����steal�����˵Ķ����ɣ�[0m\n",ob);
   ob->set("quests/steal",1);
  }
  else if(ob->query("quests/karup") == 1)
  {
  message_vision("[1;32m���úð��������г�Ϣ��
���Ҿͽ�����ôȥ͵�����ɣ�steal����[0m\n",ob);
  ob->set("quests/steal",1);
  }
  else if (ob->query_temp("marks/karup",1))
  {
  message_vision("[1;33m��ô���������ӣ��ٲ�Ŭ���㣬�ҿɲ������ˣ�[0m\n",ob);
  }
  else if (ob->query("combat_exp") > 135000 && ob->query("kar") < 30 )
  {
   message_vision("[1;33m�ţ����������ʸ����Ҵ�����һЩ������
���������δ����˵㣬��취�������ټ�ǿ��ɣ�[0m\n",ob);
   ob->set_temp("marks/karup",1);
  }
 }
}
