//siseforce by Dico
//ϴ�辭

#include <ansi.h>
inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

string exert_function_file(string func)
{
	return CLASS_D("beggar")+"/siseforce/"+func;
}

void skill_improved(object me)
{
	int s;
	tell_object(me,HIW"�����ɫ�����졢�����ϴ�辭����Ϊ����һ���ˡ�\n" NOR);
        s = me->query_skill("siseforce", 1);
        if( s%10==9 && random(s)>(int)me->query("max_force")/30) {
                tell_object(me, HIW "һ��ϴ���ھ��ӵ��﷢��ɢ��ȫ��ʹ����ڹ���Ϊ����ˡ�\n" NOR);
                me->add("max_force", random((int)s/30)+1);
        }
}

string perform_action_file(string action)
{
	return CLASS_D("beggar")+"/siseforce/"+action;
}