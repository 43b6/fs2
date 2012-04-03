// sea-force.c

inherit SKILL;
void force_damage(object me, object victim, object weapon, int damage);

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) 
{ 
	if(me->query_skill("sunforce",1) > me->query("max_force"))
	  return notify_fail("����������ֵ����, ����������ѧһ���ķ���\n");
	return 1; 
}
mapping *force_action = ({
([      "post_action": (: force_damage :) ])
});
int practice_skill(object me)
{
return notify_fail("һ���ķ�ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}

string exert_function_file(string func)
{
	return CLASS_D("scholar") + "/sunforce/" + func;
}
string perform_action_file(string action)
{
  return CLASS_D("scholar")+"/sunforce/"+action;
}
void force_damage(object me, object victim, object weapon, int damage)
{
	int amount;
        int damage_num;
	int enable_six=0;

	if( me->query_skill_mapped("unarmed")=="six-fingers"
            || me->query_skill_mapped("stabber")=="six-fingers")
	{
	 amount=me->query_skill("sunforce",1)+me->query_skill("six-fingers",1);
	 enable_six=1;
	}
	else
	 amount=(int)me->query_skill("sunforce",1);
	damage_num=random(amount/10);

        if( amount > random(2) && me->query_temp("sunforce_func")!=1 
           && me->query("force")>damage_num*5 && me->query("force_factor")==10)
        {
         if(enable_six==1)
          message_vision("[1;36m$N�������񽣡��������ڡ�һ���ķ����Ĵ߶�֮��, ���ԵĽ����ݺ�, ������ʢ��[0m\n",me);
	 else
	  message_vision("[1;36m$N���ڡ�һ���ķ�������Ѹ����ת, ˿˿������$Nͷ��ð��, ���������ƺ�����һ�㡣[0m\n",me);

	 me->set_temp("sunforce_func",1);
	 me->add_temp("apply/damage",damage_num);
	 me->add("force",-(damage_num*5));
         me->start_call_out( (: call_other, __FILE__, "remove_damage",
         me, damage_num, enable_six :), 10);
        }
}
void remove_damage(object me, int damage_num, int enable_six)
{
        if(enable_six==1)
         message_vision("[36m$N������΢һ��, �������񽣡����������Լ����ˡ�[0m\n",me);
        else
         message_vision("[36m$N������΢һ��, ���������Լ���[0m\n");
        me->add_temp("apply/damage",-damage_num);
	me->delete_temp("sunforce_func");
}

