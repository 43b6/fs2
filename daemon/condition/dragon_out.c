// rose_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
     if(duration==0) return 0;
      me->add("kee",-200);
      me->apply_condition("dragon_out",duration-1);
         message_vision(
       HIG "$N����֮�����֣���ʱ��Ϣ�߲�\n" NOR,me);
	if( duration < 1 ) return 0;
	return 1;
}
