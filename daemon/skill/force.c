// force.c

#include <ansi.h>

inherit SKILL;

string exert_function_file(string func)
{
//������fighter ���ع�, ��lys ��һ��//	
// �������д����?? exert.c ���Ѿ����趨�˰�?? Ӧ���ǿ��������⼸��..Onion(96/5/9)
        if((string)this_player()->query("class") == "fighter") {
	   if(func == "enforceup")
	      return CLASS_D("fighter") + "/snowforce/" + func;
           return "/daemon/exert/" + func;
	}

	return "/daemon/exert/" + func;
}

void skill_improved( object me )
{
	int s;

    if(me->is_ghost()) return ;
	s = me->query_skill( "force", 1 );
    if( s > 60 && s%10==9 && (int)me->query("con") < 34 ) {
		tell_object( me, HIW "��������ڹ������гɣ�������ʸ����ˡ�\n" NOR );
		me->add( "con", 2 );
        if(me->query("con") > 35)
          me->set("con",35);
	}
}

int practice_skill(object me)
{
	notify_fail("
�ڹ��ķ�ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
	return 0;
}

