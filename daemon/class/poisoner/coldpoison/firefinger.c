#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
	string msg;
	object ob;
	string *name;
        int fun=me->query("functions/firefinger/level");
	if( !target ) target = offensive_target(me);
    if(!target) return notify_fail("���Ҳ�������!!\n");
//���ܹ����Լ�by bss
    if(target==me) return notify_fail("�����Լ�??������?\n");
        if(me->query("class")!="poisoner")
        return notify_fail("ֻ��ħ��ͽ���á�\n");
	if(!me->is_fighting(target))
	return notify_fail("������ָҪ��ս���в���ʹ�á�\n");
	if(me->query("force")<110)
	return notify_fail("�������������\n");
	if(me->query_skill("coldpoison",1)<30)
	return notify_fail("�������涾��������޷�ʹ�û�����ָ��\n");
	message_vision( HIR "$N����һת������ʳָָ��ɢ����⣬����һָ�������$n��ȥ��\n",me,target);
if(80>random(100))
	{
message_vision( HIC "$nһ���������ϧ�Ѿ��������ˣ�$N����ָ������$n����һ���˺ۡ�\n",me,target);
target->apply_condition("fire_poison",5);
target->receive_damage("kee",(100+(7*fun)));
	}
	else
	message_vision( HIC "$n���������������һ�ݣ�һ��ת����˿�ȥ��\n",me,target);
	me->add("force",-100);
        me->start_busy(1);
if(fun<100) function_improved("firefinger",random(500));
	message_vision( NOR,me);
	return 1;
}
