#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("ʥ��ʹ",({"prayer man","man"}));
        set("long","ħ�����ػ��ߣ��ɻ�Ӱϵͳcopy��\n");
        set("gender","����");
        set("clan_kill",1);
        set("sec_kee","god");
        set("title",HIW"����Ӱ��"NOR);
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("mpower",1);
        set("class","prayer");
        set("combat_exp",13000000);
        set("attitude","heroism");
        set("age",75);
        set("max_kee",50000);
        set("str", 60);
        set("cor", 60);
        set("cps", 60);
        set("force",500000);
        set("max_force",500000);
        set("force_factor", 30);
        set("max_gin",10000);
        set("max_sen",10000);
        set_skill("superforce", 250);
        set_skill("dodge", 120);
        set_skill("force",120);
        set_skill("move", 120);
        set_skill("literate",120);
        set_skill("parry", 120);
        set_skill("unarmed",120);
        set_skill("shift-steps",120);
        set_skill("universe",120);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("functions/blood/level",200);
        set("functions/green/level",200);
        set("chat_chance_combat", 90);
                set("chat_msg_combat", ({
                (: perform_action("force.blood1") :),
                (: perform_action("force.blood2") :),
                (: perform_action("force.blood3") :),
        }));
        add_money("thousand-cash",20);
        set_temp("apply/defense",100);
        set_temp("apply/armor",100);
        setup();
        carry_object("/open/snow/obj/figring")->wield();
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
message_vision(HIY"ʥ��ʹ����һ���������𱬡�����ʱ�������Ѫ��\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-2000); }
   }
   else
   {
message_vision(HIC"ʥ��ʹ����һЦ��˲ʱ��Ϣ�ȹ̡�\n"NOR,me);
me->receive_curing("kee",2000);
me->receive_heal("kee",2000);
if(random(9)>=5) {
    me->delete_busy();
}
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
 command("exert green");
 command("cmd god_kee");
 return 1;
}
int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"ϵͳ��ս��ֹͣ��$N�����У���\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\nϵͳ��������ûЯ����Ƭ�������޷���¼ս����\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\nϵͳ��������û����ʽ�Ǽǣ������޷����䡣\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 45)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ�Ĳ���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ�����������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",45);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}