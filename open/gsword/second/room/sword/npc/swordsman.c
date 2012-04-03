#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name(HIR"��ʥ"+HIC"ŷ���޼�"NOR,({"swordman","man"}));
        set("long","��ħս�н�ʥԪ�����������ػ���,������ֹ�����˵Ƚ���ħ��ء�\n");
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
        set("max_gin", 30000);
        set("gin", 30000);
        set("max_kee", 50000);
        set("kee", 50000);
        set("max_sen", 30000);
        set("sen", 30000);
        set("max_force",40000);
        set("force",40000);
        set("bellicosity",10000);
        set("functions/swordkee/level",150);
        set("functions/sha_kee/level",150);
        set_skill("literate",40);
        set_skill("magic",120);
        set_skill("spells",120);
        set_skill("move",120);
        set_skill("force",290);
        set_skill("dodge",160);
        set_skill("unarmed",450);
        set_skill("celestrike",300);
        set_skill("parry",190);
        set_skill("sword",220);
        set_skill("shasword",100);
        set_skill("sha-steps",100);
        set_skill("fiendforce",200);
        set_skill("cure", 100);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("force","fiendforce");
        map_skill("unarmed","celestrike");
        set_temp("apply/armor",100);
        set("force_factor",30);
        set("chat_chance_combat",80);
        set("family/family_name","�ɽ���");
        set("inquiry",([

        ]));
        set("chat_chance_combat",80);
        setup();
        carry_object("/open/gsword/obj/dragon-sword")->wield();
        carry_object("/open/gsword/obj1/kring")->wear();
        carry_object("/open/gsword/obj1/sball");
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
        command("wield all");
        command("wear all");
}

int accept_fight(object who)
{
 command("cmd god_kee");
 fight_ob(who);
 command("perform sword.sha_kee");
 return 1;
}
int accept_kill(object who)
{
 command("say ���������ҵ�.....��\n");
 command("cmd god_kee");
 set("have_kill_me",1);
 kill_ob(who);
 command("perform sword.sha_kee");
 return 1;
}
 void die()
{
   object winner = query_temp("last_damage_from");
//      if(winner->query("family/family_name")=="�ɽ���" )
//   winner->set_temp("killtiger",1);
   ::die();
}

