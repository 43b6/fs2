//ice
// bleeding.c
#include <combat.h>
#include <ansi.h>
inherit F_CLEAN_UP;

int update_condition(object me, int duration)
{											
	if( !living(me) ) {
		message("vision", me->name() + "������֮˪��������!!\n",
			environment(me), me);

	} else if( duration > 6 ) {
		message("vision", me->name() + HIR"�����ܱ�˪֮����Ϯ��\n"NOR,
			environment(me), me);
		me->receive_damage("kee",300);
		me->receive_damage("sen",300);
		me->receive_damage("gin",300);

	} else if( duration > 2 ) {
		message("vision", me->name() + "���ϲ���ð�������⡣\n",
			environment(me), me);
		me->receive_damage("kee",200);
		me->receive_damage("sen",200);
		me->receive_damage("gin",200);

	} else {
                tell_object(me, HIR"���⽥����ʧ��\n"NOR);
                message("vision", me->name() + "���ϵı���֮�н�����ʧ��\n",
                        environment(me), me);
                me->receive_damage("kee",100);
                me->receive_damage("sen",100);
                me->receive_damage("gin",100);
	}    
	me->apply_condition("ice", duration - 1);
	COMBAT_D->report_status(me);
        if( duration < 1)
	 	return 0;
	return 1;
}
