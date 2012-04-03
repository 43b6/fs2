#include <ansi.h>
inherit NPC;
void create()
{
        set_name("ˮ��",({"water man","man"}));
  set("score",10000000);
        set("long","ˮ�ߡ�\n");
        set("gender","����");
        set("combat_exp",5000000);
        set("sec_kee","god");
        set("attitude","heroism");
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("age",60);
        set("class","bandit");
   set("quests/badroar",1);
        set("family/family_name","���˹�");
        set("functions/evil-blade/level", 100);
    set("functions/badroar/level", 100);
set("chat_chance_combat", 50);
        set("chat_msg_combat", ({
    (: perform_action("unarmed.badroar") :),
        }));
        set("force",10000);
        set("max_gin",5000);
        set("max_kee",10000);
        set("max_sen",5000);
        set("clan_kill",1);
        set("bellicosity",5000);
        set("max_force",10000);
        set("force_factor",50);
        set("str",45);
        set("cor",45);
        set("m_blade",1);
        set_skill("badstrike", 150);
        set_skill("blade",120);
        set_skill("dragon-blade",120);
        set_skill("badforce", 150);
        set_skill("literate",150);
        set_skill("ghost-steps",150);
        set_skill("unarmed",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("force",150);
        map_skill("unarmed", "badstrike");
        map_skill("blade","dragon-blade");
        map_skill("parry","badstrike");
        map_skill("force", "badforce");
        map_skill("dodge", "ghost-steps");
        set_temp("apply/defense",100);
        set_temp("apply/attack",50);
        set_temp("apply/armor",100);
        setup();
        carry_object("/open/snow/obj/figring")->wield();
        carry_object("/daemon/class/blademan/obj/wastone");
        add_money("gold", 20);
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
if(random(9) >= 4)
{
message_vision(HIY"ˮ���������δ�ˮ����˲������û��\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-900); }
   }
   else
   {
message_vision(HIC"ˮ������һЦ��˲ʱ��Ϣ�ȹ̡�\n"NOR,me);
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
 command("cmd god_kee");
 return 1;
}
void die()
{
   object winner = query_temp("last_damage_from");
   winner->add_temp("sublade",1);
  :: die();
}
