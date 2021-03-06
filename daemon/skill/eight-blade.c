// eight-blade.c

inherit SKILL;

mapping *action = ({
	([	"action":		"$N使出井中八法之「不攻”$w猛抖，脚踏奇步，$w登时涌起凛冽刀气，遥罩$n，似攻非攻，似守非守。",
		"damage":		200,
		"dodge":		70,
		"damage_type":	"割伤"
	]),
	([	"action":		"$N使出井中八法之「击奇”，只见满场$w刀光劲气蓦然收敛，$N身随刀走，刀劲化作长虹，直朝$n射去。",
		"damage":		250,
		"damage_type":	"割伤"
	]),
	([	"action":		"$N使出井中八法之「用谋”，$N将己身处于地利之中，将万千刀影化成无形刀阵自顾己身，并将$n困于刀阵之中",
		"damage":		300,
		"damage_type":	"割伤"
	]),
	([	"action":		"$N使出井中八法之「兵诈”，只见满场$w刀光劲气，$w刀影虚则实之，实则虚之，将$n笼罩在刀影之中。",
		"damage":		350,
		"damage_type":	"斲伤"
	]),
     ([  "action":       "$N使出井中八法之「棋奕”，将积聚至顶峰的气劲，从$w刀锋山洪暴发般泄出，形成一波又一波的气劲，如裂岸的惊涛般铺天盖\地往$n涌去。",
		"damage":		400,
		"damage_type":	"斲伤"
	]),
	([	"action":		"$N使出井中八法之「战定”，令$n看得目瞪口呆的连续百多刀，每一刀均从不同角度往$n攻去，刀刀妙至毫颠，似有意若无意，既态趣横生，又是凶险至极点",
		"damage":		450,
		"damage_type":	"斲伤"
	]),
     ([  "action":       "$N使出井中八法之「速战”，$w刀芒暴张，运刀疾刺，时间角度拿捏得精准无匹，刀锋仿似贯注全身功力感情，充满一去无还的惨烈气势。",
		"damage":		500,
		"damage_type":	"斲伤"
	]),
        ([	"action":		"$N使出井中八法之「方圆”，气墙为方，刀劲为圆，竟是隔三丈的距离，一柱圆浑的刀气，从刀尖以螺旋的奇异方式江河暴涨地狂涌而出，往$n攻去。",
		"damage":		550,
		"damage_type":	"斲伤"
	]),
});

int valid_learn(object me)
{
	return 1;
}

int valid_enable(string usage)
{
	return (usage=="blade") || (usage=="parry");
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	object weapon;

	if( !objectp(weapon = me->query_temp("weapon"))
	||	(string)weapon->query("skill_type") != "blade" )
		return notify_fail("你必须先找一把刀，才能练刀法。\n");

	if( (int)me->query("kee") < 40 )
		return notify_fail("你的体力不够练这门刀法，还是先休息休息吧。\n");
	me->receive_damage("kee", 40);
	return 1;
}
