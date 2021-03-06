// badforce.c by ice
// modify by oda

#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{
	if( (int)me->query("bellicosity") < 10 )
		return notify_fail("你的杀气不够，无法领悟恶化魔功。\n");
	return 1;
}

int practice_skill(object me)
{
	return notify_fail("恶化魔功只能用学的，或是从运用(exert)中增加熟练度。\n");
}

string exert_function_file(string func)
{
	return CLASS_D("bandit") + "/badforce/" + func;
}

void skill_improved(object me)
{
	int s;

	tell_object(me, HIW "一股邪气自你头上冒出，你的恶化魔功更加恶毒了!! \n" NOR);
	s = me->query_skill("badforce", 1);
	if( s%10==9 && random(s)>(int)me->query("max_force")/30) {
		tell_object(me, HIW "有鉴于你行恶有功，你体内的邪恶力量被激发出来了。\n" NOR);
		me->add("max_force", random((int)s/30)+1);
	}
}
