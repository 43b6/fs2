#include <ansi.h>

inherit F_CLEAN_UP;

int update_condition(object me, int duration)
{

        if( duration > 7 ) {
                tell_object(me, NOR"��е�һ������ӵ��﷢�������������⡣\n"NOR);
                message("vision", me->name() + "�������ֵֹġ� \n",
                        environment(me), me);
        } else if( duration > 6 ) {
                tell_object(me, NOR"��е���������ȫ����ɢ����æ�������� \n"NOR);
                message("vision", me->name() + "�ƺ���̫����� \n",
                        environment(me), me);
        } else if( duration > 5 ) {
                tell_object(me, "��е������޿��̣���������йһ�²����ˡ� \n");
                message("vision", me->name() + "˫�۷��죬����Ұ�ޡ� \n",
                        environment(me), me);
        } else if( duration > 3 ) {
                tell_object(me, "������̫�ã���ס�������������������С� \n");
                message("vision", me->name() + "һ��ʹ�࣬�챬�ˡ� \n",
                        environment(me), me);     
                me->receive_damage("gin", me->query("max_gin",1)/2);
                me->add("force",-me->query("force",)/2);
                me->receive_damage("kee", me->query("max_kee",1)/2);
                me->receive_damage("sen", me->query("max_sen",1)/2);
        }
me->apply_condition("ashura_sex", duration - 1);
        COMBAT_D->report_status(me, 1);
        if( !duration )
                return 0;
        return 1;
}

