// ��һ������Ҫ�޸�֮�� spare, futzao, lopo ���б�д�����...
// ����Ҫһ��:Ҫ�� [1;33m���[0m �����Ϊ��...[1;35m�м� �м�[0m
inherit SKILL;

string *dodge_msg = ({
        
"\n$nʹ����[1;37m���о�[0m������һ��,�����а�����,����$N������,�����$N�Ĺ���\n",
        
"\n$nʹ����[1;32m�׳���[0m��������ף���������ƶˣ����׵�����$N�Ĺ���\n",
        
"\n$nʩչ��[1;35mӥ����[0m��$n�ñȷ�ӥ������$N����������������Ȧ��ת����϶����\n",
        
"\n$nʩչ��[1;33m�����[0m����$N�Ĺ��ƣ��辢һ�ͣ����$N�Ĺ����������һ��\n",
        
"\n$nʩչ��[1;34m������[0m�����˵�����������������壬��$N�Ĺ��ƣ������߽�\n",
        
"\n$nʩչ��[1;31m���ٻ�[0m��ֻ��$nȫ��������㣬������븽�壬����������$N�Ĺ�����ȫ����\n",
        
"\n$nʩչ��[1;36m��Ծ��[0m��$n�����ͻ�һ�����ͣ������������$N�Ĺ��ƣ������޶� \n",
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
