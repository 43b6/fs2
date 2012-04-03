#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name(HIR"����"+HIC"�Ĺ���"NOR,({"scholar"}));
        set("long","��ħս������Ԫ�����������ػ���,������ֹ�����˵Ƚ���ħ��ء�\n");
        set("gender","����");
        set("class","swordsman");
        set("combat_exp",10000000);
        set("attitude","heroism");
        set("env/����","YES");
        set("age", 70);
        set("str", 50);
        set("cor", 30);
        set("cps", 30);
        set("per", 40);
        set("int", 40);
        set("sec_kee","god");
        set("s_kee",1000);
        set("max_s_kee",1000); 
        set("max_gin", 30000);
        set("gin", 30000);
        set("max_kee", 50000);
        set("kee", 50000);
        set("max_sen", 30000);
        set("sen", 30000);
        set("max_force",40000);
        set("force",40000);
        set("bellicosity",10000);
        set("functions/movedown/level",150);
        set("functions/sha_kee/level",150);
        set_skill("unarmed",450);
        set_skill("celestrike",300);
        set_skill("literate",120);
        set_skill("cure",90);
        set("force_factor",10);
        set_skill("force",3000);
        set_skill("stabber",150);
        set_skill("dodge",150);
        set_skill("knowpen",150);
        map_skill("stabber","knowpen");
        set_skill("parry",200);
        set_skill("poetforce",350);
        map_skill("force","poetforce");
        map_skill("parry","knowpen");
        set_skill("move",120);
        set_skill("plan",120);
        set_skill("winter-steps",150);
        map_skill("dodge","winter-steps");
        set_skill("god-plan",120);
        map_skill("plan","god-plan");
        map_skill("unarmed","celestrike");
        set_temp("apply/armor",100);
        set("force_factor",30);
        set("chat_msg_combat",({
        (: perform_action,"stabber.movedown" :),
        (: perform_action,"stabber.finger" :),
        (: perform_action,"plan.lock-link" :)
        }));
        set("family/family_name","����");
        set("inquiry",([

        ]));
        setup();
        carry_object("/open/start/obj/ten_pen")->wield();
        carry_object("/open/gsword/obj1/kring")->wear();
        carry_object("/open/gsword/obj1/pball");

}
void init() {
  object obj;
  ::init();
  if(interactive(obj=this_player()) && !is_fighting())
     {
      remove_call_out("greeting");
      call_out("greeting",1,obj);
     }
}
void greeting(object ob)
{
        command("wear all");
}

int accept_fight(object who)
{
 command("cmd god_kee");
 fight_ob(who);
 command("perform plan.fire");
 return 1;
}

int accept_kill(object who)
{
  command("say ���㳢�����һ�֮�е���ζ��\n");
 kill_ob(who);
 command("cmd god_kee");
 command("perform stabber.movedown");
 return 1;
}
 void die()
{
   object winner = query_temp("last_damage_from");
//      if(winner->query("family/family_name")=="�ɽ���" )
//   winner->set_temp("killtiger",1);
   ::die();
}

