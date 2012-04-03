#include <ansi.h>
inherit NPC;


void create()
 {
        set("class", "marksman");
set_name("���", ({ "master lee", "master", "lee" }) );
        set("title",HIW"����Ӱ��"NOR"�����ɵڶ���������");
        set("nickname",HIC "�Ķ���ʯ"NOR);
        set("gender", "����");
set("max_kee",10000);
        set("age", 55);
        set("attitude", "heroism");
        set("long","���Ϊ�Ŵ�����֮һ������һ�δ����У��Ѽ����ʯͷ�ν֮��̾..\n");
        set("str", 18);
        set("cps", 30);
        set("per", 10);
set("cor",30);
        set("int", 40);
        set("kar", 16);
set("combat_exp",7000000);
set("bellicosity",5000);
set("force",100000);
set("max_force",100000);
set("force_factor",30);
        set("score"       , 200000);
set_skill("force",80);
set_skill("archery",120);
set_skill("god-shooting",100);
set_skill("magic",20);
set_skill("move",70);
set_skill("parry",70);
set("functions/ten_kee/level",100);
set_skill("dodge",70);
set_skill("literate",40);
set_skill("unarmed",20);
        set_skill("iceforce",100);
set("no_lyssa",1);
        set_skill("rain-steps",100);
set_skill("riding",80);
        map_skill("force", "iceforce");
        map_skill("dodge", "rain-steps");
        map_skill("parry", "rain-steps");
        map_skill("archery","god-shooting");
        map_skill("move","rain-steps");
set("chat_chance_combat",10);
                set("chat_msg_combat", ({
(: perform_action("archery.ten_kee") :)
        }));


        create_family("������", 2, "������");


        setup();
carry_object("/open/marksman/obj/arrow-8");
carry_object("/open/marksman/obj/bow-10")->wield();
        add_money("gold",10);
}

int accept_kill(object ob)
{
 command("say �Ϸ����û�����ˣ��Ǿ�����һ����!");
 command("say ������!!");
 command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
command("perform archery.ten_kee");
command("supershoot");
return 1;
}
int accept_fight(object ob)
{
command("say �Ǻð�!!�Ϸ���������");
command("cmd holdup arrow with bow");
return 1;
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
     ::heart_beat();
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
if(me->query("quest/start_game")< 20)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��ʮ�Ų���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"�ڶ�ʮ����������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",20);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


