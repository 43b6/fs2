// ������ force
#define ALLOW ({"doctor","dancer"})
#include <ansi.h>
int exert(object me, object target)
{
	int power;
	if( (int)me->query("force") < 30 )
		return notify_fail("�������������\n");
	if( me->is_fighting() || target->is_fighting() )
		return notify_fail("ս�����޷��������ˡ�\n");
	if( member_array(me->query("class"), ALLOW) == -1 )
		return notify_fail("���ְҵ�޷��������ˡ�\n");
        power = 5 + (int)me->query_skill("force")/10;
    if(!target) target=me;
	if( target==me ){
message_vision(HIC"$N���ȶ�����������Ϣ֮�󣬾������㡣\n"NOR, me);
	}
	else{

message_vision(HIC"$N����ȫ����������$n�������ˣ�������Ϣ֮��$n��������������������\n"NOR, me, target);
                power = power/2;
	}
        target->receive_curing("gin", power );
	me->add("force", -power/2);
	return 1;
}
