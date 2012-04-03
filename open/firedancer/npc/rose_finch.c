inherit NPC;
inherit SSERVER;
#include <ansi.h>

void create()
{
        set_name("��ȸ",({"rose finch","finch"}));
	set("title",HIW"�� ʥ �� "NOR);
        set("race","Ұ��");
        set("limbs", ({ "ͷ" , "����" , "���" , "צ" }));
        set("verbs", ({ "poke" , "claw" }));
        set("age",1350);
        set("combat_exp",9000000);
        set("str",30);
        set("cor",30);
        set("int",30);
        set("spi",30);
        set("cps",30);
        set("per",30);
        set("con",50);
        set("kar",50);
        set("attitude","aggressive");
        set("force_factor",20);
        set("max_gin",200000);
        set("max_kee",500000);
        set("max_sen",300000);
        set("gin",200000);
        set("kee",500000);
        set("sen",300000);
        set("max_force",700000);
        set("force",700000);
        set_skill("force",300);
        set_skill("unarmed",300);
        set_skill("parry",300);
        set_skill("dodge",300);
        set_skill("move",300);
        setup();
        carry_object(__DIR__"eq/r_armbands")->wear();
        carry_object(__DIR__"eq/r_belt")->wear();
        carry_object(__DIR__"eq/r_boots")->wear();
        carry_object(__DIR__"eq/r_cape")->wear();
        carry_object(__DIR__"eq/r_cloth")->wear();
        carry_object(__DIR__"eq/r_finger")->wear();
        carry_object(__DIR__"eq/r_hands")->wear();
        carry_object(__DIR__"eq/r_head")->wear();
        carry_object(__DIR__"eq/r_leg")->wear();
        carry_object(__DIR__"eq/r_neck")->wear();
        carry_object(__DIR__"eq/r_pants")->wear();
        carry_object(__DIR__"eq/r_shield")->wear();
        carry_object(__DIR__"eq/r_wrists")->wear();
}

void heart_beat()
{
object ob,env,me;
int i,j,k;

        ob = this_object();
        env = environment(ob);
        me = offensive_target(ob);

        if( !me )
                return ::heart_beat(1);

        if ( ob->query_condition() || ob->query_busy() )
        {
                message_vision(HIR"\n
��ȸ����ëȼ�������ܻ��棬��ȸһ��Ҳ���Ե�ʹ��!

���治�ϵ�ȼ��!!�ȵ��������嶼���ճɿ�\�Ǻ�������Ƿ׷�����!!

��ȸ�����ڿ�\�ɵĹǺ���!!
\n",ob);
                ob->clear_condition();
                ob->delete_busy();
                if( (int)ob->query("kee") < (int)ob->query("max_kee")/10 )
                {
                        ob->receive_curing("kee",10000);
                        ob->receive_heal("kee", 10000);
                }
                else if ( (int)ob->query("kee") < (int)ob->query("max_kee")/2 )
                {
                        ob->receive_curing("kee",1000);
                        ob->receive_heal("kee", 1000);
                }
        }

        if( env == environment(me) )
        {
                i = random(100);

                if( i < 5 )
                {
                        message_vision(HIR"\n
��ȸ�ɳ����죬Ʈ�����ë������$N����!!

        ��      ȸ      -       ��      ȸ      ��

��������ë�·��������ģ�������ȡ$N��������˲����ȫ����!!
\n"NOR,me);
                        me->set("force",1);
                }
                else if( i < 25 )
                {
                        message_vision(HIR"\n
��ȸ�����³�һ����������������Ư��$N!!

        ��      ȸ      -       ��      ȸ      Ϣ

��״���Ĥ��$N��Χס��$N��������!!
\n"NOR,me);
                        me->start_busy(1);
                }
                else if( i < 50 )
                {
                        j = 500+random(500);
                        message_vision(HIR"\n
��ȸ�Ĵ��ų��һ�����ѹ���һ�ζε�Ƭ�����!!

        ��      ȸ      -       ��      ȸ      ɱ

���˲�������$N��$N�ܵ���"+j+"�������!!
\n"NOR,me);
                        me->receive_wound("kee", j);
                        me->receive_damage("kee", j);
                }
                else
                {
                        k = random(2)+1;
                        message_vision(HIR"\n
��ȸ�����Ӳ��צ�����ϵ������ܿ�ץ!!

        ��      ȸ      -       ��      ȸ      ��      ��

$N��æ�������������ϵķ��߻��Ǳ�ץ���ˣ�$N����"+k+"�������!!\n
"NOR,me);
                        me->add_temp("apply/defense", -k);
                        
                }
        }
        set_heart_beat(1);
::heart_beat();
}

void die()
{
object ob,me;

        ob = this_object();
        me = ob->query_temp("last_damage_from");

        if( !me )
                ::die();

        message_vision(HIR"\n
��ȸ�ƶ�������������������������ˣ�����������������...

ͻȻ����ȸ�ֻ���ֻ!!����һֻ�ж����죬���ֱ�޷������������Ӱ!!

        [��]    [ȸ]    -       [ȸ]    [��]

�����ƶ�����ȸ��ʱ����$N!!$N����������Ӧ����ȸ�Ѿ���ʧ��$N����ǰ��
\n"NOR,me);
//      me->apply_condition("rose_finch",1);

	tell_object(users(),HIC"
	�� ʥ �� ֮ һ �� �� ��

		"HIR"��	ȸ

	"HIC"�� "+me->name(1)+" �������!!\n"NOR);

	write_file("/u/f/firedancer/log_file/"+me->query("id")+"",sprintf("%s(%s) �� %s �������ȸ��\n",me->name(1),getuid(me),ctime(time()) ));
::die();
}
