// ���ϸ��¥skill ֮ ����ذ��
//�ڶ�¥¥���������书
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		HIW"$N������ȹʹ��һʽ"HIG"������ĵ����"HIW"��ذ���ڿ������Ƴ��Ļ�������ĵ���Ļ���Խ��Խ�Ǳƽ�$n"NOR,
		"damage":	190,
                "force":        190,
                "damage_type" : "����"
	]),
	([	"action":		HIW"$Nһʽ"HIM"��ȵ���ž顯"HIW"������ѹ��ȴ��һ˲����������ܿ���$n�Ĺ����Ƶ�$n���һ���ⶥ����$n�ĺ����ѣ�ͬʱذ��Ҳ����$n$l"NOR,
		"damage":	190,
                "force":        190,
                "damage_type" : "����"	
	]),
	([	"action":		HIW"$N������ӯ�����ѣ�һʽ"HIB"���ѳ�ˮ�ɡ�"HIW"��$n���ܲ�ͣ������Ū$n�ڹ���֮�䣬���治�����$n�ؿڴ�ȥ"NOR,
		"damage":	190,
                "force":        190,
                "damage_type" : "����"	
	]),
	([	"action":		HIW"$N�ڲ�����ʹ��һʽ"HIM"����ӽ�ٺϡ�"HIW"���·�û���һֻ�����ڿ�����Ʈ������$n����Ŀѣ֮�ʣ����ϵ�$w"HIW"�Ѵܽ�$n����"NOR,
		"damage":	190,
                "force":        190,
                "damage_type" : "����"		
	]),
        ([      "action":              HIW"$Nͻ��������������ʹ����"HIY"�����Ǿޱ��"HIW"��ذ���ڿ�����������Ӱ������������˷����ҵ�ͻ��$n"NOR,
		"damage":	190,
                "force":        190,
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

