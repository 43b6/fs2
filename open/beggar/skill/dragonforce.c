// dragonforce by chan
#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int practice_skill(object me)
{
        return notify_fail("�����ķ�ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}

string exert_function_file(string func)
{
        return CLASS_D("beggar") + "/dragonforce/" + func;
}

void skill_improved(object me)
{
        int s;
        tell_object(me, HIW "�����ɫ�����졢����ཱུ���ķ�����Ϊ����һ���ˡ�\n" NOR);
        s = me->query_skill("badforce", 1);
        if( s%10==9 && random(s)>(int)me->query("max_force")/30) {
                tell_object(me, HIW "һ�ɽ����ھ��ӵ��﷢��ɢ��ȫ��ʹ����ڹ���Ϊ����ˡ�\n" NOR);
                me->add("max_force", random((int)s/30)+1);
        }
}
