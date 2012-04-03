#include <ansi.h>
inherit NPC;
void create()
{
        set_name("������",({"bad man","man"}));
        set("long","�����ߡ�\n");
        set("gender","����");
        set("combat_exp",3000000);
        set("sec_kee","dragon");
        set("attitude","heroism");
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("age",60);
        set("class","bandit");
        set("family/family_name","���˹�");
        set("force",9000);
        set("max_gin",9000);
        set("max_kee",9000);
        set("max_sen",9000);
        set("clan_kill",1);
        set("bellicosity",3000);
        set("max_force",9000);
        set("force_factor",50);
        set("str",45);
        set("cor",45);
        set("mpower",1);
        set_skill("badstrike", 150);
        set_skill("badforce", 150);
        set_skill("literate",150);
        set_skill("ghost-steps",150);
        set_skill("unarmed",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("force",150);
        map_skill("unarmed", "badstrike");
        map_skill("parry","badstrike");
        map_skill("force", "badforce");
        map_skill("dodge", "ghost-steps");
        set_temp("apply/defense",100);
        set_temp("apply/armor",100);
        setup();
        carry_object("/open/snow/obj/figring")->wield();
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
if(random(100) > 50)
{
if(random(9) >= 5)
{
message_vision(HIY"�����������ħ��������Ĺ�����ȥ���٣�\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-500);
target[j]->add("force",-1000);
if(target[j]->query("force") < 0)
   target[j]->set("force",0); }
   }
   else
   {
message_vision(HIC"����������һЦ��˲ʱ��Ϣ�ȹ̡�\n"NOR,me);
if(random(9) >= 5) {
me->receive_curing("kee",2000);
me->receive_heal("kee",1000);
me->delete_busy(); }
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
 who=this_player();
 command("kill "+who->query("id"));
 command("cmd usekee "+who->query("id"));
 return 1;
}
