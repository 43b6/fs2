//fly-steps.c

inherit SKILL;

string *dodge_msg = ({
	"$nʹ��һ��������Ϸˮ������ ,���һɨ ,ٿ��һ������ ,�ڳ�һ������ !\n",
	"$n����ȫ������ ,һ��������仨��֮�� ,�������ɶ�� !\n",
	"$n˫��һ�� ,���ԡ������Ӳ���֮�� ,��˻�����ӷ����� ,���ΰ������ɶ�� .\n",
	"$n���Ų�æ ,��Хһ�� ,һ�С�����ϴ���� ,Ծ�˿�ȥ .\n",
});

int valid_enable(string usage) {
	return (usage=="dodge")||(usage=="move");
}

int valid_learn(object me)
{
	return 1;
}

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if((int)me->query("kee")<30)
		return notify_fail("����������������������ݡ�\n");
	me->receive_damage("kee",30);
	return 1;
}
string perform_action_file(string action)
{
	return CLASS_D("blademan")+ "/fly-steps/" +action;
}
