// blade.c

inherit SKILL;

mapping *actions = ({
    ([  "action":		"$N����һ����$w��$n$l���˹�ȥ",
        "damage_type":  "����",
	]),
    ([  "action":		"$NѰ�ſ�϶��һ��������ǰ����$w����$n$l����",
		"damage_type":	"����",
	]),
    ([  "action":       "$N����$wһ�һ��ն��$n$l",
		"damage_type":	"����",
	]),
    ([  "action":       "$N��׼$n$lһ�����˹�ȥ",
        "damage_type":  "����",
	]),
    ([  "action":       "$N�������$w����ৡ���һ����$n$l��ȥ",
        "damage_type":  "����",
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
