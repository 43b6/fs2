//���ϸ��¥skill ֮ �������
//���ǽ��ϸ��¥һ�㻤����skill
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		"$Nָ�����⣬˲�����Ŀ��һʽ����������ֱָ���컮���»���𩣬��ɨ$n$l"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"
	]),
	([	"action":		"$Nʹ����һʽ�������ۺ��ġ�������һ����ǰͻ����ɨ��˲��ص�������ת������$n����"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�൶�ɱ۷��������������������һʽ�������οա���ת����������$n����ͻ�룬���⵶��˺�Ѿ�ɱ"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�������ܣ�$n������Ծ׷����$N˲���תʹ��һʽ������˫�������Ե��ʻ���$n�������������ֱָ$n����"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"		
	]),
        ([      "action":              "$N����˫���������棬���䳤��ʹ��һʽ�������䡯���������乭ֱ��$n׷ȥ"NOR,
		"damage":	90,
                "force":        90,
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

