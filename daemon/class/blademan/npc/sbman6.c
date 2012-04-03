#include <ansi.h>
inherit NPC;
void create()
{
        set_name("������",({"fighter man","man"}));
        set("long","�����ߡ�\n");
        set("gender","����");
        set("combat_exp",3000000);
        set("sec_kee","god");
        set("attitude","heroism");
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("age",60);
        set("functions/kang_kee/level",100);
        set("class","fighter");
        set("force",9000);
        set("fire_strike",1);
        set("super_fire",1);
        set("max_gin",9000);
        set("max_kee",9000);
        set("max_sen",9000);
        set("clan_kill",1);
        set("bellicosity",3000);
        set("chat_chance_combat", 30);
        set("chat_msg_combat", ({
        (: perform_action("force.kang_kee") :),
        }));
        set("max_force",9000);
        set("force_factor",20);
        set("str",45);
        set("cor",45);
        set("mpower",1);
        set("family/family_name","��ɽ��");
        set_skill("lungshan", 150);
        set_skill("haoforce", 150);
        set_skill("literate",150);
        set_skill("black-steps",150);
        set_skill("unarmed",150);
        set_skill("dodge",150);
        set_skill("fire-kee",150);
        set_skill("parry",150);
        set_skill("force",150);
        map_skill("unarmed", "lungshan");
        map_skill("parry","fire-kee");
        map_skill("force", "haoforce");
        map_skill("dodge", "black-steps");
        set_temp("apply/defense",100);
        set_temp("apply/armor",100);
        setup();
        carry_object("/daemon/class/fighter/figring")->wield();
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
message_vision(HIY"������ȭ���˻���������һ�ģ���ʱ�һ����\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-350); }
   }
   else
   {
message_vision(HIC"����������һЦ��˲ʱ��Ϣ�ȹ̡�\n"NOR,me);
if(random(9) >= 5) {
me->receive_curing("kee",2000);
me->receive_heal("kee",1000); }
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
 command("cmd god_kee");
 return 1;
}
