// dreamforce.c

inherit SKILL;
inherit SSERVER;


int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }


int practice_skill(object me)
{
             return notify_fail("回梦心经只能用学的，或是从(exert)中获的熟练度。\n");
}


string exert_function_file(string func)
{
   return CLASS_D("dancer")+"/dreamforce/"+func;
}
        
