//���ϸ��¥skill ֮ ϸ��ذ��
//���ǽ��ϸ��¥һ�㻤��֮skill
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		"$Nһʽ��ϸ����ȸ������������ȸ���裬˲�����䷴�����У����Լ�����ٶȻط���$nͻ��"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"
	]),
	([	"action":		"$N������ѹ�ü�����ǰ����̤��ʹ���ˡ�ϸ����Ȫ����ֱ��$n����ߵ��ͻ��"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�Ӳ�����ʹ��һʽ��ϸӣ���֡���$w�����ӣ�깴���ſ�����$n�����д�"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"	
	]),
	([	"action":		"$N���������Ʈ������Ȼʹ��һʽ��ϸ��Ʈ�衯��������ҵ�����Ʈ����˲���Լ�����ٶ���$n��ȥ"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"		
	]),
        ([      "action":              "$Nʹ��һʽ��ϸ�����ܡ�������$n$lɨ���ĵ��������ٽ���������ͬһʱ���ֳ�$n�Ժ��ĸ��Ĵ�ͻ��"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"             
        ]),
});



int valid_enable(string usage)
{
        return usage=="dagger" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

