// recover.c

#include <ansi.h>

int exert( object me, object target )
{
	int	limit_force, value;

	limit_force = (int)me->query("max_force")/20;
	if( limit_force > 125 )
		limit_force = 125;
	else if( limit_force < 5 )
		limit_force = 5;
	if( target != me )
		return notify_fail( "ֻ�����ڹ������Լ�����Ϣ��\n" );
	if( (int)me->query("force") < 20 || (int)me->query("force") < limit_force )
		return notify_fail( "�������㡣\n" );
	me->add( "force", -limit_force );

	value = (int)me->query("max_force")/4;
	if( value < 50 )
		value = 50;
	else if( value > 300 )
		value = 300;
	me->receive_heal( "kee", value );

	if( me->is_fighting() ) {
		me->start_busy(1);
		if( random(100) < 1 ) {
			message_vision( MAG"$N�е���Ϣһ�����, �������߻���ħ��!\n"NOR, me );
			message_vision( HIM"$N�ж�һ��, ���Ŵ�©!\n"NOR, me );
			me->start_busy(2);
		}
	}
        return 1;
}
