// nine-steps.c

inherit SKILL;

string *dodge_msg = ({

"\n$nչ�֡�[1;31m���λ�Ӱ[0m�������ƻã��ƻ����棬��$N׽������,��Ȼһ��ת��,����������\n",

"\n$nʹ����[1;32m������[0m������һ��ʮӰ��׷����磬Ѹ����λ���������Ȱ�ɵ�$N����\n",

"\n���$N�Ĺ�����ֻҪ���κ�һ�У�������Ƕϣ�����$n���á�[1;33m����ѿ�[0m������\n",

"\n$n�����붨�����І����дʣ�˲������һָ������[1;34m����[0m�����԰�$N����ס������\n",

"\n$nʩչ��[1;33m������Ӱ��[0m����ʽ��[1;35m������[0m�����������У��ķ����ߣ��ܿ�$N����\n",

"\n$nչ�֡�[1;33m������Ӱ��[0m����жʽ��[1;36m���б���[0m�������в��У���ʽ��ʽ������$N������\n",

"\n$nʹ����[1;33m������Ӱ��[0m������ʽ��[1;31m�˱�а��[0m�������籩�����಻�Ϲ���$N����ͣϢ\n",

"\n$n�����[1;33m������Ӱ��[0m����סʽ��[1;35m�����ٻ�[0m�������ֹ�꣬�����û�˵�$N�����\n",
});

int valid_enable(string usage) {
	return (usage=="dodge")||(usage=="move");

}

int valid_learn(object me)
{
	return 1;
}
string perform_action_file(string action)
{
return CLASS_D("poisoner")+"/nine-steps/"+action;
} 
string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if((int)me->query("kee")<5)
		return notify_fail("�����������������������Ӱ����\n");
	me->receive_wound("kee",5);
	return 1;
}
