// blade.c

inherit SKILL;

mapping *actions = ({
    ([  "action":       "$N往前一捅，$w一枪捅了过去",
        "damage_type":  "捅伤",
	]),
  ([  "action":       "$N寻着空隙，一个箭步上前手中$w便往$n$l刺去",
		"damage_type":	"刺伤",
	]),
    ([  "action":       "$N手中$w一插，一枪刺向$n$l",
        "damage_type":  "捅伤",
	]),
    ([  "action":       "$N对准$n$l一枪挥了过去",
        "damage_type":  "割伤",
	]),
    ([  "action":       "$N反转手中$w，「唰”地一声往$n$l捶去",
        "damage_type":  "瘀伤",
	]),
});

varargs mapping query_action()
{
   return actions[ random( sizeof( actions))];
}


