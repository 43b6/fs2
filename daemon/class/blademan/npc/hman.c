#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("����",({"heart man","man"}));
  set("score",10000000);
        set("long","��ǿ���ߡ�\n");
        set("gender","����");
        set("clan_kill",1);
      set("mpower",1);
        set("sec_kee","god");
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("class","prayer");
        set("combat_exp",5000000);
        set("attitude","heroism");
        set("age",75);
        set("max_kee",20000);
        set("str", 60);
        set("cor", 60);
        set("cps", 60);
        set("force",20000);
        set("max_force",20000);
        set("force_factor", 30);
        set("max_gin",10000);
        set("max_sen",10000);
        set_skill("superforce", 250);
        set_skill("dodge", 150);
        set_skill("force",150);
        set_skill("move", 150);
        set_skill("literate",150);
        set_skill("parry", 150);
        set_skill("unarmed",150);
        set_skill("shift-steps",150);
        set_skill("universe",150);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/blood/level",200);
     set("functions/bluesea/level",200);
        set("functions/green/level",250);
   set("chat_chance_combat", 80);
                set("chat_msg_combat", ({
                (: perform_action("force.blood1") :),
        }));
        add_money("thousand-cash",20);
        set_temp("apply/defense",100);
        set_temp("apply/attack",50);
        set_temp("apply/armor",100);
        setup();
        carry_object("/daemon/class/fighter/figring")->wield();
        carry_object("/daemon/class/blademan/obj/hstone");
}
void heart_beat()
{
object me,room,*target;
int i,j;
me=this_object();
room=environment(me);
target=me->query_enemy(room);
if(i=sizeof(target)) {
if(random(100) > 30)
{
if(random(9) >= 5)
{
message_vision(HIY"���߻���һ���������𱬡�����ʱ�������Ѫ��\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->start_busy(1);
target[j]->add("kee",-1200); }
   }
   else
   {
message_vision(HIC"��������һЦ��˲ʱ��Ϣ�ȹ̡�\n"NOR,me);
me->receive_curing("kee",1200);
me->receive_heal("kee",1200);
    me->delete_busy();
    me->clear_condition();
   }
  }
}
  ::heart_beat();
  }
int accept_fight(object who)
{
 command("say �߿����ң�\n");
 return 0;
}
int accept_kill(object who)
{
 object guard;
 who=this_player();
 command("kill "+who->query("id"));
 command("exert green");
 command("cmd god_kee");
 return 1;
}
void die()
{
   object winner = query_temp("last_damage_from");
   winner->add_temp("sublade",1);
  :: die();
}
