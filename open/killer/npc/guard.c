#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("ɱ������",({"killer guard","killer","guard"}) );
  set("long","��������ɱ�����죬�����һλɱ�˲�գ�۵��� �� \n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",50000);
  set("age",21);
  set("title","�������ĳ�Ա");
  set("class","killer");
  set("cor",30);
  set("cps",30);
  set("kee",1080);
  set("max_kee",1080);
  set("force",300);
  set("max_force",300);
  set("force_factor",3);
  set("chat_chance",10);
  set("bellicosity",300);
  set_skill("rain-throwing",15);
  set_skill("throwing",15);
  set_skill("blackforce",30);
  set_skill("force",30);
  set_skill("dodge",20);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing");
setup();
    add_money("silver",10);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(4);
    ob->wield();
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
    tell_room(environment(me),"ɱ���������:����ǣ������Ҳ�!�������� \n"),
    message_vision(HIB"\nɱ����������ͬ�����ѣ�������$N��������\n"NOR,me
);
     guard->fight_ob(me);
    return 1;
   }
}
void greeting(object ob)
{
   if( ob->query("class")=="killer")    {
    command("smile "+ob->query("id"));  
    }
  else { 
    command("say �����кι�ɣ� \t");
  command("grin "+ob->query("id")); }
}