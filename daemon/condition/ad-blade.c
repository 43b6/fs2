// ��Х�� - ������ն��ר��
#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) me->delete_temp("no_power",1);
    tell_object( me , HIY"�����ϵ��޼����˷������������ⸯʴȫ����ʱ��֫������ʹ��������\n" NOR);
    message("vision",HIC+me->name()+"����"HIM"�޼�����"HIC"�����������������ȫ��������ʾʹ���ޱȵı��飡\n"NOR,environment(me),me);
    me->add("kee",-350);
    me->add("eff_kee",-350);
    me->add("sen",-200);
    me->add("gin",-200);
    me->set_temp("no_power",1);
	me->set_temp("ad-blade",1);
    me->apply_condition("ad-blade",duration-1);
	COMBAT_D->report_status(me);
    if (duration < 1) {
    me->delete_temp("no_power",1);
	me->delete_temp("ad-blade",1);
    return 0;
    }
    return 1;
}
