// ҽ���Ľ����Ѩ
// design by chan
// (�İ�) by nike
// �������Ѩ��Ϊ��ȫ��֮��ʽ...

#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;

int perform(object me,object target)
{
    object *enemy, ob, weapon;
    int i,value, sk_lv, em_lv, stab, attack, str;
    enemy=me->query_enemy();
    i=sizeof(enemy);

    if(!me->is_fighting(target))
	return notify_fail("�����Ѩֻ����ս����ʹ�á�\n");
    if(!weapon=me->query_temp("weapon") || weapon->query("skill_type")!="stabber" )
	return notify_fail("Ҫ���ʺϵ����������ý����Ѩ��\n");
    if( me->query("family/family_name") != "������" )
	return notify_fail("�����Ѩֻ�������ŵ����˲ſ���ʹ�á�\n");
    if((int)me->query_skill("yu-needle",1) < 40)
	return notify_fail("�����������������죬�޷�ʹ�������Ѩ��\n");
    if((int)me->query("force")<300)
	return notify_fail("�����������ʹ�������Ѩ��\n");
    if(target->is_busy() || enemy[i]->is_busy())
	return notify_fail("�������ڲ��ܶ�,�칥����!!!!\n");

	me->add("force",-300);
	value=query_function("gold-needle");
	sk_lv=me->query_skill("yu-needle",1);
	em_lv=target->query_skill("dodge"); //�����enable dodge��ֵ!!
	em_lv=em_lv /3;
	message_vision("
 "HIW"                $N�������������ϵ����ų���"HIC"����"HIW"�����â����������⼤�������\n\n"NOR""
""HIW"                            $N����$nȫ���Ѩ�����ǰ���ʹ������\n\n"NOR""
""HIY"                                    "HIC+HBBLU"�� "HIY"�� "HIW"-- "HIY"�� "HIW"-- "HIY"�� "HIW"-- "HIY"Ѩ "HIC"��\n\n"NOR""
""HIC"                        ͻȻ�䡫"HIY"������â"HIW"����$n��ȫ���Ѩ��Ϯ��ȥ������\n\n"NOR,me,target);
	stab = (int)me->query_skill("stabber",1);
	if(stab > 120) stab = 120;
	sk_lv=random(sk_lv);
	value=random(value);
	str = (int)me->query("str");

    if((value > 80) && (sk_lv > em_lv))
{
	message_vision(HIW"$n���ϵ��澭������$N�����ס�����ϵ������޷����У�\n" NOR,me,target);
	attack=stab*6;
	enemy[i]->receive_wound("kee",attack);
	str=str*2;
    if(100-str > 100)
	enemy[i]->start_busy(random(3)+2);
    else
	target->start_busy(3);
}
    else if((value > 60) && (sk_lv > em_lv))
{
	message_vision(HIY"$Nһ��ʹ������ʽδ�����ϣ�����ͦ��ֱȡ$n������Ѩ��\n" NOR,me,target);
	attack=stab*6;
	enemy[i]->receive_wound("kee",attack);
	str=str*2.5;
    if(100-str > 100)
	enemy[i]->start_busy(random(3)+1);
    else
	target->start_busy(2);
}
    else if((value > 40) && (sk_lv > em_lv))
{
	message_vision(HIY"$n���ϵ�����Ѩ��$N�����������֣���������Ϊ֮һ�٣�\n" NOR,me,target);
	attack=stab*5;
	enemy[i]->receive_wound("kee",attack);
	str=str*3;
    if(100-str > 100)
	enemy[i]->start_busy(1);
    else
	target->start_busy(1);
}
    else if((value > 20 ) && (sk_lv > em_lv))
{
	message_vision(GRN"���$n��̫��������Ѩ��$N�����ס����������ۿۣ�\n" NOR,me,target);
	attack=stab*4;
	enemy[i]->start_busy(1);
	enemy[i]->receive_wound("kee",attack);
}
    else if((value > 0 ) && (sk_lv > em_lv))
{
	message_vision(GRN"$N�����ڿգ���ҡԾ����Ѹ�ײ����ڶ�֮�ƴ���$n�Ĺ�ԪѨ��\n" NOR,me,target);
	target->start_busy(2);
}
	else
{
	message_vision(MAG"$n������â����һ��϶��ʹ�������ܿ�$N�Ĺ�����Χ��\n" NOR,me,target);
}
	message_vision(HIR"$Nʹ�������Ѩ���ھ���Ĺ��󣬸Ͻ�������Ϣ��\n"NOR,me);
	me->start_busy(1);
	COMBAT_D->report_status(enemy[i],1);
	value = (int)query_function("gold-needle");
    if(value < 100)
	function_improved("gold-needle",random(me->query("max_force")/15+me->query_skill("yu-needle",1)/2));
	return 1;
}
