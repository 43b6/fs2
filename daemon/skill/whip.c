// whip.c

inherit SKILL;

mapping *actions = ({
    ([  "action":		"$N�Ӷ�$w����$n$l���˹�ȥ",
        "damage_type":  "����",
	]),
     ([  "action":		"$N�������е�$w����������һ����$n$l��ͷ����",
        "damage_type":  "����",
	]),
    ([  "action":       "$N��������$w����׼$w$l�ݺݵػӽ���ȥ",
        "damage_type":  "����",
	]),
    ([  "action":       "$N���١���һ������������$w��׼$n$l����һ��",
        "damage_type":  "����",
	]),
    ([  "action":      "$N��$wʹ�������ӣ�ƾ��һ��������$n$lɨ�˹�ȥ",
        "damage_type":  "����",
	]),
});

varargs mapping query_action()
{
   return actions[ random( sizeof( actions))];
}


