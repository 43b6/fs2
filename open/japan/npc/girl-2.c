//shun.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$Nʹ������,һ�С�����ʵ��ɡ���Ȼʹ��,������˸����,����ʵ��Ĵ�����
$nһʧ��ȫ�������ѱ�����������.",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    180,
                "force"      :    200,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N˫�ֳ�����,������,�����ļ����赶���еġ���ҹ�ǿ�����,
$n�������Ŀ��źᵶ����ȴ�ƺ��޷��ֿ�",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    200,
                "force"      :    200,
                "damage_type":   "����",
           ]),
([    "action"     :   "$Nüͷ����,ɱ�⼱��,�������ϡ�֮����ʽ�������������
$n������Ʈ����Ϊ������Ҷ���,$nһ������,�����Ѿ��Ƶ���ǰ",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    250,
                "force"      :    180,
                "damage_type":   "����",
            ]),
([    "action"     :    "$N��������ԽʹԽ��,��������,�����꺮��ѩ������Ӧ������,
$n���д�,��Ϊʱ����$n�������վ��޷�����.",
                "dodge"      :  -35,
                "parry"      :  -35,
                "force"      :   200,
                "damage"     :   200,
                "damage_type":   "����֮��",
            ]),                
   });

void create()
{
        set_name("���л���", ({"girl"}));
        set("age",15);
        set("long","����ŮӰ�Ŵ��˵�ʦ��,���Աߵĺ����������������,����÷ֱ�\
���ˡ��ļ����赶�������ϰ벿���°벿,�����л����������ϰ벿����\n");
        set("title",HIM"ŮӰ�ž������������Ĵ�����"NOR);
        set("gender","Ů��");
        set("class","killer");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",1000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",1000);
        set("sen",1000);
        set("combat_exp",500000);
        set("max_force",1000);
        set("force",1000);
        set("max_atman",1000);
        set("max_mana",1000);
        set("atman",1000);
        set("mana",1000);
        set("force_factor",10);
        set_skill("dodge",100);
        set_skill("nine-steps",100);
        set_skill("unarmed",70);
        map_skill("dodge","nine-steps");
        set("chat_chance_combat",15);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",100);
        set_temp("apply/damage",78);
        setup();
        carry_object("/open/japan/obj/super-cloth.c")->wear();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
	reset_action();
}

mapping query_action()
{
        return action[random(sizeof(action))];
}
void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
HIW "\n����ʹ���ļ����赶������ǿ������,���ŵ����ı任�ݻ�������ʱת��Ϣ���ĳ�ǿ�ع�\n",target);
                message_vision(
HIY "\n�ļ��������ϱ仯,$N�ѱ����ܴ����ﶬ֮�仯������,��֪��������������
\n"NOR,target);
                target->receive_wound("kee",random(50+150));
                COMBAT_D->report_status(target);

  }
