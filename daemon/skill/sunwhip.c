// ���ձ޷� ------by rence
// by hana 1997/3/2
 
#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void hurt(object me, object victim, object weapon, int damage);
void bleed(object me, object victim, object weapon, int damage);
void conti(object me, object victim, object weapon, int damage);
int age = this_player()->query("age",1);
int lv  = this_player()->query_skill("sunwhip",1);

mapping *action = ({
        ([      "action":"\n$Nʹ�����ձ޷���һʽ[33m��������ɽ��[0m������$w��ɨ$n��$l\n",
                "dodge":                -20,
                "damage":              30,
                "damage_type": "����",
        ]),

        ([      "action":"\n$Nʹ�����ձ޷��ĵڶ�ʽ[33m��������˫��[0m������$w�ڿ�����������Ȧ֮����$n$l����\n",
                "dodge":                -20,
                "damage":                   40,
                "damage_type":  "����",
                "post_action": (: conti :),
        ]),

        ([      "action":"\n$Nһ������, ���ӥ��ʳ, ���ձ޷�����ʽ[33m���丸׷�ա�[0m������$w����$n$l\n",
                "dodge":                -30,
                "damage":              50,
                "damage_type":  "����",
                "post_action": (: bleed :),
        ]),

        ([      "action":"\n$N����$w������Ȧ�����ձ޷�����ʽ[33m���������족[0m��׼$n$l��������ֱ���˹�ȥ\n",
                "dodge":                -40,
                "damage":              60,
                "damage_type":  "����",
                "post_action": (: hurt :),
        ]),

        ([      "action":"\n$N����һԾ������$wʹ������ʽ[33m�������º㡱[0m��$n$lֱֱ����\n",
                "dodge":                -40,
                "damage":              70,
                "damage_type":  "����",
                "post_action": (: bleed :),
        ]),

        ([      "action":"\n$N��$w�糤����Ϸһ�㣬�������, ����ʽ[33m����ҡֱ�ϡ�[0m���ܵ���$n��$l��ȥ\n",
                "dodge":                -20,
                "damage":              80,
                "damage_type":  "����",
                "post_action": (: conti :),
        ]),

        ([      "action":"\n$N˫����ס$w����������, ʹ�����ձ޷�����ʽ[33m����������[0m, ��β����������$n$l��ȥ\n",
                "dodge":                -20,
                "damage":              90,
                "damage_type":  "����",
                "post_action": (: hurt :),
        ]),

        ([      "action":"\n$N���һ�������ձ޷��ڰ�ʽ[33m�������ع⡱[0m�ڰ�ջӳ�һ��Բ����, ббɨ��$n$l\n",
                "dodge":                -30,
                "damage":               100,
                "damage_type":  "����",
                "post_action": (: bleed :),
        ]),

        ([      "action":"\n$Nʹ�����ձ޷��ھ�ʽ[33m��������㡱[0m����͸����, ����$w�罣һ�㼲��$n��$l\n",
                "dodge":                -30,
                "damage":              110,
                "damage_type":  "����",
                "post_action": (: hurt :),
        ]),

        ([      "action":"\n$N����������ת��ʹ���޷���ʮʽ[33m����ĺ;�[0m��$w���ɻ������$n����·\n",
                "dodge":                -30,
                "damage":              120,
                "damage_type":  "����",
                "post_action": (: conti :),
        ]),

        ([      "action":"\n\t\t[36mͻȻ����������������޹⣡$���������ձ޷�֮��߾��磡\n\n\t\t\t\t[35m�� �� �� �� �� ��[0m\n\nֻ�������Ӱ�ܲ�͸���������$n[0m\n",
                "dodge":                -30,
                "damage":              150,
                "damage_type":  "����",
                "post_action": (: hurt :),
        ]),
});

void hurt(object me, object victim, object weapon, int damage)
{
        if( me->query("force_factor") > 5 )
        if( random(150) < random(lv))
        {
          victim->receive_damage("kee",lv*age/30);
          message_vision(HIM"$N�����������������$n��$nһ�󰧺�����Ȼ���˲�С�����ˡ�\n"NOR,me,victim);
          COMBAT_D->report_status(victim);
        }
}
void bleed(object me, object victim, object weapon, int damage)
{
        if(damage > 40)
        {
          victim->apply_condition("bleeding", random(lv*age)/100);
          message_vision("[1;36m$N���ձ޷��������ᴩ$n�����������[0m\n",me,victim);
        }
}

void conti(object me, object victim, object weapon, int damage)
{
        int i;
        int lv1 = victim->query_skill("dodge",1);
        if( me->query("force_factor") >= 10 )
        {
          if( random(lv) > random(lv1) && me->query_temp("conti") == 0 )
            {
            me->set_temp("conti",1);
            message_vision("\n[1;33m$N��Ȼ�������ձ޷�[1;33m��Ҫ��������$w����$n�����к�!![0m\n" ,me);
            for(i=0;  i <=   age/5  ;  i++)
            COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
            me->delete_temp("conti");
            }
        }
}
int valid_learn(object me)
{
        object ob;
        //�޷��ǵڶ�ר��, ������������50���ϲ���ѧ  by hana
        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취��\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "whip" )
                return notify_fail("�������װ�������������С�\n");
        return 1;
}

int valid_enable(string usage)
{
        return usage=="whip" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
int skill_level, limit;
        skill_level=(int)me->query_skill("sunwhip", 1);
        limit= (int)(skill_level/9);
        if (limit < 1 )
                return action[random(1)];
        if (limit < 2 )
                return action[random(2)];
        if (limit < 3 )
                return action[random(3)];
        if (limit < 4 )
                return action[random(4)];
        if (limit < 5 )
                return action[random(4)+1];
        if (limit < 6 )
                return action[random(4)+2];
        if (limit < 8 )
                return action[random(4)+3];
        else if (limit < 10)
                return action[random(4)+4];
        else
                return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        //�޷�����ʥ���һר��, �������������Ʋ���̫��  by hana
        if ((int)me->query("kee") < 10)
        {
            return notify_fail("��������㣬�޷���ϰ���ձ޷���\n");
        } else if ((int)me->query("force") < 10)
        {
            return notify_fail("��������������޷���ϰ���ձ޷���\n");
        }
        me->receive_damage("kee", 10);
        me->add("force", -10);
        write("�㰴����ѧ����һ�����ձ޷���\n");
        return 1;
}

