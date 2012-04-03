//shuryu.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N��У���¬  ɽ  ��  ��  �衯��$n�е�һ�������ɹ�$n����ߡ�",
                "dodge"      :   -35,
		"parry"      :   -35,
                "damage"     :    140,
                "force"      :    100,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N�����ͻȻ����������$N��ȣ���¬  ɽ  ��  ��  �ԡ���$nֻ����һ����
����$N��������һ�ɴ�����$n��Ϯ���������",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    300,
                "force"      :    200,
                "damage_type":   "����",
           ]),
([    "action"     :   "$N����ɽ�����ƽ�ʥ��ʿ��������ѧ���ļ���Ĭ����һ�Σ�����ȫ���С��
�棬ʹ���ˡ���  ��  ʥ  ������������$n����Ӱ����Ҫ���������ˡ�",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    270,
                "force"      :    300,
                "damage_type":   "����",
            ]),
   });

void create()
{
        set_name("����", ({"shuryu"}));
        set("age",15);
        set("long","����������ͭ����ʥ��ʿ��������ʥս��һֱ�ǻ������ŵ���Ů��\n"
        "�����ڵ�ʵ����Զ�����ƽ�ʥ��ʿ�����ŵ������ĵĻ�����\n");
        set("title",HIG"������ʥ��ʿ"NOR);
        set("gender","����");
        set("class","ʥ��ʿ");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",3000);
        set("max_sen",1000);
        set("gin",2000);
        set("kee",3000);
        set("sen",2000);
        set("combat_exp",1450000);
        set("max_force",10000);
        set("force",10000);
        set("max_atman",5000);
        set("max_mana",5000);
        set("atman",5000);
        set("mana",5000);
        set("force_factor",30);
        set_skill("dodge",200);
        set_skill("unarmed",200);
	set("chat_chance_combat",30);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",390);
        set_temp("apply/damage",100);
        setup();
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
HIG "\n��������һ�ᣬ���һ�������ҵġ�¬  ɽ  ��  ��  �ԡ�������\n",target);
                message_vision(
HIR "\n��������ӰͻȻ��$N�����֣�˫�ּ���$N��ֱ�������ȥ����\n"NOR,target);
                target->receive_wound("kee",random(300+350));
                COMBAT_D->report_status(target);
  }
