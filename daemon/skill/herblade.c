// spring-blade.c

inherit SKILL;

mapping *action = ({
	([	"action":		"$N����$w�ڳ���ʹ��һʽ��������ǧ����$n$l��ȥ",
		"damage":		200,
	"dodge":		50,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С��������ơ�������$w���ͻ�����$n$l��ȥ",
		"damage":	150,
		"dodge":	-20,
		"parry":	40,
		"damage_type": "����",
	]),
	([	"action":		"$N�߾�����$w��һ�С����Ī�С���$n$l��ȥ",
		"damage":	200,
		"dodge":	40,
		"parry":	30,
		"damage_type": "����",
	]),
	([	"action":		"$N������$wһ�ã�һ�С��ɸ��񲯡���$n$l��ȥ",
		"damge":	50,
		"dodge":	20,
		"parry":	10,
		"damage_type": "����",
	]),
});

int valid_learn(object me)
{
	return 1;
}

int valid_enable(string usage)
{
	return (usage=="blade") || (usage=="parry");
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	object weapon;

	if( !objectp(weapon = me->query_temp("weapon"))
	||	(string)weapon->query("skill_type") != "blade" )
		return notify_fail("���������һ�ѵ���������������\n");

	if( (int)me->query("kee") < 40 )
		return notify_fail("����������������ŵ�������������Ϣ��Ϣ�ɡ�\n");
	me->receive_damage("kee", 40);
	return 1;
}
