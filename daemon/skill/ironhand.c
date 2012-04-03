// ironhand.c
#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;

mapping *action = ({
	([	"action":"    $Nʹ����ɳ�Ƶĵ�һʽ[33m������ӭ����[0m��ͨ���������$n��$lֱֱ��ȥ\n",
		"dodge":    -20,
		"force":    20,
		"damage":   30,
		"damage_type":	"����"
	]),
	([	"action":"    $Nʹ����ɳ�Ƶڶ�ʽ[33m���������á�[0m���������, ���Ƴ��ƺ�������ػ���$n��
$l\n",
		"dodge":	-20,
                "force":        50,
		"damage":	40,
		"damage_type":	"����"
	]),
	([	"action":"    $N��ʽһ��, ��ɳ�Ƶ���ʽ[33m�����Ҳ��֡�[0m�����������ƻ�ȭ��$n��ȥ, ���Ӵ�
������֮ǰ˫ȭ���ػ�Ϊ˫��, ˳������$n��$l\n",
		"dodge":	-30,
                "force":        80,
		"damage":	55,
		"damage_type":	"����"
	]),
	([	"action":"    $Nʹ������ʽ--[33m����Ӱ���С�[0m, ɲʱ��Ӱ����, һ·��׼$n��$l, ʱ�������,
�ػ�����\n",
		"dodge":	-40,
                "force":        100,
		"damage":	75,
		"damage_type":	"����"
	]),
	([	"action":"    $N˫��ʹ������, �������ˣ�����ʽ[33m��ǧ������[0mһ��ʩչ, �Ʒ��������$n��
$l���ϵ��ͳ�\n",
		"dodge":	-40,
                "force":        120,
		"damage":	90,
		"damage_type":	"����"
	]),
	([	"action":"    $N��ǰһ�ˣ�˫��ƽ��, ˫������, ��$n������ӭʱ, ��Ȼ�������ºϻ�, 
����������ɳ��֮����ʽ[33m���������֡�[0m, �ƾ�ֱ͸$n��$l\n",
		"dodge":	-20,
                "force":        130,
		"damage":	105,
		"damage_type":	"����"
	]),
	([	"action":"    $N��������Ʈ����˫�������, ���ڿ��з���[���]֮��, ����֮˼����
��, �ô�֮ʱ, ��ɳ�Ƶ���ʽ[33m����Ӱ������[0m ������, ���ƴ�����·��$n$lһ·ֱ��\n",
		"dodge":	-20,
                "force":        180,
		"damage":	115,
		"damage_type":	"����"
	]),
	([	"action":"    $N��������˫��ǰ�����, ����˫��, ��ɳ��֮�ڰ�ʽ[33m�����ư��硱[0mЮ��
ɽ��֮��, ��$nϮ���ȥ, $n��$l��ʱ���ƾ�������\n",
		"dodge":	-30,
                "force":        250,
		"damage":	130,
		"damage_type":	"����"
	]),
        ([      "action": "    [1;33m���ڵ�����ǿ�ֿ���$N���һ��, �������Ĵ�����, �Ʒ��Х, ������ӿ, ��ɳ��֮\n
\t\t\t\t��[1;31m��ʽ��һ[1;33m��\n
\t$N����һ�ź�ɫ��Ȧ, ��ͬһͷ����, ��ɽ��������!!![0m\n",
                "parry":          -60,
                "dodge":          -60,
                "force":          350,
                "damage":         150,
                "damage_type":   "����"
         ]),
});

int valid_learn(object me)
{
	object ob;

	if( (int)me->query("max_force") < 50 )
		return notify_fail("�������������û�а취����ɳ�Ʒ���\n");

	if( (string)me->query_skill_mapped("force")!= "fireforce")
		return notify_fail("��ɳ�Ʒ��������ʥ���ڹ�һ��������\n");

        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
        return notify_fail("����һ���Ʒ��ֲ��ǽ������ǵ���!!\n");

        if( me->query("family/master_name") != "˾ͽ��" && !me->query("study/ironhand",1)  )
        return notify_fail("û��˾ͽ�ٱ��˵Ľ̵�Ҫ��ô��??\n");

	return 1;
}

int valid_enable(string usage)
{
	return usage=="unarmed" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
int skill_level, limit;
        skill_level=(int)me->query_skill("ironhand", 1);
        limit= (int)(skill_level/9);
        if (limit < 1 )
                return action[random(1)];
        if (limit < 2 )
                return action[random(2)];
        if (limit < 3 )
                return action[random(3)];
        if (limit < 4 )
                return action[random(4)];
        if (limit < 5 )
                return action[random(4)+1];
        if (limit < 6 )
                return action[random(4)+2];
        if (limit < 8 )
                return action[random(4)+3];
        else if (limit < 10)
                return action[random(4)+4];
        else
                return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if( (int)me->query("kee") < 30
	||	(int)me->query("force") < 3 )
		return notify_fail("�����������������û�а취��ϰ��ɳ�Ʒ���\n");
	me->receive_damage("kee", 30);
	me->add("force", -3);
	write("�㰴��ʦ������, ����һ����ɳ�Ʒ���\n");
	return 1;
}


