// axe.c

inherit SKILL;

mapping *actions = ({
    ([  "action":       "$N��ǰһ����$w���˹�ȥ",
        "damage_type":  "����",
	]),
([  "action":       "$NѰ�ſ�϶��һ��������ǰ����$w����$n$l��ȥ",
        "damage_type":  "����",
	]),
    ([  "action":       "$N����$wһת������$n$l",
        "damage_type":  "����",
	]),
    ([  "action":       "$N��׼$n$l���˹�ȥ",
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


