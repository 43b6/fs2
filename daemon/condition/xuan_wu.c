#include <ansi.h>
int i;

int update_condition(object me,int duration)
{
	if( duration >= 1 )
	{
		tell_object(me,HIB"\n���������Ϣ!!��������...\n"NOR);

		if( me->query("/open/forest/clear_xuan_wu") )
		{
			me->delete("/open/forest/clear_xuan_wu");
			me->clear_condition("xuan_wu");
			tell_object(me,HIC"�ǿ�֮������Ч�ã�һ������ֱ�ֵ�����ƹ�Ϣ!!\n\n"NOR);
		}

		else 
		{
			tell_object(me,HIB"����ʶ����ʧȥ�����岻�ܿ���...\n\n"NOR);
			i = random(3)+1;
			me->start_busy(i);
		}
	}

		if( duration < 1 )
			return 0;
	return 1;
}
