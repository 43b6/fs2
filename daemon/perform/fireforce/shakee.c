#include <ansi.h>

int exert(object me, object target)
{
        if( target!=me ) {
                tell_object(me, "��ֻ�ܰ��Լ��ظ���\n");
                return 1;
        }
        if( me->is_fighting() ) {
                tell_object(me, "ս�����˹���������\n");
                return 1;
        }
     if(me->query_condition("shakeeload") != 1)
     {
                tell_object(me, "�����ڲ����򽣾���ѹ����\n");
                return 1;
        }

        write( HIC "�㶶�����壬�������ɽ�Ԫ�����������ޣ���ʱ���򽣾����ɵ�������ȫ������\n" NOR);
        message("vision",me->name()+"��������Ԫ������ɫ��ʱ�����ޱ�\n",environment(me), me);

     me->apply_condition("shakeeload",0);
     me->delete_temp("shakeeload",1);
        return 1;
}
