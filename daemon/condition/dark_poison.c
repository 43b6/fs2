#include <ansi.h>
int update_condition(object me, int duration)
{
int fun=me->query("suck");
  if(duration==0) {
me->delete("suck");
me->delete("five");
return 0; 
}
 me->receive_wound("kee",50+(fun*15));
 me->receive_wound("sen",50+(fun*10));
 me->start_busy(1);
        me->apply_condition("dark_poison",duration-1);
        tell_object(me,HIC "��������涾�����ڶ��Կ�ʼ������\n" NOR);
        message("vision",HIC+me->name()+"ü���𽥱�ڣ��ƺ������Ѿ������ˣ�\n" NOR,environment(me),me);
	if( duration < 1 ) return 0;
	return 1;
}
