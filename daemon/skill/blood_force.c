// blood_force.c
// Swy QC 98/6/1
inherit SKILL;
inherit SSERVER;


int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }


int practice_skill(object me)
{
             return notify_fail("Ѫħ�ķ�ֻ����ѧ�ģ����Ǵ�(exert)�л�������ȡ�\n");
}


string exert_function_file(string func)
{
   return CLASS_D("swordsman")+"/blood_force/"+func;
}
