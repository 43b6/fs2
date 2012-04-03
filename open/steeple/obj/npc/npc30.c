#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("�ֺ���",({"pope lin","pope","lin"}));
        set("long",@LONG

        û����֪������������Ҳû��֪�������书�ж����һ������Ī
        ������������ǰ����Ƽʻᣬʹ�������ˡ�ʥ��̡���Ҳ��֪
        �����úη�����������Ӵ����֯��Ҳ��Ϊ���, ���������ϵ���
        ��Ϊ�������񻰡���

LONG);
        set("gender","����");
        set("clan_kill",1);
        set("class","prayer");
        set("nickname",HIW"����Ӱ��"NOR"������");
        set("title","ʥ��̻ʡ���");
        set("combat_exp",12000000);
        set("attitude","heroism");
        set("score",1000000);
        set("age",75);
        set("max_kee",40000);
        set("str", 50);
        set("cor", 50);
        set("cps", 45);
        set("per", 30);
        set("int", 42);
        set("marks/tengin",1);
        set("force",400000);
        set("max_force",400000);
        set("force_factor", 40);
        set("max_gin",10000);
        set("max_sen",10000);
        set_skill("cure", 120);
        set_skill("superforce", 250);
        set_skill("dodge", 120);
        set_skill("force",150);
        set_skill("move", 120);
        set_skill("literate",120);
        set_skill("parry", 120);
        set_skill("array",130);
        set_skill("fire-array",130);
        set_skill("unarmed",120);
        set_skill("canon",150);
        set_skill("literate",120);
        set_skill("shift-steps",150);
        set_skill("universe",140);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("array","fire-array");
        map_skill("unarmed","universe");
        set("functions/blood/level",200);
        set("functions/tengin/level",100);
        set("functions/bluesea/level",120);                             
                set("chat_chance_combat",50);
                set("chat_msg_combat", ({
                (: perform_action, "force.blood3" :),
                (: perform_action, "force.bluesea3" :),
        }));
        setup();

        carry_object("/open/prayer/obj/boris-boots")->wear();
        carry_object("/open/prayer/obj/boris-cloth")->wear();
        carry_object("/open/prayer/obj/boris-hat")->wear();
        carry_object("/open/prayer/obj/boris-hands")->wear();
        carry_object("/open/prayer/obj/kylin-belt")->wear();
        carry_object("/open/prayer/obj/dragon-icer")->wield();
        create_family("ʥ���",1,"�̻�");

}

int accept_fight(object who)
{
return notify_fail("�̻�����ĵ� : ȥ.ȥ..ȥ...�������ҡ�\n");
}

int accept_kill(object ob)
{
        int i;
        object ob1, hu_fa;
        ob1 = this_object();
        ob = this_player();
        command("exert blood");
        command("perform unarmed.tengin");
        return 1;
}
void greeting(object ob)
{
        ob=this_player();
        if ( ob->query_skill("coldpoison",1) )
        {
        command("say ������һ���������䣡����ʹ��ѧ�ж���֮�ˣ���");
        kill_ob(ob);
        }
        if( ob->query("class")=="dancer")
        {
        command("say �����������Щ������ɫ֮�ˣ���");
        kill_ob(ob);
        }
    return;
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
if(me->query("quest/start_game")< 31)
       {
        tell_object(users(),HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ����������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮһ����������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",31);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}



void heart_beat()
{
 object me=this_object();
 if(random(100) < 20 && is_fighting()) {
   command("perform unarmed.tengin");
   me->delete_busy();
   me->clear_condition();
 }
 if( random(100) < 10)
 {
  if( is_fighting() )
  {
   if( query("kee") < query("max_kee") )
    message_vision(HIR"\n�ֺ����������ķ�֮���ľ������ϵ��˿��漣ʽ������\n"NOR,me);
    me->receive_heal("kee",2000);
    me->receive_heal("gin",200);
    me->add("force",10000);
    me->receive_heal("sen",200);
    me->delete_busy();
    me->clear_condition();
  }
 }
::heart_beat();
}
