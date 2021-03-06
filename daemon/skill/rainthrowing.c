//金风细雨楼skill之雨诀暗器 by roger&&taifar
//这是金风细雨楼一般护卫之skill
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void throw_weapon(object,object,object,int);
mapping *action = ({
	([	"action":		"$N一式‘雨飒和山’，手里$w漫天挥撒，瞬以指气乱点制$n于招下，$w若暴雨骤落穿刺$n各处",
		"damage":	90,
                "force":        90,
		"post_action":  (: throw_weapon :),
	]),
	([	"action":		"$N十指轮弹使出一式‘雨指平截’，十只$w以巧妙的排列和角度交错纵横，如一面流网穿梭飞向$n",
		"damage":	90,
                "force":        90,
		"post_action":	(: throw_weapon :),
	]),
	([	"action":		"$N踏楼回落躬身飘散，使出一式‘雨征横曲’，$w如诡蛇旋绕曲窜，从出乎意料的方向射向$n"NOR,
		"damage":	90,
                "force":        90,
		"post_action":	(: throw_weapon :),
	]),
	([	"action":		"$N使出一式‘雨朔斜虹’直射上中下三段，却在$w出手的瞬间斜跃弧飞又朝$n颜胸腹射去",
		"damage":	90,
                "force":        90,
		"post_action":	(: throw_weapon :),
	]),
        ([      "action":              "$N屈身步尘使出一式‘雨伪回殇’，以掌欺敌的瞬间立刻踮步悬空，反手一掷，$w迅雷不及掩耳地射向$n",
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
             tell_object(me, "\n你的" + weapon->query("name") + "用完了！\n\n");
                }
                weapon->add_amount(-1);
        }
}
