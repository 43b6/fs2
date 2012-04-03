#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("ʥ����",({"master sue","sue"}));
        set("long","����һ��ʮ�����ŵ������ˣ���ȴ�������е����������͡�\n");
        set("gender","����");
        set("class","scholar");
        set("nickname","��ָ����");
    set("combat_exp",4000000);
    set("attitude","heroism");
	set("title",HIW"����Ӱ��"NOR);
        set("age",26);
    set("str", 44);
    set("cor", 24);
    set("cps", 18);
    set("per", 24);
    set("int", 42);
    set("max_gin",2000);
    set("s_kee",1000);
    set("max_s_kee",1000);
    set("sec_kee","god");
    set("force",10000);
    set("max_force",10000);
    set("max_kee",6000);
    set("kee",6000);
    set_skill("literate",120);
    set_skill("cure",60);
    set("force_factor",10);
    set_skill("force",80);
    set_skill("stabber",120);
    set_skill("dodge",70);
        set_skill("knowpen",100);
        map_skill("stabber","knowpen");
    set_skill("parry",70);
    set_skill("poetforce",80);
    map_skill("force","poetforce");
        map_skill("parry","knowpen");
    set_skill("unarmed",20);
    set_skill("move",70);
    set_skill("plan",120);
    set_skill("winter-steps",100);
        map_skill("dodge","winter-steps");
        set_skill("god-plan",100);
        map_skill("plan","god-plan");
    set("chat_chance_combat", 100);
        set("chat_msg_combat",({
    (: perform_action,"stabber.movedown" :),
    (: perform_action,"stabber.finger" :),
        (: perform_action,"plan.lock-link" :)
        }));
        setup();
        create_family("����",16,"����");
    carry_object(START_OBJ"ten_pen")->wield();
    carry_object(START_OBJ"k_cloth")->wear();
}

int accept_fight(object who)
{
 command("cmd god_kee");
 fight_ob(who);
 command("perform plan.fire");
 return 1;
}

int accept_kill(object who)
{
  command("say ���㳢�����һ�֮�е���ζ��\n");
 kill_ob(who);
 command("cmd god_kee");
 command("perform stabber.movedown");
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
if(me->query("quest/start_game")< 15)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��ʮ�Ĳ���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��ʮ�����������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",15);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


