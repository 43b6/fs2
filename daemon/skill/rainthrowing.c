//���ϸ��¥skill֮������� by roger&&taifar
//���ǽ��ϸ��¥һ�㻤��֮skill
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void throw_weapon(object,object,object,int);
mapping *action = ({
	([	"action":		"$Nһʽ����쪺�ɽ��������$w���������˲��ָ���ҵ���$n�����£�$w���������䴩��$n����",
		"damage":	90,
                "force":        90,
		"post_action":  (: throw_weapon :),
	]),
	([	"action":		"$Nʮָ�ֵ�ʹ��һʽ����ָƽ�ء���ʮֻ$w����������кͽǶȽ����ݺᣬ��һ�������������$n",
		"damage":	90,
                "force":        90,
		"post_action":	(: throw_weapon :),
	]),
	([	"action":		"$N̤¥���乪��Ʈɢ��ʹ��һʽ��������������$w������������ܣ��ӳ������ϵķ�������$n"NOR,
		"damage":	90,
                "force":        90,
		"post_action":	(: throw_weapon :),
	]),
	([	"action":		"$Nʹ��һʽ����˷б�硯ֱ�����������Σ�ȴ��$w���ֵ�˲��бԾ�����ֳ�$n���ظ���ȥ",
		"damage":	90,
                "force":        90,
		"post_action":	(: throw_weapon :),
	]),
        ([      "action":              "$N������ʹ��һʽ����α���䡯�������۵е�˲�������ڲ����գ�����һ����$wѸ�ײ����ڶ�������$n",
		"damage":	90,
                "force":        90,
                "post_action":  (: throw_weapon :),
        ]),
});



int valid_enable(string usage)
{
        return usage=="throwing" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}
void throw_weapon(object me, object victim, object weapon, int damage)
{
        if( objectp(weapon) ) {
                if( (int)weapon->query_amount()==1 ) {
                        weapon->unequip();
             tell_object(me, "\n���" + weapon->query("name") + "�����ˣ�\n\n");
                }
                weapon->add_amount(-1);
        }
}
