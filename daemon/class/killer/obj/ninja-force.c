#include <ansi.h>
inherit SKILL;
inherit SSERVER;

void force_damage(object me, object victim, object weapon, int damage);

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) 
{ 
        return 1; 
}

mapping *force_action = ({
([      "post_action": (: force_damage :) ])
});

int practice_skill(object me)
{
        return notify_fail("�����ķ�ֻ�ܴ�����(exert)�����������ȡ�\n");
}
string perform_action_file(string action)
{
        return CLASS_D("killer")+"/ninja-force/"+action;
}
