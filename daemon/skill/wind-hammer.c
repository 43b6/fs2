//���ϸ��¥skill ֮ �������
//���ǽ��ϸ��¥һ�㻤����skill
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		"$N����$wʹ��һʽ�����ȲԸڡ��������׷��¡����ѹ�Ƶ�$n�������ã�$wֱֱ��$n$l��ȥ"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"
	]),
	([	"action":		"$N��������һ����һʽ�������뵡�������ʯ��������ѹ�����ߴܴ�����˷�����$n"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�Ӵ���˫��ֱ��$n���ʹ����һʽ��������̡����������û���Ϊ�������$n���ϸ�ҪѨ"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�ɲ�Ƿ��ʹܣ�һʽ����ҧ���������ɰ�ﳾ���Ʒ�����������ѣ�Ю���֮�ƻ���$n"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"		
	]),
        ([      "action":              "$Nһʽ����ɨ���ɡ�����$w�ٴμ������Х���·���������绢����ֱ׷$n������Ҫ��"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "����"             
        ]),
});



int valid_enable(string usage)
{
        return usage=="hammer" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

