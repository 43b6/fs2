//by roger

inherit NPC;
#include <ansi.h>
void create()
{
        set("nickname","��а��������");
        set_name("������", ({"red-ghost","ghost"}));
        set("age",900);
        set("long","��а����������֮һ�����𱣻��߶�������Ľ�������\n");
        set("gender","Ů��");
        set("str",30);
        set("con",30);
        set("cor",30);
        set("cps",30);
        set("bellicosity",500);
        set("attitude","aggressive");
        set("max_gin",1100);
        set("gin",1100);
        set("max_sen",1100);
        set("sen",1100);
        set("max_kee",2000);
        set("kee",2000);
        set("combat_exp",1550000);
        set("max_force",3300);
        set("force",3300);
        set("force_factor",10);
        set_skill("dodge",80);
        set_skill("force",100);
        set_skill("badforce",100);
        set_skill("nine-steps",85);
        set_skill("unarmed",90);
        set_skill("hell-evil",90);
        set_skill("parry",100);
        set_skill("move",60);
        map_skill("unarmed","hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        map_skill("force","badforce");
        map_skill("parry","hell-evil");
  
        set_temp("apply/armor",80);
        set_temp("apply/damage",60);
        setup();
        add_money("gold",20);
        
}                     

void heart_beat()
{
 object env,mob,*enemy,target,ghost;
 int i,kee;
 
 mob = this_object();
 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 80)
 {
    
message_vision(HIR"\n�����������ڽ���������������ظ����䣬�κ��˽������ϵ���\n"NOR,this_object());
  ghost = present("gold-ghost",environment(mob));
    if(ghost){
  kee=(ghost->query("eff_kee") - ghost->query("kee"));
  ghost->add("kee",kee/10);
    }
  
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}
