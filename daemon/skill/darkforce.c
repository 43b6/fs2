#include <ansi.h>
inherit SKILL;
inherit SSERVER;

void force_damage(object me, object victim, object weapon, int damage);

int valid_enable(string usage) { return usage=="force"; }


mapping *force_action = ({
([      "post_action": (: force_damage :) ])
});

int practice_skill(object me)
{
        return notify_fail("��B������ֻ�ܴ�����(exert)�����������ȡ�\n");
}
string perform_action_file(string action)
{
        return CLASS_D("killer")+"/ninja-force/"+action;
}
int valid_learn(object me)
{
tell_object(me,"��B�������޷���ѧϰ�л�ý�չ, �����Լ����з��гɹ�!!\n");
return 0;
}