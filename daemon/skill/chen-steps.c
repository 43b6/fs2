// nine-steps.c

inherit SKILL;

string *dodge_msg = ({
	"$n����һת���������������˿�ȥ��\n",
	"$nʹ���¼����еġ���Ӱ��������$N�Ĺ�����\n",
	"$n����ʮ�������������䣬�㿪$N��һ�У�\n",
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
	if((int)me->query("gin")<30)
		return notify_fail("��ľ��������������¼�����\n");
	me->receive_damage("gin",30);
	return 1;
}
