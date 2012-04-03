#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void bite(object me, object victim,object weapon, int damage);
void bite2(object me, object victim,object weapon, int damage);
void claw(object me, object victim,object weapon, int damage);
void kick(object me, object victim,object weapon, int damage);

mapping *action = ({
        ([      "action":               "$N�����������Լ����ٵĶ���������$n��$l�ݺݵ�һҧ!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 250,
                "damage":                250,
		"post_action":                (: bite :),
                "damage_type":  "ҧ��"
        ]),
        ([      "action":               "$N�����������Լ�������Ķ����ſ���$N�Ĵ��������$n��$l�ݺݵ�һҧ!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 350,
                "damage":                350,
		"post_action":                (: bite2 :),
                "damage_type":  "ҧ��"
        ]),
        ([      "action":               "$N������������$N��ǰ����$n��$l������һץ!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 400,
                "damage":                400,
		"post_action":                (: claw :),
                "damage_type":  "ץ��"
        ]),
        ([      "action":               "$N������������$Nǿ�������Ľ���$n��$l�ݺݵ�һ��!!",
                "dodge":                -200,
                "parry":                -200,
                "force":                 500,
                "damage":                500,
		"post_action":                (: kick :),
                "damage_type":  "����"
        ]),
});

void bite(object me, object victim,object weapon, int damage)
{
        message_vision(HIG"$N"HIG"�ٴ���һҧ����$n"HIG"����ҧ����һ���ܴ�ĳݺ�!!\n"NOR,me,victim);
	victim->receive_damage("kee", random(300),me);
	victim->receive_damage("gin", random(50),me);
	victim->receive_damage("sen", random(50),me);

}

void bite2(object me, object victim,object weapon, int damage)
{
        message_vision(HIR"$N"HIR"�ݺ�������һҧ����$n"HIR"����ҧ����һ������ޱȵĳݺ�!!\n"NOR,me,victim);
	victim->receive_damage("kee", random(500),me);
	victim->receive_damage("gin", random(100),me);
	victim->receive_damage("sen", random(100),me);

}

void claw(object me, object victim,object weapon, int damage)
{
        message_vision(HIY"$N"HIY"��$n"HIY"���Ϻݺ�����һץ��ץ�������������Ѫצ��!!\n"NOR,me,victim);
	victim->receive_damage("kee", random(700),me);
	victim->receive_damage("gin", random(150),me);
	victim->receive_damage("sen", random(150),me);
}

void kick(object me, object victim,object weapon, int damage)
{
        message_vision(HIC"$N"HIC"������$n"HIC"����һ�ߣ���$n"HIC"�߳�����Զ��ʹ��$n"HIC"�������ص�!!\n"NOR,me,victim);
	victim->receive_damage("kee", random(900),me);
	victim->receive_damage("gin", random(200),me);
	victim->receive_damage("sen", random(200),me);
}

int valid_learn(object me)
{
        return 1;
}

int valid_enable(string usage)
{
        return usage=="unarmed";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        return 1;
}
