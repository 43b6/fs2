// wood-force by sueplan

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
        return notify_fail("ľ���ķ�ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}

string perform_action_file( string func)
{
        return CLASS_D("bonze")+"/woodforce/"+func;
}

