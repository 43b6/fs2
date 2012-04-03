#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
   object ob;
   set_name("����������ɱ��",({"green killer","killer","green"}) );
   set("long","������������Ϊ����, ���¹����Ҳ����Ŷ! \n");
   set("race", "����");
   set("gender","����");
   set("combat_exp",200000);
   set("age",25);
   set("title","�������ĳ�Ա");
   set("class","killer");
   set("cor",30);
   set("cps",30);
   set("str",20);
   set("kee",1200);
   set("max_kee",1200);
   set("force",1000);
   set("max_force",1000);
   set("sen",1000);
   set("max_sen",1000);
   set("gin",1000);
   set("max_gin",1000);
   set("force_factor",3);
   set("bellicosity",800);
   set_skill("rain-throwing",40);
   set_skill("throwing",45);
   set_skill("blackforce",35);
   set_skill("force",45);
   set_skill("shade-steps",50);
   set_skill("dodge",50);
   set_skill("parry",45);
// map_skill("dodge","shade-steps");
   map_skill("force","blackforce");
   map_skill("throwing","rain-throwing");
   setup();
   add_money("gold",1);
   ob=carry_object("/open/killer/obj/lustar");
   ob->add_amount(100);
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
int accept_fight(object me)
{
   object guard;

   guard=present( "killer 2",environment(me) );
   if( !present( "killer 2",environment(me))||!living(guard))
      return 1;
   else
   {
      tell_room(environment(me),"һ���ϣ������Ҳ�!�������� \n"),
      message_vision(HIB"\n����������ɱ�ֿ����������ѣ�������$N��������\n"NOR,me);
      guard->fight_ob(me);
      return 1;
   }
}
int accept_kill( object me)
{
   object guard;

   add("bellicosity",700);
   command("cmd bellup");

   guard=present( "killer 2",environment(me) );
   if( !present( "killer 2",environment(me))||!living(guard))
      return 1;
   else
   {
      tell_room(environment(me),"һ���ϣ������Ҳ�!�������� \n"),
      message_vision(HIB"\n����������ɱ�ֿ����������ѣ�������$N��������\n"NOR,me);
      guard->kill_ob(me);
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
      command("say �ô���������أ�������... \n");
      command("hehe "+ ob->query("id"));
   }
}
