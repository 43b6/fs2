#include <ansi.h>
int i,j;

int update_condition(object me,int duration)
{
	if( duration >= 1 )
	{
		int i = (int)me->query("force");
		int j = (int)me->query("max_force");

		tell_object(me,HIR"\nȸ���ס��Ĵ�Ѩ����!!\n"NOR);

		if( me->query("/open/forest/clear_rose_finch") )
		{
			me->delete("/open/forest/clear_rose_finch");
			me->clear_condition("rose_finch");
			tell_object(me,HIC"������Ȫˮ�澭�����У���ȸ������ס����������ͨ��!!\n\n"NOR);
		}
			
		else 
		{
			if( i >= j )
			{
				tell_object(me,HIR"����ʱ��������!��������!\n\n"NOR);
				me->add("force",-j/2);
			}
			else
			{
				if ( i > j/10 )
				{
					tell_object(me,HIR"�������������谭��\n\n"NOR);
					me->add("force", -j/10);
				}
				else
				{
					tell_object(me,HIR"�����Ѿ���ȫ���ľ�!!\n\n"NOR);
					me->set("force",1);
				}
			}
		}
	}

		if( duration < 1 )
			return 0;
	return 1;
}
