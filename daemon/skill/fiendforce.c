//�����ķ�

#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }
  
int practice_skill(object me)
{
        return notify_fail("�����ķ�ֻ�ܴ�����(exert)�����������ȡ�\n");
}

void skill_improved(object me)

{
        int s;

        tell_object(me, HIW "��ͷ��ð��һ��"HIM"��ɫ"HIW"��ڤ������,��������ķ��ָ���һ����!! \n"NOR);
}
string exert_function_file(string act)
{

  return CLASS_D("common/") + act;
}

string perform_action_file( string func)
{
   return PERFORM_D("fiendforce/") + func;
}



