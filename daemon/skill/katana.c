//katana:̫��....�����õ�����          made by eva

inherit SKILL;

mapping *actions = ({
    ([ "action":        "$N�����·�����$w��$n$lնȥ",
		"damage_type":	"����",
	]),
    ([  "action":       "$N���һӶ�$w��$n$l��ȥ",
		"damage_type":	"����",
	]),
    ([  "action":       "$N����������$n$l��ȥ",
		"damage_type":	"����",
	]),
	([	"action":		"$N�Ӷ�����$w������$n$l",
		"damage_type":	"����",
	]),
});

varargs mapping query_action()
{
   return actions[ random( sizeof( actions))];
}

string perform_action_file( string func)
{
   return PERFORM_D("katana/") + func;
}

