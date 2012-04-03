#include <ansi.h>


int update_condition(object me, int duration)
{
	if( duration == 0 )
	{
		message_vision(HIY"\n$NŻ�¹�����ɫ�����Ļظ��˺���\n\n"NOR,me);
                tell_object(me,HIW"��о�������ˡ�\n"NOR);
                return 0;
        }

	if( duration >= 10 )
	{
		message_vision(RED"\n$N�ƶ�������ȫ��񶶲�ͣ��\n\n"NOR,me);
		me->receive_wound("gin",(int)me->query("max_gin")/50);
		me->receive_wound("kee",(int)me->query("max_kee")/50);
		me->receive_wound("sen",(int)me->query("max_sen")/50);
		COMBAT_D->report_status(me, 1);
		me->apply_condition("evil_poison", duration-1 );
  		return 1;
	}	
	if( duration >= 1 )
	{
		message_vision(YEL"\n$N���ϵ�Ż�¡��³������ĹƳ桫\n\n"NOR,me);
		me->receive_wound("gin",(int)me->query("max_gin")/100);
		me->receive_wound("kee",(int)me->query("max_kee")/100);
		me->receive_wound("sen",(int)me->query("max_sen")/100);
		COMBAT_D->report_status(me, 1);
		me->apply_condition("evil_poison", duration-1 );
  		return 1;
	}
        if( duration < 1 ) 
        return 0;
return 1;
}
