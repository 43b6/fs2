// sha-steps.c by Roger 5/24/98
#include <ansi.h>
inherit SKILL;

string *dodge_msg = ({
"\n����$nʹ�������������е�"HIW"����������"NOR"����ƮƮ���������ڼ���֮��\n",
"\n$nʹ���˷����������е�"HIR"�������Ҿ���"NOR"����Ӱ�лã�ʹ$N�Ĺ�����ʽȫ�����\n",
"\n$nʹ��"HIB"���������ǲ���"NOR"������������ʹ$N�Ĺ���ȫ����գ���$n���·���ûմ��\n",
"\n$nʹ���˾�����"HIG"���������Ϸɡ�"NOR"�����ɵرܹ���$N�����ɱ��\n",
"\n��$nʹ��"HIC"��̤ˮ�޺ۡ�"NOR"�Ṧ���������ѵ�����������\n",
"\n��$nʹ��"HIM"���������̡�"NOR"����ʹ$Nֻ������$n�����Ļ�Ӱ\n",
});

int valid_skill_usage(string usage)
{
	return (usage=="dodge") || (usage=="move");
}
 int valid_enable(string usage)
 {
        return( usage=="dodge" || usage=="move") ;
 }

int valid_learn(object me)
{
	if( (int)me->query("max_force") < 10 )
		return notify_fail("�������������û�а취������������ .\n");

	return 1;
}

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if( (int)me->query("kee") < 20
	||	(int)me->query("force") < 5 )
		return notify_fail("��������������������������������� .\n");
	me->receive_damage("kee", 30);
	me->add("force", -3);
	return 1;
}
