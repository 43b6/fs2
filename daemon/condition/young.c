#include <ansi.h>

int update_condition(object me, int duration)
{

        if(duration==0)
        {
                me->delete("age_young");
                me->add("mud_age",me->query("new_age"));
                me->delete("new_age");
                message_vision(
                HIC "$N����ò˲��������,�ж�Ҳ����������\n"NOR,me);
                return 0;
        }
        me->apply_condition("young",duration-1);
        if( duration < 1 ) return 0;
        return 1;
}
