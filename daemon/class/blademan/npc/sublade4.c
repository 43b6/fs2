#include <ansi.h>
inherit NPC;
void create()
{
        set_name("�ص���",({"sublade1 man","man"}));
        set("long","�ص��ߡ�\n");
        set("gender","����");
        set("combat_exp",2500000);
        set("sec_kee","dragon");
        set("attitude","heroism");
        set("max_s_kee",1000);
        set("family/family_name","����");
        set("env/����","YES");
set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
    (: perform_action("blade.fast-dest") :),
        }));
  set("score",10000000);
        set("s_kee",1000);
set("functions/fast-dest/level",100);
        set("age",60);
        set("force",7000);
        set("no_speed",1);
        set("no_hole",1);
        set("max_gin",3000);
        set("max_kee",7000);
        set("max_sen",3000);
        set("clan_kill",1);
        set("bellicosity",2500);
        set("max_force",7000);
        set("force_factor",50);
        set("str",45);
        set("cor",45);
        set("m_blade",1);
        set_skill("snow-martial", 120);
        set_skill("blade",120);
        set_skill("gold-blade",120);
        set_skill("fast-blade",120);
        set_skill("snowforce", 120);
        set_skill("literate",120);
        set_skill("black-steps",120);
        set_skill("unarmed",120);
        set_skill("dodge",120);
        set_skill("snow-kee",120);
        set_skill("parry",120);
        set_skill("force",120);
        map_skill("unarmed", "snow-martial");
        map_skill("blade","fast-blade");
        map_skill("parry","gold-blade");
        map_skill("force", "snowforce");
        map_skill("dodge", "black-steps");
        set_temp("apply/defense",100);
        set_temp("apply/attack",50);
        set_temp("apply/armor",100);
        setup();
        carry_object("/daemon/class/blademan/obj/gold-blade")->wield();
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
message_vision(HIY"�ص��߰ѵ�һ�Σ���Ϊ�����ܣ��䲻���ı�����һȭ��\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-500); }
   }
   else
   {
message_vision(HIC"�ص�������һЦ��˲ʱ��Ϣ�ȹ̡�\n"NOR,me);
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
 command("cmd usekee "+who->query("id"));
 return 1;
}
