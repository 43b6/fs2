// gforce.c
//by airke

#include <ansi.h>
inherit SKILL;
inherit SSERVER;

int valid_enable(string usage) { return usage=="force"; }


int valid_learn(object me)
{
	return 1;
}

int practice_skill(object me)
{
	return notify_fail("���Ǻ�ֻ����ѧ(learn)�ģ����Ǵ��˹�(exert)�����������ȡ�\n");
}

string perform_action_file(string action)
{
return CLASS_D("taoist")+"/gforce/"+action;
}

string exert_function_file(string func)
{
	return CLASS_D("taoist") +"/gforce/" + func;
}

void skill_improved(object me)
{
//	int s;

//	s = me->query_skill("gforce", 1);
//	if( s%10==9 && (int)me->query("con") < s/4) {
//		tell_object(me, HIW "��������ڹ������гɣ���ĸ��Ǹ����ˡ�\n" NOR);
//		me->add("con",3);
//		tell_object(me , HIY "����һ��Ŭ�������������ǿ��" NOR );
//		me->add("max_force",25);
//	} 
//}


}
