#include <ansi.h>
int update_condition(object me, int duration)
{
int fun=me->query("suck");
if(duration==0) {
me->delete("suck");
me->delete("five");
return 0; 
}
//���õ�..��Ȼexert refreshҲ���ܲ�����...����damageҲ���..
me->receive_wound("sen",50+(fun*10));   
me->receive_wound("kee",50+(fun*15));
me->start_busy(1);
	me->apply_condition("rose_poison", duration - 1);
	tell_object(me, HIG "���е�" HIR "��õ�嶾" HIG "�����ˣ�\n" NOR );
        message("vision",HIR+me->name()+"���ϸ��ֳ�õ�廨�ƣ�����ͨ�졣\n"NOR,environment(me),me);
	if( duration < 1 ) return 0;
	return 1;
}
