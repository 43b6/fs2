#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name(HIR"����"+HIC"����Ԫ"NOR,({"blademan","man"}));
        set("long","��ħս�е���Ԫ�����������ػ���,������ֹ�����˵Ƚ���ħ��ء�\n");
        set("gender","����");
        set("class","blademan");
        set("combat_exp",10000000);
        set("attitude","heroism");
        set("env/����","YES");
        set("age", 70);
        set("str", 35);
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
        set("functions/fight/level",100);
        set("functions/gold-dest/level",100);
        set_temp("apply/armor",100);
        set_skill("literate",40);
        set_skill("magic",120);
        set_skill("spells",120);
        set_skill("move",120);
        set_skill("force",290);
        set_skill("dodge",160);
        set_skill("unarmed",450);
        set_skill("celestrike",300);
        set_skill("parry",190);
        set_skill("blade",220);
        set_skill("gold-blade",100);
        set_skill("riding",200);
        set_skill("fly-steps",100);
        set_skill("fly-blade",200);
        set_skill("fiendforce",200);
        set_skill("cure", 100);
        map_skill("blade","fly-blade");
        map_skill("parry","fly-blade");
        map_skill("dodge","fly-steps");
        map_skill("move","fly-steps");
        map_skill("force","fiendforce");
        map_skill("unarmed","celestrike");
        set_temp("apply/armor",100);
        set("force_factor",20);
        set("chat_chance_combat",80);
        set("family/family_name","����");
        set("inquiry",([

        ]));
        set("chat_chance_combat",80);
        setup();
        carry_object("/daemon/class/blademan/obj/gold-blade")->wield();
        carry_object("/open/gsword/obj1/bball");
}
void heart_beat()
{
     if( is_fighting()&& is_busy() && random(50)>10)
     {
        enemy=query_enemy();
         if( random(50)>10 )
          {
          delete_busy();
          message_vision(HIW"�׻�ʥ�ߴ�:������..�Ʒ�ɱ��!!\nֻ��������â����ۼ�....˲����Ʊ���֮Ѩ��\n"NOR);
        }
  }
::heart_beat();
}

int accept_fight(object who)
{
 command("cmd god_kee");
 command("perform fiendforce.fight");
 fight_ob(who);
 return 1;
}
int accept_kill(object who)
{
 command("say ���������ҵ�.....��\n");
 command("cmd god_kee");
 command("perform fiendforce.fight");
 set("have_kill_me",1);
 kill_ob(who);
 return 1;
}
 void die()
{
   object winner = query_temp("last_damage_from");
//      if(winner->query("family/family_name")=="�ɽ���" )
//   winner->set_temp("killtiger",1);
   ::die();
}

