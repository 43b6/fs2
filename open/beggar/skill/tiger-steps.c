//tiger-steps.c by Dico
#include <ansi.h>
inherit SKILL;

string *dodge_msg = ({
"\n$nʹ��һ��"HIB"�����Ƴ�����"NOR"����$n�������ƣ���Ȼȫ�����
�Ѵܵ�����գ��㿪��$N�Ĺ�����һ�����������վ��$N��ǰ��\n",
"\n$nʹ��"HIY"�����������"NOR"���ӵ���������ң�����������ܿ���$N��ǿ�ҹ��ơ�\n",
"\n$nһ��"HIR"�����㹦��"NOR"ֻ��$n��ֱ�ĳ�����ʣ�����$N��ɱ�С�\n",
"\n$n�Ų���ӯ������ת�ۻ��ֱ������һ�㣬��$N�������ƹ���
ת��Ϊ��������"HIW"���аٱ�"NOR"�еľ������-"HIG"�����л�λ��"NOR"��\n"
});

int valid_enable(string usage)
{
        return (usage=="dodge") || (usage=="move");
}

int valid_learn(object me)
{
        return 1;
}
string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

