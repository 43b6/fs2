// ���ϸ��¥skill ֮ �̹ſ��쵶��
//��һ¥¥����ǧ���书
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		"$N�յ����������ƴ��������������ᣬ����$n���뵶���˲��$Nһʽ"HIR"���������ա�"NOR"���ĵ������ҵ���$n��ɨ��ȥ",
		"damage":	600,
                "force":        600,
                "damage_type" : "����"
	]),
	([	"action":		"$N˫��$w�������ڲ����������Ը��Ƶͣ�һʽ"HIY"��������¡�"NOR"�����˿����������绡�»���ֱֱ��$n����",
		"damage":	600,
                "force":        600,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�������ʹ��һʽ"HIC"������Ю�"NOR"��$n׷ȥ���������쵶�������Ｑ׷$n",
		"damage":	600,
                "force":        600,
                "damage_type" : "����"	
	]),
	([	"action":		"$N�����ɵ���һʽ"HIW"�������ƹȡ�"NOR"����$w�ѻ�����$n������Ѹ��һ˲���˵���λ��ȴ��գ�ۼ䵶�ѻ���",
		"damage":	600,
                "force":        600,
                "damage_type" : "����"		
	]),
        ([      "action":              "$N����һʽ"HIC"���̹ſ��쵶����"NOR"�е�"HIC"������������"NOR"��Ѹ�ٵ���ǰ�ӵ���ȥ�����ҵ�������$n�𸡷ɿգ�˲�䷴��ٿ�ϣ�����ֱͻ����",
		"damage":	600,
                "force":        600,
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

