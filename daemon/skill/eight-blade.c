// eight-blade.c

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ�����а˷�֮��������$w�Ͷ�����̤�沽��$w��ʱӿ������������ң��$n���ƹ��ǹ������ط��ء�",
		"damage":		200,
		"dodge":		70,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ�����а˷�֮�����桱��ֻ������$w���⾢����Ȼ������$N���浶�ߣ������������磬ֱ��$n��ȥ��",
		"damage":		250,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ�����а˷�֮����ı����$N�������ڵ���֮�У�����ǧ��Ӱ�������ε����Թ˼�������$n���ڵ���֮��",
		"damage":		300,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ�����а˷�֮����թ����ֻ������$w���⾢����$w��Ӱ����ʵ֮��ʵ����֮����$n�����ڵ�Ӱ֮�С�",
		"damage":		350,
		"damage_type":	"����"
	]),
     ([  "action":       "$Nʹ�����а˷�֮�����ȡ������������������������$w����ɽ�鱩����й�����γ�һ����һ�������������Ѱ��ľ��ΰ������\����$nӿȥ��",
		"damage":		400,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ�����а˷�֮��ս��������$n����Ŀ�ɿڴ��������ٶ൶��ÿһ�����Ӳ�ͬ�Ƕ���$n��ȥ�������������ߣ������������⣬��̬Ȥ��������������������",
		"damage":		450,
		"damage_type":	"����"
	]),
     ([  "action":       "$Nʹ�����а˷�֮����ս����$w��â���ţ��˵����̣�ʱ��Ƕ�����þ�׼��ƥ��������ƹ�עȫ�������飬����һȥ�޻��Ĳ������ơ�",
		"damage":		500,
		"damage_type":	"����"
	]),
        ([	"action":		"$Nʹ�����а˷�֮����Բ������ǽΪ��������ΪԲ�����Ǹ����ɵľ��룬һ��Բ��ĵ������ӵ��������������췽ʽ���ӱ��ǵؿ�ӿ��������$n��ȥ��",
		"damage":		550,
		"damage_type":	"����"
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
