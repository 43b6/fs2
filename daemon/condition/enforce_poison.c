#include <ansi.h>

int update_condition(object me, int duration)
{
     if(duration==0) return 0;
        me->set("force_factor",0);
        me->apply_condition("enforce_poison", duration - 1);
        tell_object(me, HIG "���е�" HIB "ʮ�����ɢ" HIG "�����ˣ�\n" NOR );
        message("vision",HIB+me->name()+"ȫ�����鸡��������ʹ��������\n"NOR,environment(me),me);
        if( duration < 1 ) return 0;
        return 1;
}

