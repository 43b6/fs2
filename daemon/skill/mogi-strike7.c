// mogi npc skill ֮ ���⽣��
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		"$N����$w����һ��ʹ��һʽ"HIW"�����׶�����"NOR"��$w���ƿ������������⣬���Ƶ���֮����$n����˺����ȥ",
		"dodge":        -40,
		"damage":	250,
                "force":        250,
		"parry":	-30,
                "damage_type" : "����"
	]),
	([	"action":		"$Nһʽ"HIW"������˫�ɡ�"NOR"������˲���������䣬��Ӱ��ɢ���������ԣ������Ľ�Ӱֱ��$n",
		"dodge":	-30,
		"damage":	250,
                "force":        250,
		"parry":	-20,
                "damage_type" : "����"	
	]),
	([	"action":		"$N��Ϣ˲�仯��Ϊ�գ�ʹ�����⽣���е�"HIW"������ʮ̾��"NOR"����ѹһ����Ю�������֮��ֱ��$n",
		"dodge":	-40,
		"damage":	250,
                "force":        250,
		"parry":	-30,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�ڲ���Ծֱ��$n�����Ϸ������⽣���е�һʽ"HIW"����ˮ�ٶϡ�"NOR"�Ľ���������$n����·��ֱָ��$n�����Ŵ�ȥ",
		"dodge":	-30,
		"damage":	250,
                "force":        250,
		"parry":	-20,
                "damage_type" : "����"		
	]),
        ([      "action":              "$N����ΪԲ����ԲΪ�磬һʽ"HIW"��Ҷ��ǧ�衯"NOR"�Ƴ������������������������$n�ۼ�����������",
                "dodge":        -25,
                "damage":       250,
                "force":        250,
                "parry":        -10,
                "damage_type" : "����"             
        ]),
});



int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

