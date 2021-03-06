// blade.c

inherit SKILL;

mapping *actions = ({
    ([  "action":		"$N手腕一翻，$w往$n$l砍了过去",
        "damage_type":  "斲伤",
	]),
    ([  "action":		"$N寻着空隙，一个箭步上前手中$w便往$n$l砍落",
		"damage_type":	"刺伤",
	]),
    ([  "action":       "$N手中$w一扬，一刀斩向$n$l",
		"damage_type":	"斲伤",
	]),
    ([  "action":       "$N对准$n$l一刀挥了过去",
        "damage_type":  "割伤",
	]),
    ([  "action":       "$N横过手中$w，「唰”地一声往$n$l削去",
        "damage_type":  "割伤",
	]),
});

varargs mapping query_action()
{
   return actions[ random( sizeof( actions))];
}


string perform_action_file( string func)
{
return PERFORM_D("blade/") + func;
}
