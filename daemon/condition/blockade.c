// made by xman

#include <ansi.h>

int update_condition(object me, int duration)
{
     if(duration==0) return 0;
       me->start_busy(1);
       me->apply_condition("blockade",duration-1);
        tell_object(me,HIY "�����ϵ�" HIW "һ��ָ��" HIY "�����ˣ�\n" NOR);
        message("vision",HIY+me->name()+"�������ͣ��粽���ơ�\n"NOR,environment(me),me);
        if( duration < 1 ) return 0;
        return 1;
}

