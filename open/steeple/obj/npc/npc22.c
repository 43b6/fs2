#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
set_name("֣ʿ��",({"master teng","teng","master"}));
set("long","���������ֵ�һ����ʦ :֣ʿ��������ִ���ɽ��Ż���
ͬʱ��Ϊ��ʿ�����᳤ܻ����ʮ�����������ɽ�������
�ܶ���һ�棬�ֵ��������񣻶���������Ҳ����������
��ȫȨ����֣ʿ��ÿ��������ؾ�������ѧ�⣬��
���ڴ˽Ӽ������\n");
        set("gender","����");
        set("class","swordsman");
        set("nickname","�޼�����");
            set("family/family_name","�ɽ���");
            set("combat_exp",8000000);
            set("attitude","heroism");
            set("dragon-sword",1);
            set("bellicosity", 490);
        set("age",76);
        set("title",HIW"����Ӱ��"NOR"�ɽ��ɵ�����������");
            set("str", 44);
            set("cor", 42);
            set("cps", 18);
            set("con", 24);
            set("int", 42);
            set("max_gin", 4000);
            set("gin",4000);
            set("max_kee", 10000);
            set("kee",10000);
            set("s_kee",1000);
            set("max_s_kee",1000);
            set("sec_kee","god");
            set("force",100000);
            set("max_force",100000);
            set("functions/sha_kee/level",100);
            set_skill("literate",40);
            set_skill("cure",50);
            set_skill("magic",20);
            set_skill("spells",20);
            set_skill("shasword",100);
            set_skill("shaforce",80);
            set_skill("sha-steps",100);
            set_skill("sha-array",100); 
        set_skill("array",100);
        set_skill("move",80);
        set_skill("force",50);
        set_skill("dodge",80);
        set_skill("parry",120);
        set_skill("sword",120);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        set("force_factor",29);
        set("get_sha_sp", 1);
            set("bounds", 4000000);
        set("chat_chance_combat",90);
        
        set("chat_msg_combat",({
        (: perform_action,"sword.sha_kee" :)
        }));
        setup();
        carry_object("/open/gsword/obj/dragon-sword.c")->wield();
        add_money("gold",10);
carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
        create_family("�ɽ���",3,"������");
}


int accept_fight(object who)
{

object guard, guard1;
 command("cmd god_kee");
 fight_ob(who);
 command("perform sword.sha_kee");
 return 1;
}

int accept_kill(object who)
{
 object guard, guard1;

 command("say ����֪����������������\n");
 set("have_kill_me",1);
 kill_ob(who);
 command("cmd god_kee");
 command("perform sword.sha_kee");
 return 1;
}
void heart_beat()
{
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        :: heart_beat();
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
if(me->query("quest/start_game")< 23)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"�ڶ�ʮ������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"�ڶ�ʮ������������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",23);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


