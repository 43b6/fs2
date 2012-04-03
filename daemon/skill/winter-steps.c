// winter-steps.c
#include <combat.h>
#include <ansi.h>
inherit SKILL;

string *dodge_msg = ({

""HIW"$nչ��"HIC"����˪������"HIW"���κ������֣���$N׽������������������"NOR"\n",

""HIW"$nʹ��"HIB"��˪ѩ�׷ס�"HIW"���λ�ΪǧӰ��Ѹ����λ������鲼�������˪ѩ����$N����"NOR"\n",

""HIW"$n���$N�Ĺ��ƣ��κ�һ�ж����������˲��ᣬ����$n����"HIC"��˪ѩ�ѱ桯"HIW"����"NOR"\n",

""HIW"$nʹ��"HIB"��������˪��"HIW"��˲�����ܵ��¶Ⱦ罵����$N��ס������"NOR"\n",

""HIW"$nʩչ"HIB"����˪��ѩ����"HIW"��ʽ"HIC"��˪ѩ�׷ɡ�"HIW"��������ת��������$N���ܣ��ܿ�$N����"NOR"\n",

""HIW"$nչ��"HIB"����˪��ѩ����"HIW"��жʽ"HIC"��˪��Ϊˮ��"HIW"��������ˮ���ת��������$N������"NOR"\n",

""HIW"$nʹ��"HIB"����˪��ѩ����"HIW"����ʽ"HIC"������ѩ��"HIW"�����಻����$Nչ������"NOR"\n",

""HIW"$n���"HIB"����˪��ѩ����"HIW"��סʽ"HIC"��˪ѩ������"HIW"��˪ѩ����������$N��ߣ���$N����"NOR"\n",
});

int valid_enable(string usage)
{
	return (usage=="dodge") || (usage=="move");
}

int valid_learn(object me)
{
     if(me->query_skill("literate",1) < 10)
           return notify_fail("��Ķ���ʶ�ֲ�����û�취����ѩ��˪����\n");

	return 1;
}

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
              if((int)me->query("sen")<60)
                 return notify_fail("����񲻹���������ѩ��˪����\n");
           me->receive_damage("sen",60);
           me->improve_skill("winter-steps",me->query_skill("literate")/10+1);
	return 1;
}
