#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
   object ob;
   set_name("绿云组上级杀手",({"green killer","killer","green"}) );
   set("long","绿云组轻身功夫极为高明, 手下功夫可也不弱哦! \n");
   set("race", "人类");
   set("gender","男性");
   set("combat_exp",500000);
   set("age",45);
   set("title","黑牙联的成员");
   set("class","killer");
   set("cor",30);
   set("cps",30);
   set("str",30);
   set("kee",2500);
   set("max_kee",2500);
   set("force",2500);
   set("max_force",2500);
   set("force_factor",8);
   set("sen",1500);
   set("max_sen",1500);
   set("gin",1500);
   set("max_gin",1500);
   set("bellicosity",1500);
   set_skill("rain-throwing",100);
   set_skill("throwing",120);
   set_skill("blackforce",70);
   set_skill("force",80);
   set_skill("shade-steps",100);
   set_skill("dodge",100);
   set_skill("parry",80);
   map_skill("dodge","shade-steps");
   map_skill("force","blackforce");
   map_skill("throwing","rain-throwing");
   setup();
   add_money("gold",5);
   ob=carry_object("/open/killer/obj/lustar");
   ob->add_amount(250);
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
      message_vision(HIB"\n绿云组上级杀手看到好友有难，马上向$N攻过来！\n"NOR,me);
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
      message_vision(HIB"\n绿云组上级杀手看到好友有难，马上向$N攻过来！\n"NOR,me);
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
