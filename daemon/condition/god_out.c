// rose_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
       if(duration==0)
        {
       me->delete_temp("super_god");
         return 0;
        }
     if(((int)me->query("kee")) < ((int)me->query("max_kee")))
      {
       me->add("kee",100);
       me->add("force",100);
      }
      me->apply_condition("god_out",duration-1);
      message_vision(
           HIM "$N������֮��������͵Ĺ�ã��$N�о����ϵ��˺ۻָ��Ҿ������档\n" NOR,me);
      if( duration < 1 ) return 0;
       return 1;
}
