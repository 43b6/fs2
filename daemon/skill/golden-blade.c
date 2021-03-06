//金风细雨楼skill 之 金诀刀法
//这是金风细雨楼一般护卫的skill
#include <combat.h>
#include <ansi.h>
inherit SKILL;
mapping *action = ({
	([	"action":		"$N指划刀尖，瞬间金光刺目，一式‘金尖飞闪’直指向天划出月弧弯皓，横扫$n$l"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "砍伤"
	]),
	([	"action":		"$N使出了一式「‘金鳞红夏’，刀刃一侧向前突进横扫，瞬间回刀欺身下转，连砍$n下盘"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "割折"	
	]),
	([	"action":		"$N侧刀成臂飞天回身狂旋，刀光缠环，一式‘金羽游空’绕转连环刀气，$n大意突入，反遭刀气撕裂卷杀"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "割伤"	
	]),
	([	"action":		"$N飞身闪避，$n立即高跃追来，$N瞬间回转使出一式‘金翼双返’，以刀鞘化解$n的力求道，刀尖直指$n脑门"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "割折"		
	]),
        ([      "action":              "$N力聚双手气传刀锋，纵落长弧使出一式‘金弓雁落’，刀气若弯弓直向$n追去"NOR,
		"damage":	90,
                "force":        90,
                "damage_type" : "砍伤"             
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

