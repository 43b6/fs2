#include <ansi.h>
// By Swy ������� QC 98/6/20
int perform(object me,object target)
{
	if( me->query("sen") < 10 )
		return notify_fail("��ľ��񲻹����޷�ʹ�á�\n");
        if( me->query_skill("plan",1) < 60 )
		return notify_fail("���ı�Գ̶Ȳ�����\n");
	if( !target ) return notify_fail("��Ҫ��˭�ü� ?\n");
	if(me->is_fighting(target))	
		return notify_fail("��Ϯ֮��ֻ����ս��ǰʹ�á�\n");
  if( environment(me)->query("no_fight")==1 )
  return notify_fail("���ﲻ׼ս����\n");
if( userp(target) && target->query("age")<16)
    return notify_fail("���ܶ�δ��16����Ϯม�\n");
  if(target->query("no_speed")==1)
  return notify_fail("��Ϯ������Ч��\n");
   if( target->query_temp("speed")==1 )
                return notify_fail("��ͬ�ļƲ߶�ͬһ����û��Ч��\n");
	me->add("sen",-15);
// ��������
   if( me->query("family/family_name") != "����")
    return notify_fail("�������������������֣���^_^\n");
    me->start_busy(1);
	message_vision( RED + @LONG
$NͻȻ�ض�$n������Ϯ��ɱ��$n���ֲ�����
LONG + NOR , me , target );
	if(me->query_temp("invis")==1)
	{
        me->delete_temp("invis");
target->set_temp("speed",1);
target->start_busy(4);
        me->kill_ob(target);
        target->kill_ob(me);
	}
	else
        target->start_busy(3);
        target->set_temp("speed",1);
	me->kill_ob(target);
	target->kill_ob(me);
	return 1;
}

