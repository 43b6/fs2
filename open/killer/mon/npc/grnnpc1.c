#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
   object ob;
   set_name("绿云组一级杀手",({"green killer","killer","green"}) );
   set("long","绿云组轻身功夫极为高明, 手下功夫可也不弱哦! \n");
   set("race", "人类");
   set("gender","男性");
   set("combat_exp",550000);
   set("age",30);
   set("title","黑牙联的成员");
   set("class","killer");
   set("cor",30);
   set("cps",30);
   set("str",20);
   set("kee",2000);
   set("max_kee",2000);
   set("sen",1000);
   set("max_sen",1000);
   set("gin",1000);
   set("max_gin",1000);
   set("force",2500);
   set("max_force",2500);
   set("force_factor",6);
   set("bellicosity",1500);
   set_skill("rain-throwing",70);
   set_skill("throwing",75);
   set_skill("blackforce",55);
   set_skill("force",75);
   set_skill("shade-steps",85);
   set_skill("dodge",85);
   set_skill("parry",85);
   map_skill("dodge","shade-steps");
   map_skill("force","blackforce");
   map_skill("throwing","rain-throwing");
   setup();
   add_money("gold",4);
   ob=carry_object("/open/killer/obj/lustar");
   ob->add_amount(180);
   ob->wield();
   carry_object("/open/killer/weapon/k_cloth2.c")->wear();
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
      tell_room(environment(me),"一起上！有人找碴!给我拿下 \n"),
      message_vision(HIB"\n绿云组一级杀手看到好友有难，马上向$N攻过来！\n"NOR,me);
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
      tell_room(environment(me),"一起上！有人找碴!给我拿下 \n"),
      message_vision(HIB"\n绿云组一级杀手看到好友有难，马上向$N攻过来！\n"NOR,me);
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
      command("say 擅闯绿云组禁地！找死吗... \n");
      command("hehe "+ ob->query("id"));
   }
}
