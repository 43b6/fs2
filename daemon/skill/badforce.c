// badforce.c by ice
// modify by oda

#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{
	if( (int)me->query("bellicosity") < 10 )
		return notify_fail("���ɱ���������޷������ħ����\n");
	return 1;
}

int practice_skill(object me)
{
	return notify_fail("��ħ��ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}

string exert_function_file(string func)
{
	return CLASS_D("bandit") + "/badforce/" + func;
}

void skill_improved(object me)
{
	int s;

	tell_object(me, HIW "һ��а������ͷ��ð������Ķ�ħ�����Ӷ���!! \n" NOR);
	s = me->query_skill("badforce", 1);
	if( s%10==9 && random(s)>(int)me->query("max_force")/30) {
		tell_object(me, HIW "�м������ж��й��������ڵ�а�����������������ˡ�\n" NOR);
		me->add("max_force", random((int)s/30)+1);
	}
}
