//sixforce.c

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
	return notify_fail("�����ķ�ֻ����ѧ�ģ����Ǵ�����(exert)������������ .\n");
}

string exert_function_file(string func)
{
	return CLASS_D("blademan")+"/sixforce/"+func;
}
