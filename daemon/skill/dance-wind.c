#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

mapping *action = ({
//1
	([	"action"     :    HIW"$N˫��һ��"HIY"��"HIC"�켯��ӿ"HIY"����"HIC"������"HIY"��"HIW"��ɲ�Ǽ����������ӿ��$n"HIW"�ѱ����ص���������Χ��"NOR,
		"dodge"      :   -35,
		"parry"      :   -35,
		"damage"     :    80,
		"force"      :    80,
		"damage_type":   "����",
	]),
//2
	([	"action"     :    HIW"$N�����滽"HIY"��"HIC"������"HIY"����"HIC"�������"HIY"��"HIW"�����ޱȵ�������$n"HIW"��ɶ�����"NOR,
		"dodge"      :   -35,
		"parry"      :   -35,
		"damage"     :    70,
		"force"      :    70,
		"damage_type":   "����",
	]),
//3
	([	"action"     :    HIW"$N���ɵ�ʹ��"HIY"��"HIC"�����˳�"HIY"����"HIC"ħ�Ժ���"HIY"��"HIW"��ħ������֮�£��ۼ����е�������$n"HIW"���غ�ȥ��"NOR,
		"dodge"      :   -35,
		"parry"      :   -35,
		"damage"     :    120,
		"force"      :    80,
		"damage_type":   "ħ��",
	]),
//4
	([	"action"     :    HIW"$N̾����"HIY"��"HIC"���Ĳ���"HIY"����"HIC"��Ī����"HIY"��"HIW"����ʽ�������޵���$n"HIW"Ʈ�������ŵ�$n"HIW"�޷��мܣ�"NOR,
		"dodge"      :   -35,
		"parry"      :   -35,
		"damage"     :    70,
		"force"      :    90,
		"damage_type":   "����",
	]),
//5
	([	"action"     :    HIW"$Nɱ������ʹ��һʽ"HIY"��"HIC"�ٿ�����"HIY"����"HIC"�������"HIY"��"HIW"��˲���Ѿ���������֮����ɱ��$n"HIW"�������ˣ�"NOR,
		"dodge"      :   -35,
		"parry"      :   -35,
                "damage"     :    80,
                "force"      :    90,
                "damage_type":   "����",
	]),
//6
	([	"action"     :    HIW"$Nһ���л���"HIY"��"HIC"ǧ�����"HIY"����"HIC"��ħ�趯"HIY"��"HIW"��ǧ����ħ����$n"HIW"�빥��ȥ��"NOR,
		"dodge"      :   -35,
		"parry"      :   -35,
		"damage"     :    130,
		"force"      :    130,
		"damage_type":   "ѹ��",
	]),
//7
	([	"action"     :    HIW"$N�����ŵأ���̤����ʹ��"HIY"��"HIC"�ض����"HIY"����"HIC"��Ӱ����"HIY"��"HIW"��ɲʱ����ҡ�ض���$n"HIW"�����ܲ���������ѹ����"NOR,
		"dodge"      :   -35,
		"parry"      :   -35,
		"damage"     :    100,
		"force"      :    105,
		"damage_type":   "����",
	]),
//8
	([	"action"     :     HIW"$N��������������صİ��أ����ֿ�������������$n"HIW"ʹ����"HIY"��"HIC"�������"HIY"����"HIC"����Х��"HIY"��"NOR"��"NOR,
		"dodge"      :    40,
		"parry"      :   -50,
		"damage"     :    100,
		"force"      :    100,
		"damage_type":   "����",
	]),
//9
	([	"action"     :   HIW"����һ����ζƮɢ������$NϮ��һʽ"HIC"��"HIM"���㴦��"HIY"����"HIM"ӭ��Ʈɢ"HIC"��"HIW"Ʈ��$n"HIW"֮Ҫ��!!"NOR,
                "dodge"      :    35,
                "parry"      :    60,
                "damage"     :    90,
                "force"      :    70,
                "damage_type":   "����",
	]),
//10
	([	"action"     :   HIW"$N�૵���ʫ�пɽⲻ�ɽ�"HIC"��"HIM"����ˮ��"HIY"����"HIM"����һ��"HIC"��"HIW"�����伣��Ҳ!!"NOR,
                "dodge"      :    75,
                "parry"      :   -95,
                "damage"     :    40,
                "force"      :    90,
                "damage_type":   "����",
	]),
//11
	([	"action"     :   HIW"$N�иж���"HIC"��"HIM"���ټ���"HIY"����"HIM"꼻�һ��"HIC"��"HIW"ƬƬ�Ļ��꽥��ɱ��$n"HIW"!!"NOR,
                "dodge"      :   -65,
                "parry"      :    95,
                "damage"     :    60,
                "force"      :    90,
                "damage_type":   "���",
	]),
//12
	([	"action"     :   HIW"$N������"HIC"��"HIM"������"HIY"����"HIM"���һ��"HIC"��"HIW"ֻ������Ļ�Ҷ���ż����ɱ������Ϯ��$n"HIW"!!"NOR,
                "dodge"      :    135,
                "parry"      :    65,
                "damage"     :    70,
                "force"      :    90,
                "damage_type":   "����",
	]),
//13
	([	"action"     :   HIW"$N��ȻƮ��"HIC"��"HIM"ɽ�黨��"HIY"����"HIM"����һ˲"HIC"��"HIW"��˲���Ѿ�����ɽ������������$n"HIW"!!"NOR,
                "dodge"      :    65,
                "parry"      :    75,
                "damage"     :    110,
                "force"      :    110,
                "damage_type":   "����",
	]),
//14
	([	"action"     :   HIW"$N����һ����"HIC"��"HIM"�������"HIY"����"HIM"����һ��"HIC"��"HIW"����ӯ�������ѹ���$n"HIW"�Ľ���!!"NOR,
                "dodge"      :    65,
                "parry"      :   -85,
                "damage"     :    100,
                "force"      :    110,
                "damage_type":   "ѹ��",
	]),
//15
	([	"action"     :   HIW"$N����Ʈת�������ľ�һת��ʹ��"HIC"��"HIM"�����ͷ�"HIY"����"HIM"����һ��"HIC"��"HIW"��$n"HIW"������ʧ�ڻ���Ļþ���!!"NOR,
                "dodge"      :   -65,
                "parry"      :    75,
                "damage"     :    110,
                "force"      :    80,
                "damage_type":   "����",
	]),
//16
	([	"action"     :    HIW"$N���������������꣬����һʽ"HIC"��"HIM"�컨����"HIY"����"HIM"Ʈҡ֮��"HIC"��"HIW"ɢ��$n"HIW"����!!"NOR,
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    90,
                "force"      :    90,
                "damage_type":   "����",
	]),
});

int valid_learn(object me)
{
        return 1;
}

int valid_enable(string usage)
{
	return ( usage=="unarmed" || usage=="parry" );
}

mapping query_action(object me, object weapon)
{
	if( me->query("id")=="dance wind")
	{
	return action[random(8)];
	}
	else if( me->query("id")=="tzan yuo")
	{
	return action[random(16)-8];
	}
	else
	{
        return action[random(sizeof(action))];
	}
}

int practice_skill(object me)
{
        return 1;
}
