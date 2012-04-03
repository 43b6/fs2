#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
   object ob;
   set_name("���������ɱ��",({"green killer","killer","green"}) );
 
   set("long","������������Ϊ����, ���¹����Ҳ����Ŷ! \n");
   set("race", "����");
   set("gender","����");
   set("combat_exp",400000);
   set("age",35);
   set("title","�������ĳ�Ա");
   set("class","killer");
   set("cor",30);
   set("cps",30);
   set("str",20);
   set("kee",1800);
   set("max_kee",1800);
   set("sen",1000);
   set("max_sen",1000);
   set("gin",1000);
   set("max_gin",1000);
   set("force",2000);
   set("max_force",2000);
   set("force_factor",5);
   set("bellicosity",1300);
   set_skill("rain-throwing",50);
   set_skill("throwing",55);
   set_skill("blackforce",35);
   set_skill("force",55);
   set_skill("shade-steps",60);
   set_skill("dodge",60);
   set_skill("parry",55);
   map_skill("dodge","shade-steps");
   map_skill("force","blackforce");
   map_skill("throwing","rain-throwing");
   setup();
   add_money("gold",3);
   ob=carry_object("/open/killer/obj/lustar");
   ob->add_amount(150);
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
      message_vision(HIB"\n���������ɱ�ֿ����������ѣ�������$N��������\n"NOR,me);
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
      message_vision(HIB"\n���������ɱ�ֿ����������ѣ�������$N��������\n"NOR,me);
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
