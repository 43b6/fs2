//ikki.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N��У�����  ��  ��  ħ  ȭ����ɲ�Ǽ�$N����Ӱ����$n�������",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    150,
                "force"      :    150,
                "damage_type":   "����",
           ]),
([    "action"     :   "$N�ô�ɳ�������򵽵ĵ����У�����ȫ���С���棬��$nʹ���ˡ���  ��
��  �衯������",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    250,
                "force"      :    200,
                "damage_type":   "����",
            ]),
   });

void create()
{
        set_name("һ��", ({"ikki"}));
        set("age",16);
        set("long","����������ͭ����ʥ��ʿ��������ʥս��һֱ�ǻ������ŵ���Ů��\n"
        "�����ڵ�ʵ����Զ�����ƽ�ʥ��ʿ�����ŵ������ĵĻ�����\n");
        set("title",HIR"�����"NOR+ HIG"ʥ��ʿ"NOR);
        set("gender","����");
        set("class","ʥ��ʿ");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
	set("potential",49999);
        set("max_gin",1000);
        set("max_kee",3000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",2000);
        set("sen",1000);
        set("combat_exp",1450000);
        set("max_force",10000);
        set("force",10000);
        set("max_atman",5000);
        set("max_mana",5000);
        set("atman",5000);
        set("mana",5000);
        set("force_factor",35);
        set_skill("dodge",200);
        set_skill("unarmed",200);
        set("chat_chance_combat",40);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",430);
        set_temp("apply/damage",110);
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
HIR "\nһ��ȼ����ȫ���С���棬��ȣ����ҵġ���  ��  ��  �衯������\n",target);
                message_vision(
HIW "\nһ�Ե���ӰͻȻ���һֻ���ˣ����ٵ���$N����߷ɹ�����$N�о���һ��ǿ��Ļ����$N��߾�������$N�ع�����ʱ��һ������$N�������ˣ�����\n"NOR,target);
                target->receive_wound("kee",random(210+270));
                COMBAT_D->report_status(target);

  }
