// mogi npc skill ֮ Ѩɱ���
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void throw_weapon(object,object,object,int);
mapping *action = ({
	([	"action":		"$N��Բ���ٵ��ƶ�ʹ����һʽ"HIR"�����衯"NOR"������$w�������ʱ�����޿�϶�ط���$n��ü��",
		"dodge":        -40,
		"damage":	250,
                "force":        250,
		"parry":	-30,
		"post_action":  (: throw_weapon :),
	]),
	([	"action":		"$NһʽѨɱ����е�"HIR"����Ӱ��"NOR"��������������$w������Ӱ���ǣ���������ؼ�",
		"dodge":	-30,
		"damage":	250,
                "force":        250,
		"parry":	-20,
		"post_action":	(: throw_weapon :),
	]),
	([	"action":		"$N�������һ����ʱ������$n����������$nר��Ӧս֮�ʣ�$N˲�����һԾ��$w�籩������ֱ����$n����ʽ����Ѩɱ����е�"HIR"�������"NOR,
		"dodge":	-40,
		"damage":	250,
                "force":        250,
		"parry":	-30,
		"post_action":	(: throw_weapon :),
	]),
	([	"action":		"$N̤�����ʹ����Ѩɱ����е�һʽ"HIR"����ޡ�"NOR"��ɲ�Ǽ��Ӱ������$w���ƿ����������𱼴�$n���ظ�ҪѨ",
		"dodge":	-30,
		"damage":	250,
                "force":        250,
		"parry":	-20,
		"post_action":	(: throw_weapon :),
	]),
        ([      "action":              "$NѸ�ײ����ڶ��ؽ������$w��$n���ʺ�ֱ����$n���ٻ���һ����ȴ��֪Ӱ���ﾹ������һö$wֱָ$n����",
                "dodge":        -25,
                "damage":       250,
                "force":        250,
                "parry":        -10,
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
