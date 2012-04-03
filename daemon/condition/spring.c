// spring.c by oda

#include <ansi.h>

int update_condition(object me, int duration)
{
	if( duration==0 ) return 0;
        if( !living(me) ) {
                message("vision", me->name()+"�ƺ��ܲ����������ļ尾�����������ˡ�\n", environment(me), me);
        } else if( duration > 5 ) {
                tell_object(me, HIG"�����ȫ�������ޱȣ��������͡�\n"NOR);
                message("vision", me->name()+"�������ƺ������Ѱ������ȼ��ʵ����ӡ�\n", environment(me), me);
		me->receive_damage("gin",20);
		if( (int)me->query("water")==0 ) {
			tell_object(me, "��е��ڸ������øϿ��ˮ��\n");
		}
		if( (int)me->query("water")>=50 )
			me->add("water", -50);
		else
			me->set("water", 0);
	} else if( duration > 0 ) {
                tell_object(me, HIG"���Ծ��ÿڿ��ޱȣ����������ƺ����������ˡ�\n"NOR);
                message("vision", me->name()+"ȫ�����֣���ͷ�󺹡�\n",
                        environment(me), me);
		me->receive_damage("gin", 10);
		if( (int)me->query("water")==0 ) {
			tell_object(me, "��е��ڸ������øϿ��ˮ��\n");
		}
		if( (int)me->query("water")>=30 )
			me->add("water", -30);
		else
			me->set("water", 0);
        }
        me->apply_condition("spring", duration-1);
        if( duration < 0)
                return 0;
        return 1;
}
