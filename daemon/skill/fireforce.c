//魔界解quest 学的 skill
//焚天魔王极火功

//by roger

#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{      
      if(me->query("quest/gold-fire")!=1)  return notify_fail("学极火功要配合极火金身心法。\n");
      else return 1;
}

int practice_skill(object me)
{
	return notify_fail("极火功只能从运用(exert)中增加熟练度。\n");
}

void skill_improved(object me)
{	
	tell_object(me, "一股火劲自你头上窜出，你的极火功更加熟练了!! \n");
	
}
string exert_function_file(string act)
{

  return PERFORM_D("fireforce/") + act;
}

string perform_action_file( string func)
{
   return PERFORM_D("fireforce/") + func;
}


