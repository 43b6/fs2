//ħ���quest ѧ�� skill
//����ħ������

//by roger

#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{      
      if(me->query("quest/gold-fire")!=1)  return notify_fail("ѧ����Ҫ��ϼ�������ķ���\n");
      else return 1;
}

int practice_skill(object me)
{
	return notify_fail("����ֻ�ܴ�����(exert)�����������ȡ�\n");
}

void skill_improved(object me)
{	
	tell_object(me, "һ�ɻ�����ͷ�ϴܳ�����ļ��𹦸���������!! \n");
	
}
string exert_function_file(string act)
{

  return PERFORM_D("fireforce/") + act;
}

string perform_action_file( string func)
{
   return PERFORM_D("fireforce/") + func;
}


