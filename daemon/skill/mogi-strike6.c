// mogi npc skill ֮ ���޵���
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		"$Nʹ��һʽ"HIY"������������"NOR"���������ε�ɱ���������䣬һ�е�������$n����ȥ",
		"dodge":        -40,
		"damage":	250,
                "force":        250,
		"parry":	-30,
                "damage_type" : "����"
	]),
	([	"action":		"$Nһ������ʹ����һʽ"HIY"����צ��ɽ��"NOR"���ڼ�������������ͬʱ��$N�ⲽǰԾ׷�ŵ�����ȥ����$n$l���ҿ�ɱ",
		"dodge":	-30,
		"damage":	250,
                "force":        250,
		"parry":	-20,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�����Ծ׷��$n��һʽ"HIY"�����ұ��֡�"NOR"����ǿ�ҵķ�ѹ��ֱ��$n׷ȥ",
		"dodge":	-40,
		"damage":	250,
                "force":        250,
		"parry":	-30,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�������������Ը�ѹ��֮��ʹ��һʽ"HIY"���������ܡ�"NOR"��ħ֮����֮�����������ֱ�ܽ�$n����",
		"dodge":	-30,
		"damage":	250,
                "force":        250,
		"parry":	-20,
                "damage_type" : "����"		
	]),
        ([      "action":              "$N�ų�����Ѫ����˫�ַ���$w��ȫ��֮��ʹ��һʽ"HIY"����Ϯ��β��"NOR"�����캳�ص�������Ȼ�Ƚ�$n",
                "dodge":        -25,
                "damage":       250,
                "force":        250,
                "parry":        -10,
                "damage_type" : "����"             
        ]),
});



int valid_enable(string usage)
{
        return usage=="blade" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

