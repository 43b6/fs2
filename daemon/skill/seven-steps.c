// change bye adam..
#include <ansi.h>
inherit SKILL;

string *dodge_msg = ({
        
"\n$nʹ����"HIW"���о�"NOR"������һ�Σ������а����飬����$N�����ԣ������$N�Ĺ�����\n",
        
"\n$nʹ����"HIG"�׳���"NOR"��������ף���������ƶˣ����׵�����$N�Ĺ�����\n",
        
"\n$nʩչ��"HIM"ӥ����"NOR"��$n�ñȷ�ӥ������$N����������������Ȧ��ת����϶���У�\n",
        
"\n$nʩչ��"HIY"�����"NOR"����$N�Ĺ��ƣ��辢һ�ͣ����$N�Ĺ����������һ�㣡\n",
        
"\n$nʩչ��"HIB"������"NOR"�����˵�����������������壬��$N�Ĺ��ƣ������߽⣡\n",
        
"\n$nʩչ��"HIR"���ٻ�"NOR"��ֻ��$nȫ��������㣬������븽�壬����������$N�Ĺ�����ȫ���ã�\n",
        
"\n$nʩչ��"HIC"��Ծ��"NOR"��$n�����ͻ�һ�����ͣ������������$N�Ĺ��ƣ������޶ã�\n",
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
        if((int)me->query("kee")<5)
                return notify_fail("���������������������Ԧ��� ��\n");
        me->receive_wound("kee",5);
        return 1;
}