// force.c

#include <ansi.h>

inherit SKILL;

string exert_function_file(string func)
{
//这里是fighter 的特攻, 请lys 看一下//	
// 这里干嘛写这样?? exert.c 里已经有设定了啊?? 应该是可以消掉这几行..Onion(96/5/9)
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
		tell_object( me, HIW "由于你的内功修炼有成，你的体质改善了。\n" NOR );
		me->add( "con", 2 );
        if(me->query("con") > 35)
          me->set("con",35);
	}
}

int practice_skill(object me)
{
	notify_fail("
内功心法只能用学的，或是从运用(exert)中增加熟练度。\n");
	return 0;
}

