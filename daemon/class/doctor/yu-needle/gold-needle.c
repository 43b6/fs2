//ҽ���Ľ����Ѩ
//design by chan
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;

int perform(object me,object target)
{
    object weapon;
    int value,sk_lv,em_lv;

    if( !target ) target = offensive_target(me);
    if(!target) return notify_fail("���Ҳ�������!!\n");
    if(!me->is_fighting(target))
	return notify_fail("�����Ѩֻ����ս����ʹ�á�\n");
    if(!(weapon=me->query_temp("weapon")) || (string)weapon->query("skill_type")!="stabber" )
	return notify_fail("Ҫ���ʺϵ����������ý����Ѩ��\n");
    if( me->query("family/family_name") != "������" )
	return notify_fail("�����Ѩֻ�������ŵ����˲ſ���ʹ�á�\n");
    if((me->query_skill("yu-needle",1) < 40))
	return notify_fail("�����������������죬�޷�ʹ�������Ѩ��\n");
    if(me->query("force")<100)
	return notify_fail("�������������\n");
    if(target->is_busy())
	return notify_fail("�������ڲ��ܶ�,�칥����!!!!\n");
	me->add("force",-100);
	value=query_function("gold-needle");
	sk_lv=me->query_skill("yu-needle",1);
	em_lv=target->query_skill("dodge"); //�����enable dodge��ֵ!!
	em_lv=em_lv /3;
	message_vision("
 "HIW"                $N�������������ϵ����ų���"HIC"����"HIW"�����â����������⼤�������\n\n"NOR""
""HIW"                            $N����$nȫ���Ѩ�����ǰ���ʹ������\n\n"NOR""
""HIY"                                    "HIC+HBBLU"�� "HIY"�� "HIW"-- "HIY"�� "HIW"-- "HIY"�� "HIW"-- "HIY"Ѩ "HIC"��\n\n"NOR""
""HIC"                        ͻȻ�䡫"HIY"������â"HIW"����$n��ȫ���Ѩ��Ϯ��ȥ������\n\n"NOR,me,target);
	sk_lv=random(sk_lv);
	value=random(value);
    if((value > 40) && (sk_lv > em_lv)) {
	message_vision(HIW"$n���ϵ��澭������$N�����ס,���ϵ������޷����С�\n" NOR,me,target);
	target->start_busy(4);
}
    else if((value > 20) && (sk_lv > em_lv)) {
	message_vision(HIY"$n���ϵ�������$N������������,��������Ϊ֮һ��!!\n" NOR,me,target);
	target->start_busy(2);
}
    else if((value > 0 ) && (sk_lv > em_lv)) {
	message_vision(GRN"���$n��̫��������Ѩ��$N�����ס,��������ۿ�!!\n" NOR,me,target);
	target->start_busy(2);
}
	else
{
	message_vision(MAG"$n������â����һ��϶,ʹ�������ܿ�$N�Ĺ�����Χ!!\n" NOR,me,target);
}
	message_vision(HIR"$Nʹ�������Ѩ��!!�ھ���Ĺ��󣬸Ͻ�������Ϣ��\n"NOR,me);
	me->start_busy(1);
	COMBAT_D->report_status(target, 1);
	value = (int)query_function("gold-needle");
    if(value < 100)
	function_improved("gold-needle",random(me->query("max_force")/15+me->query_skill("yu-needle",1)/2));
	return 1;
}
