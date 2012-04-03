#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("������һ��ɱ��",({"silver killer","killer","silver"}) );
  set("long","���ڴ˵����ػ�������Ĺ�������Ȼ���¹����� \n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",250000);
  set("age",30);
  set("title","�������ĳ�Ա");
  set("class","killer");
  set("cor",30);
  set("cps",30);
  set("str",20);
  set("kee",1000);
  set("max_kee",1000);
  set("force",700);
  set("max_force",700);
  set("force_factor",3);
  set("chat_chance",10);
  set("bellicosity",200);
  set_skill("rain-throwing",50);
  set_skill("throwing",55);
  set_skill("blackforce",35);
  set_skill("force",45);
  set_skill("dodge",55);
  set_skill("parry",55);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing");
 setup();
    add_money("gold",3);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(80);
    ob->wield();
    ob=carry_object("/open/killer/weapon/k_cloth2.c")->wear();
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
    tell_room(environment(me),"һ���ϣ������Ҳ�!�������� \n"),
    message_vision(HIB"\n������һ��ɱ�ֿ����������ѣ�������$N��������\n"NOR,me
);
     guard->fight_ob(me);
    return 1;
   }
}
void greeting(object ob)
{
  if( ob->query("class")=="killer")    
  {
    command("smile "+ob->query("id"));  
  }
  else  
  {
    command("say �ô������飡������ʲô�£� \t");
    command("hmm"); 
  }
}
