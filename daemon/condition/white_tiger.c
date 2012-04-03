#include <ansi.h>
int i,j;

int update_condition(object me,int duration)
{
	if( duration >= 1 )
	{
		int i = (int)me->query("kee");
		int j = (int)me->query("eff_kee");

		tell_object(me,HIW"\n��ҧ֮���Ҵ����ۡ������ڡ��������!!\n"NOR);

		if( me->query("/open/forest/clear_white_tiger") )
		{
			me->delete("/open/forest/clear_white_tiger");
			me->clear_condition("white_tiger");
			tell_object(me,HIC"�߻��߷���һ�ɺ��֮����ס��ҧ���Ҵ�!!\n\n"NOR);
		}
			
		else 
		{
			if( i >= j )
			{
				tell_object(me,HIW"����ʱ��ʹ����!!ʹ�಻��!!\n\n"NOR);
				me->add("kee",-j/10);
			}
			else
			{
				if ( i > j/15 )
				{
					tell_object(me,HIW"�������ϵ�����...\n\n"NOR);
					me->add("kee", -j/15);
				}
				else
				{
					tell_object(me,HIW"����ʱȫ�����!!��������!!�������һ�߼�!!\n\n"NOR);
					me->set("kee",1);
				}
			}
		}
	}

		if( duration < 1 )
			return 0;
	return 1;
}
