//���ϸ��¥skill ֮¥����
//���ǽ��ϸ��¥npc�ı�־,ʹ����һ��dodge skill
#include <combat.h>
#include <ansi.h>
inherit SKILL;

string *dodge_msg = ({
 "$n������������Ʈ�ε�̤��һʽ"HIC"��¥��������"NOR"���۹�Ϭ���ض���$N�Ĺ��ƣ����಻�ٵ�����һ����϶������$N����\n",
 "�ۿ�$N�Ĺ����޷�������$n����Ӧǰͻ����ʹ��һʽ"HIR"��¥�ֻ𻪡�"NOR"��ֱ��̤��$N�Ĺ����ɿն���\n",
 "$n���������ת���ڲ���ʹ��һʽ"HIB"��¥ת���С�"NOR"���Լ�����ٶ�̤�챼�ߣ�$N�����޷�׷��\n",
 "$nʹ��һʽ"HIW"��¥��˫�硯"NOR"����Ծ�����磬��$N�Ĺ����ټ���Ҳ�˲���$nһ����ë\n",
 "$nԾ��ݺ��ʹ����һʽ"HIG"��¥β׷寧"NOR"�����ν��������ҷ����裬���Ѵ���֮����������$N�Ĺ���\n",
});

int valid_enable(string usage)
{
	return (usage=="dodge")||(usage=="move");
}


string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}


