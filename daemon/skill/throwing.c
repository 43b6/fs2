// dagger.c

inherit SKILL;

mapping *actions = ({
	([	"action":		"$N��������$w��Ȼ��$n$l��ȥ",
		"damage_type":	"����",
	]),
	([	"action":		"$N�Ӷ�$w����$n$l���˹�ȥ",
		"damage_type":	"����",
	]),
	([	"action":		"$N��������$w����׼$n$l���˹�ȥ",
		"damage_type":	"����",
	]),
	([	"action":		"$N�Ӷ�����$w������$n$l",
		"damage_type":	"����",
	]),
});

varargs mapping query_action()
{
   return actions[ random( sizeof(actions))];
}


