//������swy��ħ��ħ������ʽ�����˲���code
//��swy��������ʱ���������׼����������  by Neverend
#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
int fun;
int k;
int perform(object me,object target)
{
	object weapon;
	object *all = me->query_enemy();
	int i,j, fun=me->query("functions/movedown/level");
	if( fun < 20) k=1;
	if( fun>=20 && fun < 70) k=random(2)+1;
	if( fun >= 70) k=random(3)+1;
	if( !target ) target = offensive_target(me);
	if(!me->is_fighting(target))
	return notify_fail("���Ƿ�Ѩֻ����ս����ʹ�á�\n");
	if(!(weapon=me->query_temp("weapon")) || (string)weapon->query("skill_type")!= "stabber" )
	return notify_fail("Ҫ���ʺϵ��������������Ƿ�Ѩ��\n");
	if(me->query("force") < 100)
	return notify_fail("�������������\n");
	if( me->query("family/family_name") != "����")
	return notify_fail("�������������������֣���^_^\n");
	if(target->is_busy())
	return notify_fail("�������ڲ��ܶ�,�칥����!!!!\n");
	me->add("kee",-50);
	me->add("force",-100);
	message_vision(HIG "$Nʹ��������ˮ�ʷ��еġ����Ƿ�Ѩ����$n���ϵ�Ѩ�����㣡\n" NOR,me,target);
	for( i = 0; i < sizeof(all); i++ ) 
	{
	if(environment(me)!=environment(all[i])) continue;  
	  if(random(100) < 80) 
	  {
	  message_vision(GRN"���$n��$N���У�Ѩ�����⣡\n" NOR,me,target);
	  all[i]->start_busy(k);
	  }else{
	  message_vision(GRN"�����$nʶ�ƣ�û�����С�\n" NOR,me,target);
	  }
	}
	if(fun<100 && me)
	function_improved("movedown",random(500));
	me->start_busy(1);
	return 1;
}

