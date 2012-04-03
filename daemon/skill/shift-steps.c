// linbo-steps.c

inherit SKILL;

string *dodge_msg = 
({
"$nչ��[1;36m��Ǭ����Ų�ơ�[0m��[1m��������ͼ����ˮ���ʷ�����������[0m$n�������糤�羭�죬��ӥ���գ� ��Ȼ����������˷���\n",
"ֻ��$nʩչ[1;36m��Ǭ����Ų�ơ�[0m��[1m���������ݷ�˳�棬����ʮ�������У���[0m�ڵ���ʯ�䣬$n����Ӱ˲���������١�\n",
"$n̤��[1;36m��Ǭ����Ų�ơ�[0m��[1m��ֱ��ǰ������λ��̫��֮����ǰ������[0m$n��̤�������з�λ��������Ī�⡣\n",
"$nʹ��[1;36m��Ǭ����Ų�ơ�[0m��[1m����������̫��λ���������������Σ���[0mɲ�Ǽ���Ʊ�ɫ��������ת������ֻ�е�ʱ����ȫŤ������Ҳ�ѱ�$n�����ڡ�\n",
"$nչ��[1;36m��Ǭ����Ų�ơ�[0m��[1m���ض��վ����ƱΣ����ζݼ�˹Ϊ������[0m�û�������������ʵʵ����Ӱ��������ȫ�Ի�����׽����\n",
"$nб̤[1;36m��Ǭ����Ų�ơ�[0m�����ߺ��ͣ�����[1;33m��������ˮ��Ϊ���й�������ΪӪ����[0mֻ��$n��̤��λ���ٻ����������ת�����˵�����ˡ�\n",
});

int valid_enable(string usage) 
{
	return (usage=="dodge")||(usage=="move");
}

int valid_learn(object me)
{
        if(me->query_skill("literate",1)*2 <= me->query_skill("shift-steps",1))
        {
          write("���֪ʶ���㣬�޷����Ǭ����Ų�����׾���ʮ���Եľ�Ҫ�仯��\n");
          return 0;
	}
 if(me->query("class") != "prayer")
return notify_fail("���ʥ��ͽ����ѧ֮\n");
	return 1;
}

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if((int)me->query("kee")<5)
		return notify_fail("�����������������Ǭ����Ų�ơ�\n");
	me->receive_wound("kee",5);
	return 1;
}
