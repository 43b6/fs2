// mogi npc skill 之 银封剑法
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		"$N手中$w银光一闪使出一式"HIW"‘阳炎独炼’"NOR"，$w划破空气泛出阵阵火光，犹似地狱之火向$n折曲撕旋而去",
		"dodge":        -40,
		"damage":	250,
                "force":        250,
		"parry":	-30,
                "damage_type" : "刺伤"
	]),
	([	"action":		"$N一式"HIW"‘疾步双飞’"NOR"，身形瞬如旋风乱落，残影离散，银光粼粼，无数的剑影直刺$n",
		"dodge":	-30,
		"damage":	250,
                "force":        250,
		"parry":	-20,
                "damage_type" : "刺伤"	
	]),
	([	"action":		"$N气息瞬变化柔为刚，使出银封剑法中的"HIW"‘碎岩十叹’"NOR"，剑压一沉，挟天崩地裂之势直迫$n",
		"dodge":	-40,
		"damage":	250,
                "force":        250,
		"parry":	-30,
                "damage_type" : "刺伤"	
	]),
	([	"action":		"$N踮步飞跃直落$n的正上方，银封剑法中的一式"HIW"‘侵水百断’"NOR"的剑气封死了$n的生路，直指向$n的脑门刺去",
		"dodge":	-30,
		"damage":	250,
                "force":        250,
		"parry":	-20,
                "damage_type" : "割伤"		
	]),
        ([      "action":              "$N划剑为圆，以圆为界，一式"HIW"‘叶华千舞’"NOR"逼出了连锁剑气，结界无限扩大，$n眼见已无所遁逃",
                "dodge":        -25,
                "damage":       250,
                "force":        250,
                "parry":        -10,
                "damage_type" : "割伤"             
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

