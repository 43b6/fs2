// sword.c

inherit SKILL;

mapping *actions = ({
	([	"action":		"$N�����е�$w��$n$lնȥ",
		"damage_type":	"����",
	]),
	([	"action":		"$N�Ӷ�$w����$n$l��ȥ",
		"damage_type":	"����",
	]),
	([	"action":		"$N������$w��׼$n$lһ����ȥ",
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
   return PERFORM_D("sword/") + func;
}

