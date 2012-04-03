#include <ansi.h>

int update_condition(object me, int duration)
{
	if( duration == 0 )
	{
		message_vision(HIY"\n$N���ϵĴӿ����³������СС�ĹǹƳ桫��\n\n"NOR,me);
		me->delete_temp("evil_no_damage");
		tell_object(me,HIW"��о�������ˡ�\n"NOR);
		return 0;
	}
	if( duration >= 3 )
	{
		if( !me->query_temp("evil_no_damage") )
		{
			me->set_temp("evil_no_damage",1);
			tell_object(me,HIW"\n����ͻȻһ����ʹ����ʳ�븹�Ĺǹ�Ӽ�ƺ���ʼ�������á�\n\n"NOR);
		}
		else
			tell_object(me,HIR"\n��ʹ���ϵĴ���ĸ���������ȫ���㲻�ϵ�ð���亹��\n\n"NOR);
		me->receive_damage("gin",200);
		me->receive_damage("kee",200);
		me->receive_damage("sen",200);
		COMBAT_D->report_status(me,1);
		me->apply_condition("evil_pill01", duration - 1);
  		return 1;
	}
	if( duration >= 1 )
	{
		tell_object(me,HIY"\n��ʹ�ƺ������˲��٣������ɫҲ�����غͻ��˵㡣\n\n"NOR);
		me->receive_damage("gin",100);
		me->receive_damage("kee",100);
		me->receive_damage("sen",100);
		COMBAT_D->report_status(me, 1);
		me->apply_condition("evil_pill01", duration - 1);
  		return 1;
	}
        if( duration < 1 ) 
        return 0;
return 1;
}
