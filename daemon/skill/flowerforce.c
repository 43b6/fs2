// follow-force by chan
#include <ansi.h>
inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int practice_skill(object me)
{
        return notify_fail("�����ľ�ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}

string exert_function_file(string func)
{
        return CLASS_D("beggar") + "/followforce/" + func;
}
