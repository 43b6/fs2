// blade.c

inherit SKILL;

mapping *actions = ({
    ([  "action":       "$N��ǰһͱ��$wһǹͱ�˹�ȥ",
        "damage_type":  "ͱ��",
	]),
  ([  "action":       "$NѰ�ſ�϶��һ��������ǰ����$w����$n$l��ȥ",
		"damage_type":	"����",
	]),
    ([  "action":       "$N����$wһ�壬һǹ����$n$l",
        "damage_type":  "ͱ��",
	]),
    ([  "action":       "$N��׼$n$lһǹ���˹�ȥ",
        "damage_type":  "����",
	]),
    ([  "action":       "$N��ת����$w����ৡ���һ����$n$l��ȥ",
        "damage_type":  "����",
	]),
});

varargs mapping query_action()
{
   return actions[ random( sizeof( actions))];
}


