// shade-steps.c

inherit SKILL;

string *dodge_msg = ({
    "$n��Ӱ΢��,�Ѿ���һ�С�[35m�ǹ���ɢ[0m���Ƶ�$N�����γ��ĸ���Ӱ��\n",
    "$n����һתʹ����[35m����Ƕ�[0m��˲ʱ����ԭλ�����˿�ȥ,$N�����˻�Ӱ��\n",
    "ֻ��$n��Ӱһ�μ�ʧ,һʽ��[35m���Ǹ���[0m���ѻû�������֮�⡣\n",
    "$nʹ����[35m��ת����[0m��,$N֮����˲�䱻����,$n���ݲ��ȵ�������\n",
    "��$nʹ��һ�С�[35m������ת[0m��,������$N����֮��������Ʈ�˿�ȥ��\n",
    "$n����΢�κ����߸���Ӱ,$N�����Ѷ�����ʧ��,����һ�С�[35m�û�����[0m����\n",
     "$n��Ӱ����,ͻ��������â������$N��Χ,ʹ$NĿ�ɿڴ�,��֪����,������ ���ǲ� ��������-��[35m�����岼[0m����\n",

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

int practice_skill(object me)
{
	if(me->query("kee") < 30 )
		return notify_fail("�����������û�취�����ǲ���\n");
	me->receive_damage("kee", 30);
	return 1;
}
