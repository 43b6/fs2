// ghost-steps.c by oda

inherit SKILL;
#include <ansi.h>

string *dodge_msg=({
    "$n����һ��ȫ�����̯ȥ������Ķ����$N�Ĺ�����������ڤ���е�"HIY"�������޶���"NOR"��\n",
    "$nʹ����ڤ���е�"HIB"��������Ρ�"NOR"��ֻ��������һ�Σ�$N���е�ֻ�ǲ���\n",
    "ֻ��$n����һ��ʹ����ڤ���ľ���"HIM"��Ʈ�����١�"NOR"��������Ϣ��Ʈ��$N���\n",
    "ֻ��$n�ĽŲ���ת������һ�Σ�ʹ����������ڤ���е�"HIG"����Ӱ�޴ӡ�"NOR"�������������һ����ʧ���١�\n",
    "$n�����Ӻ�ȻһŤ������������һ������$N�Ĺ����Ĵ����㣬�õ�������ڤ���е�"HIC"�������޳���"NOR"��\n",
    "ֻ����$n�Ų�һ�棬��Ȼ���ֺö��$n��$N���Ű�Χ��������ڤ���е�"HIY"���л���Ѱ��"NOR"��$N�Ĺ���������ա�\n",
    "$n��Ȼ�����η������Ų����������������Ķ�ת��ʹ����������ڤ���İ������"HIB"����ڤ����"NOR"����������Ľ�$N�Ĺ���һһ�����\n",
	});

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int valid_enable(string  usage)
{
	return (usage=="dodge"||usage=="move");
}

int practice_skill(object me)
{
	if( (int)me->query("sen") < 30 )
		return notify_fail("����񲻹�����������ڤ����\n");
	me->receive_damage("sen", 30);
	return 1;
}
