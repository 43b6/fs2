#include <ansi.h>
inherit NPC;
object ob1=this_object();
object ob2=this_player();
int done=0;
void create()
{
        set_name("Ҷ  ��",({"ya"}));
        set("long", "��������ʮ��ǰ�ڽ����������ȷ�Ѫ��Ĵ�ħͷ��Ѫħ��Ҷ��\n");
        set("gender","����");
       set("combat_exp",1000000);
        set("attitude","aggressive");
        set("age",90);
        set("class", "fighter");
        set("title","Ѫħ");
         set("bellicosity",1000000000);
        set("force",5000);
        set("max_gin",1000);
        set("max_kee",5000);
        set("max_force",5000);
        set("force_factor",15);
        set("str",40);
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (: perform_action, "unarmed.evil-blade" :),
        (: this_object(),"special_attack" :),
        }));
        set("chat_chance", 10);
        set("chat_msg",({
        (: this_object(),"random_move" :),
        }));
        set("cor", 40);
        set("per", 30);
        set("int", 30);
        set("cps",40);
        set("con", 30);
        set("spi", 30);
        set("kar", 40);
        set_skill("badstrike", 100);
        set_skill("badforce", 100);
        set_skill("ghost-steps",100);
        set_skill("unarmed",100);
        set_skill("dodge",100);
       set_skill("parry",100);
        set_skill("move",100);
        set_skill("force",120);
        map_skill("unarmed", "badstrike");
        map_skill("parry","badstrike");
        map_skill("force", "badforce");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
        setup();
        carry_object("/open/wu/obj/ya-head");
        carry_object("/open/wu/obj/figring")->wield();
        add_money("gold", 20);
}

       
 int special_attack()
 {
   object ob;
   ob=this_object()->query_enemy();
   message_vision(HIR"Ҷ��������Ѫ��ħ�󷨡�����һָ��һ��Ѫ��������п񱬿���!!\n"NOR,this_object());
   ob->add("kee",-150);
  return 1;
  }

 void greeting(object ob)
 {
  if( !ob || environment(ob) != environment() ) return;
  if(ob->query("family/family_name","��ɽ��") )
     say("Ҷ���:��!��!��ɽ���ӣ�������!!!\n ");
     command("exert roar");
  }
/*
 int accept_object(object who,object ob)
 {
if( ob->query("id")!="blood_sword"||!who->query_temp("have_show",1) )
    {
      write("��ë����� :��л������ﰡ....������������??�ҿ��ǲ������������\n");
      return 0;
    }
   else
     {
      who->remove_all_killer();
      set_heart_beat(1);
      write("�����:��л�㽫��ѽ�������,�����Ӯ�ҵĻ��ҿɸ�����һ������ ,����.\n");
      who->set_temp("have_fight",1);
      write("����˵�� ,�����г���һ�� ,��֪�ǲ��Ǵ�� ,��е����������Ѻ͸ո�
      ����ͬ ,��е�Щ��Ŀ־�\n");
      ob1->set("combat_exp",500000);
      ob1->set_skill("shasword",80);
      ob1->set_skill("sword",80);
      ob1->map_skill("sword","shasword");
      command("wield blood_sword");
      ob2->set_temp("have_give",1);
      return 0;
      }
 }         
          
*/
/*void die()
  {
   object me;
   me = this_object()->query_temp("last_damage_from");
   if (me && userp(me))  {
     me->add("bounds",100); 
     tell_room(environment(),sprintf("%s���������ϳ���100����ë.\n",me->name()));
   }
   ::die(); 
  }
*/
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
     ::heart_beat();
}

