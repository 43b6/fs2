// drunk.c
#include <combat.h>

inherit F_CLEAN_UP;

int update_condition(object me, int duration)
{

	if( !living(me) ) {
		message("vision", me->name() + "���ϵ��˿���δȬ��, ���Ǿ����ƺ��;��ƿ�\��!!\n",
			environment(me), me);
	} else if( duration > 20 ) {
		tell_object(me, "����˿��ƺ�������, Ѫ����ֹ.\n");
		message("vision", me->name() + "���ϵ��˿�Ѫ����ע, ��Ȼ����ʮ������. \n",
			environment(me), me);
		me->receive_wound("kee", 250);
	} else if( duration > 10 ) {
		tell_object(me, "��������ϵ��˿ڿ�ʼ�ܺ���, Ѫ����Ҳ������. \n");
		message("vision", me->name() + "�ƺ����˲���, ����Ѫ�����. \n",
			environment(me), me);
		me->receive_wound("kee", 100);
	} else if( duration > 5 ) {
                tell_object(me, "�����ϵ��˿ڿ�ʼ�����, Ҳ�о�����ʹ����. \n");
                message("vision", me->name() + "��������һ���°�, �����ܵ�������˺�. \n",
                        environment(me), me);
                me->receive_wound("kee", 30);
	}
	me->apply_condition("bleeding", duration - 1);
	COMBAT_D->report_status(me, 1);
	if( !duration )
	 	return 0;
	return 1;
}
