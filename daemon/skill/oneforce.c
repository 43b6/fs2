// oneforce.c

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
	return notify_fail("һ���ڹ�ֻ����ѧ�ġ�\n");
}


