#include <ansi.h>
int update_condition(object me, int duration)
{
if( duration >= 1 )
  {
     tell_object(me,HIG"\n������ɢ��������ħ��. \n"NOR);
     message("vision",me->name() + HIG"���Ϸ������ڵ������ָ������ɵ�ħ����\n"NOR,
      environment(me), me);
   }
  if( duration < 1 )
  return 0;
  return 1;
}
