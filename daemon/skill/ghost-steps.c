// ghost-steps.c by oda

inherit SKILL;
#include <ansi.h>

string *dodge_msg=({
    "$n身子一软，全身向后摊去，巧妙的躲过了$N的攻击，正是幽冥身法中的"HIY"「气游无定”"NOR"。\n",
    "$n使出幽冥身法中的"HIB"「虚幻无形”"NOR"，只见他身形一晃，$N击中的只是残像。\n",
    "只见$n身形一起，使出幽冥身法的绝技"HIM"「飘渺无踪”"NOR"，无声无息的飘到$N身后。\n",
    "只瞧$n的脚步急转，身形一晃，使出的正是幽冥身法中的"HIG"「鬼影无从”"NOR"，整个人像空气一般消失无踪。\n",
    "$n的身子忽然一扭，整个人像鬼魂一般随着$N的攻击四处闪躲，用的正是幽冥身法中的"HIC"「魂随无常”"NOR"。\n",
    "只见到$n脚步一垫，忽然出现好多个$n将$N团团包围，正是幽冥身法中的"HIY"「残化无寻”"NOR"，$N的攻击处处落空。\n",
    "$n忽然将身形放慢，脚步随风而动，身子随心而转，使出的正是幽冥身法的奥义绝招"HIB"「幽冥无神”"NOR"，游刃有余的将$N的攻击一一躲过。\n",
	});

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int valid_enable(string  usage)
{
	return (usage=="dodge"||usage=="move");
}

int practice_skill(object me)
{
	if( (int)me->query("sen") < 30 )
		return notify_fail("你的神不够，不能练幽冥身法。\n");
	me->receive_damage("sen", 30);
	return 1;
}
