#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string magic1();
string magic2();
string magic3();
string do_area();
string do_array();
string do_howgo();
void create()
{
        set_name("½���",({"master lu","master","lu"}));
        set("long", 
"��������۵����ţ����ް߰ף�һ�Գ�ü���ա���������Ӧ��
�����ˣ�������ȴ��Ȼ������ȣ���ʮ���������ʮ�������
�ˡ���˵��������ͨ"HIG"�׾�"NOR"��"HIG"��ׯ"NOR"�����һ�����"HIG"����"NOR"����һ�ࡣ\n"
);
       
        set("gender","����");
        set("class","taoist");
        set("nickname",MAG"�����ϵ�"NOR);
        set("combat_exp",6000000);
        set("attitude","friendly");
        set("age",88);
        set("title",HIW"����Ӱ��"NOR"�����������");
        set("str",20);
        set("cps",30);
        set("cor",25);
        set("per",25);
        set("int",35);
        set("con",25);
        set("spi",25);
        set("kar",40);
        set("max_s_kee",100);
        set("s_kee",100);
        set("sec_kee","tiger");
        set("max_kee",6000);
        set("kee",6000);
        set("max_sen",3500);
        set("sen",3500);
        set("max_gin",2200);
        set("gin",2200);
        set("force",10000);
        set("max_force",10000);
        set("max_mana",6000);
        set("mana",6000);
        set("atman",6000);
        set("max_atman",6000);
        set("mana_factor",60);
        set_skill("literate",40);
        set_skill("cure",90);
        set_skill("taoism",90);
        map_skill("cure","taoism");
        set_skill("force",60);
        set_skill("gforce",100);
        map_skill("force","gforce");
        set_skill("dodge",80);
        set_skill("g-steps",100);
        map_skill("dodge","g-steps");
        set_skill("magic",100);
        set_skill("gmagic", 100);
        map_skill("magic", "gmagic");
        set_skill("whip",105);
        set_skill("gwhip",100);
        map_skill("whip","gwhip");  
        set_skill("parry",70);
        map_skill("parry","gwhip");
        set_skill("spells",120);
        set_skill("necromancy",100);
        map_skill("spells","necromancy");
        set_skill("move",80);
        map_skill("move","g-steps");
        set("spells/feeblebolt/level",90);
        set("spells/missible/level",100);
        set("spells/hardshell/level",90);
        set("spells/invocation/level",100);
        set("spells/stopmove/level",1);
        set("spells/lightfire/level",1);
        set("spells/flee/level",60);
        set("spells/manabody/level",1);
        set("force_factor",10);
        set("guild_master",1);
        set("chat_chance_combat",200);
        set("chat_msg_combat",({
         (: magic1 :),
         (: magic2 :),
         (: magic3 :),
        }));
        setup();
        create_family("�����",2,"������");
        carry_object("/open/tendo/obj/red_dragon_chain")->wield();
        carry_object("/open/tendo/obj/lucloth")->wear();
        carry_object("/open/tendo/obj/luboot")->wear();
        add_money("gold",20);
}

int accept_fight (object who)
{
command("conj hardshell");
return 1;
}
int accept_kill(object who)
{
who=this_player();
kill_ob(who);
command("conj hardshell");
command("say ʩ����ִ�����,�ݹ�ƶ������������!!");
return 1;
}
string magic1()
{
if(this_object()->query("kee")<=3000) {
          command("cast king invocation");
        }  
        return "\n";
}
string magic2()
{
if(random(2)<=1) 
command("cast missible");
else command("cast feeblebolt");
return "\n";
}
string magic3()
{
if(random(3)<=2)
command("cast stopmove");
return "\n";
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
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                       command("cast stopmove");
        }
        }
     ::heart_beat();
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
if(me->query("quest/start_game")< 18)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��ʮ�߲���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��ʮ�˲���������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",18);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


