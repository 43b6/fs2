#include <ansi.h>
// ��ǿ���̵� �嶾 by swy
int update_condition(object me, int duration)
{
int fun=me->query("five");
if(duration==0) {
me->delete("five");
me->delete("suck");
return 0;   
}
me->receive_wound("kee",100+(fun*20));
me->add("force",-(100+(fun*20)));
me->start_busy(1);
        me->apply_condition("five_poison",duration-1);
        message_vision(
   HIY "$N�����嶾���ƣ����Կ�ʼ������\n" NOR,me);
message_vision(HIW"$N�����嶾���ƣ�������ʼ��ʧ��\n" NOR,me);  
	if( duration < 1 ) return 0;
	return 1;
}
