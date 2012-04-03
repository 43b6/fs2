#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("ɱ�ֻ���",({"killer guard","killer","guard"}) );
  set("long","���ڴ˵����ػ������Ĺ�������Ȼ���¹����� \n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",250000);
  set("age",60);
  set("title","�������ĳ�Ա");
  set("class","killer");
  set("cor",30);
  set("cps",30);
  set("str",40);
  set("kee",1300);
  set("max_kee",1300);
  set("force",800);
  set("max_force",800);
  set("force_factor",5);
  set("chat_chance",10);
  set("bellicosity",350);
  set_skill("rain-throwing",70);
  set_skill("throwing",75);
  set_skill("blackforce",50);
  set_skill("force",50);
  set_skill("dodge",70);
  set_skill("parry",70);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing");
 setup();
    add_money("gold",4);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(60);
    ob->wield();
    ob=carry_object("/open/killer/weapon/k_cloth2.c")->wear();
    ob=carry_object("/open/killer/weapon/k_hand1.c")->wear();
    ob=carry_object("/open/killer/weapon/k_belt1.c")->wear();
    ob=carry_object("/open/killer/weapon/k_coat1.c")->wear();
}
void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1 , ob);   }
}
int accept_kill(object ob)
{
message_vision( this_object()->name()+"˵:�Ƚ������������аɣ�\n",ob);
  add("bellicosity",700);
  command("cmd bellup");
   return 1;

}
int accept_fight(object me)
{
    object ob,guard;
    ob=this_object();

    guard=present( "guard 2",environment(ob) );
     if( !present( "guard 2",environment(ob))||!living(guard)) return 1;
    else {
    tell_room(environment(me),"ɱ�ֽ�ͷ��:һ���ϣ������Ҳ�!�������� \n"),
    message_vision(HIB"\nɱ�ֽ�ͷ�������������ѣ�������$N��������\n"NOR,me
);
     guard->fight_ob(me);
    return 1;
   }
}
void greeting(object ob)
{
  if(!ob) return ;
  if(!ob) return ;
  if( ob->query("class")=="killer")    
  {
    command("smile "+ob->query("id"));  
  }
  else  
  {
    command("say �����кι�ɣ� \t");
    command("hmm"); 
  }
}
