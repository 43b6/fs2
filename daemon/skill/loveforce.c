#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{
      if(me->query("mark/love")!=1)  return notify_fail("��������ʽ�辭����ָ�㡣\n");
      else return 1;
}

int practice_skill(object me)
{
        return notify_fail("������ʽֻ�ܴ�����(exert)�����������ȡ�\n");
}
void skill_improved(object me)
{
        tell_object(me,HIW"һ������������ȫ�����������ʽ����������!! \n"NOR);

}
string exert_function_file(string act)
{
 return CLASS_D("poisoner") +"/loveforce/"+act; 
}

string perform_action_file( string func)
{
   return CLASS_D("poisoner") + "/loveforce/"+func;
}

