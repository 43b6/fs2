#include <ansi.h>
inherit NPC;
void create()
{
        set_name("����",({"gold man","man"}));
        set("long","���ߡ�\n");
        set("gender","����");
  set("score",10000000);
        set("combat_exp",5000000);
        set("sec_kee","god");
        set("attitude","heroism");
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("age",60);
        set("class","fighter");
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
        set("family/family_name","ѩ����");
set("quests/read_snow",2);
        set_skill("snow-martial", 150);
        set_skill("snowforce", 150);
        set_skill("literate",150);
        set_skill("black-steps",150);
        set_skill("unarmed",150);
        set_skill("dodge",150);
        set_skill("snow-kee",150);
        set_skill("parry",150);
        set_skill("force",150);
        map_skill("unarmed", "snow-martial");
        map_skill("parry","snow-kee");
        map_skill("force", "snowforce");
        map_skill("dodge", "black-steps");
        set_temp("apply/defense",100);
        set_temp("apply/attack",50);
        set_temp("apply/armor",100);
        setup();
        carry_object("/open/snow/obj/figring")->wield();
        carry_object("/daemon/class/blademan/obj/gstone");
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
if(random(9) >= 6)
{
message_vision(HIY"��������һ�ģ���ʯ�����������䣡\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-700); }
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
 command("cmd god_kee");
 return 1;
}
void die()
{
   object winner = query_temp("last_damage_from");
   winner->add_temp("sublade",1);
  :: die();
}
