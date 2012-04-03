#include <ansi.h>

int update_condition(object me, int duration)
{
	if( duration == 0 )
	{
		message_vision(HIY"\n$N���ϵĴӿ����³������СС�Ķ�Ƴ桫��\n\n"NOR,me);
		me->delete_temp("evil_no_enemy");
		tell_object(me,HIW"��о����ɶ��ˡ�\n"NOR);
		return 0;
	}
	if( duration >= 3 )
	{
		if( !me->query_temp("evil_no_enemy") )
		{
			me->set_temp("evil_no_enemy",1);
			tell_object(me,HIW"\n����ͻȻһ����ʹ����ʳ�븹�Ķ�����ƺ���ʼ�������á�\n\n"NOR);
		}
		else
			tell_object(me,HIR"\n��ʹ���ϵĴ���ĸ���������ȫ����ʹ���޷�������\n\n"NOR);
		me->start_busy(3);
		COMBAT_D->report_status(me,1);
		me->apply_condition("evil_pill02", duration - 1);
  		return 1;
	}
	if( duration >= 1 )
	{
		tell_object(me,HIY"\n��ʹ�ƺ������˲��٣�����������廹���޷�����硣\n\n"NOR);
		me->start_busy(2);
		COMBAT_D->report_status(me, 1);
		me->apply_condition("evil_pill02", duration - 1);
  		return 1;
	}
        if( duration < 1 ) 
        return 0;
return 1;
}
