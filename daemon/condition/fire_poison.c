#include <ansi.h>
int update_condition(object me, int duration)
{
        if(duration==0) return 0;
 me->receive_wound("kee",300);
	me->apply_condition("fire_poison",duration-1);
	me->start_busy(1);
	tell_object(me,HIG "�����ϵ�" HIR "����а��" HIG "�����ˣ�\n" NOR);
	message("vision",HIR+me->name()+"ҡҡ�λΣ�ȫ���졣\n"NOR,environment(me),me);
	if( duration < 1 ) return 0;
	return 1;
}
