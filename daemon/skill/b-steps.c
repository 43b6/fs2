
inherit SKILL;

string *dodge_msg = ({
    "$nһ������������ͷ��������$N�Ĺ���Ʈ�𣬴��ݶ����һ�С�\n",
    "$nʹ��һ�С���Į����ֱ������Ȼ�������࣬���$N���˸��ա�\n",
    "$n����һҡ�����������ˣ�һ�С���Ӱ��б���������$N�Ĺ��ơ�\n",
    "$nһ�С���������ˮ������Ծ��ٿ��������$N����\n",
    "$n��һҡ����һ�Σ�һ�С����֪����������������\n",
    "$n˫��һ�㣬бб����ʹ����б���ӻ��ɡ�������$N���ࡣ\n",
});

int valid_enable(string usage) 
{ 
    return (usage == "dodge") ;
}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30 )
            return notify_fail("�������̫���ˣ���������Ӱ���㡣\n");
        if (me->query_skill("yan-shuangfei", 1) < 30)
	        me->receive_damage("kee", 10);
		me->receive_damage("kee", 20);
        return 1;
}