#include <ansi.h>
#include <combat.h>
#include </open/open.h>
inherit NPC;
void create()
{
        set_name("ħ��Ī��",({"oldman"}));
set("long", "һ��������ȫ����_�_�����ˣ����ϻ���һ���������������Ǳ���������ġ�\n");
        set("gender", "����" );
        create_family("ħ��Ī��",1,"����ʼ��");
        set("family/family_name","ħ��Ī��");
        set("have_book",1);
        set("title",HIW"����Ӱ��"NOR"ħ��ѩ��������");
        set("age",70);
        set("env/ħ����ն","YES");
set("mpower",1);
        set("str",45);
        set("class","blademan");
        set("guild_class","blademan");
        set("cor", 30);
        set("cps", 30);
        set("int", 25);
        set("max_gin",1000);
        set("max_sen",1000);
        set("max_force",80000);
        set("force",80000);
        set("force_factor",30);
        set("kee",10000);
        set("score",100000);
        set("max_kee",10000);
        set("bellicosity",3000);
        set_skill("cure",60);
        set_skill("riding",100);
        set_skill("force", 100);
        set_skill("blade",120);
        set_skill("dodge", 70);
        set_skill("move", 70);
        set_skill("powerforce", 100);
        set_skill("dragon-blade", 120);
        set_skill("parry", 100);
        map_skill("parry","dragon-blade");
        map_skill("blade","dragon-blade");
        map_skill("force","powerforce");
        set("combat_exp",1500000);
        set("chat_chance_combat",100);
        set_temp("apply/armor",90);
        set("chat_msg_combat",({
        (: perform_action, "blade.power-dest" :),
      }));
        add_temp("apply/dodge",30);
        setup();
        carry_object("/daemon/class/blademan/obj/iceblade")->wield();
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
if(me->query("quest/start_game")< 21)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"�ڶ�ʮ����������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"�ڶ�ʮһ����������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",21);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


