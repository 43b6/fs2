#include </open/open.h>
#include <ansi.h>
inherit NPC;
void create()
{
        set_name("����",({"lord duan","lord","duan"}));
        set("long","���Ʊ��ǵ�����ϲ���ƽ����, ͬʱҲ�Ƕμ���ѧ�ĵ�ʮ������, "+
"��Ȼ��Ϊ��ү, ����һ���ӵ�īˮ, ����һ���洫����ѧȴҲû��, ��˵������˫ȫ, "+
"Ҳ��Ϊ���, �������Ƿǳ�������ѧ����, �������μ���ѧ������, �����һλ�������ɡ�\n");
        set("gender","����");
        set("class","scholar");
        set("nickname","ƽ����");
        set("combat_exp",8000000);
        set("attitude","heroism");
set("title",HIW"����Ӱ��"NOR);
        set("age",50);
        set("max_kee",10000);
        set("str", 44);
        set("cor", 24);
        set("cps", 45);
        set("per", 30);
        set("int", 42);

        set("force",100000);
        set("max_force",100000);
  set("six_spsp",1);
        set("force_factor", 20);
        set_skill("cure", 60);
set("no_lyssa",1);
        set_skill("dodge", 70);
        set_skill("force",80);
        set_skill("move", 70);
        set_skill("parry", 70);
        set_skill("stabber",120);
        set_skill("unarmed",20);
        set_skill("literate",120);
        set_skill("sunforce",80);
        set_skill("linpo-steps",100);
        set_skill("six-fingers",100);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("stabber","six-fingers");
        map_skill("unarmed","six-fingers");
        set("functions/handwriting/level",100);
        set("marks/sun-finger",1);
        set("marks/six_sp",3);
        set("chat_chance_combat", 100);
        set("chat_msg_combat", ({
                (: perform_action("stabber.handwriting") :),
        }));
        setup();
        carry_object(PING_OBJ"neck0")->wear();
  carry_object(PING_OBJ"cloud_fan");
        add_money("gold",10);
        create_family("�μ�",10,"������");
}

void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
        :: heart_beat();
}



int accept_kill(object who)
{

        who=this_player();
        command("unwield all");
        command("wield fan");
        command("kill "+who->query("id"));
        command("exert sun-finger");
        command("perform unarmed.handwriting");
        command("wield finger");
        return 1;
}
int accept_fight(object who)
{
        who=this_player();
        command("unwield all");
        command("wield fan");
        command("exert sun-finger");
        fight_ob(who);
        command("perform unarmed.handwriting");
        command("wield finger");
        return 1;
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
if(me->query("quest/start_game")< 22)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"�ڶ�ʮһ����������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"�ڶ�ʮ������������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",22);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


