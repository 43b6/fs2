#include <ansi.h>
int i,j,k;

int update_condition(object me,int duration)
{
	if( duration >= 1 )
	{
		int i = (int)me->query("combat_exp");

		tell_object(me,HIG"\n����֮�꣬�����������У���ʳ����ļ����뾭��!!\n"NOR);

		if( me->query("/open/forest/clear_blue_dragon") )
		{
			me->delete("/open/forest/clear_blue_dragon");
			me->clear_condition("blue_dragon");
			k = (int)me->query("/open/forest/combat_exp");
			(int)me->set("combat_exp", k );
			me->delete("/open/forest/combat_exp");
			tell_object(me,HIC"�������ڵķ���ˮ������������֮�꣬��ʱ������ס!��ظ������м����뾭��!!\n\n"NOR);
		}
			
		else 
		{
			if( !me->query("/open/forest/combat_exp") )
			{
				tell_object(me,HIG"���������...��ʱ��ʧһ���ݹ���!!\n\n"NOR);
				(int)me->set("/open/forest/combat_exp", i );
				(int)me->add("combat_exp", -i/2);
			}
			else
			{
				j = (int)me->query("/open/forest/combat_exp");
				if ( i > j/10 )
				{
					tell_object(me,HIG"��Ĺ��������˲���...\n\n"NOR);
					(int)me->add("combat_exp", -j/20);
				}
				else
				{
					tell_object(me,HIW"�㽥��������һЩ��ʽ...\n\n"NOR);
					(int)me->set("combat_exp",j/10);
				}
			}
		}
	}

		if( duration < 1 )
			return 0;
	return 1;
}
