// 金风细雨楼skill 之 今音匕法
//第二楼楼主花忆妍武功
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		HIW"$N回袖舞裙使出一式"HIG"‘春吟牡丹’"HIW"，匕尖在空气中纹出的华光犹如牡丹的花瓣越舞越是逼近$n"NOR,
		"damage":	190,
                "force":        190,
                "damage_type" : "刺伤"
	]),
	([	"action":		HIW"$N一式"HIM"‘鹊鸣杜鹃’"HIW"欺身下压，却在一瞬间仰滑而扬避开了$n的攻势绕到$n身后，一个肘顶打向$n的后心窝，同时匕尖也刺向$n$l"NOR,
		"damage":	190,
                "force":        190,
                "damage_type" : "刺伤"	
	]),
	([	"action":		HIW"$N轻点落地盈巧若蜓，一式"HIB"‘蜓唱水仙’"HIW"在$n身周不停回绕玩弄$n在股掌之间，出奇不意的往$n胸口刺去"NOR,
		"damage":	190,
                "force":        190,
                "damage_type" : "刺伤"	
	]),
	([	"action":		HIW"$N踮步飞绕使出一式"HIM"‘蝶咏百合’"HIW"，仿佛幻化成一只蝴蝶在空气中飘旋，在$n神晕目眩之际，手上的$w"HIW"已窜进$n怀里"NOR,
		"damage":	190,
                "force":        190,
                "damage_type" : "刺伤"		
	]),
        ([      "action":              HIW"$N突若乱雨走若奔尘使出了"HIY"‘蜂歌蔷薇’"HIW"，匕尖在空气里闪出残影幢幢，从四面八方激烈的突向$n"NOR,
		"damage":	190,
                "force":        190,
                "damage_type" : "刺伤"             
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

