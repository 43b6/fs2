// ��������

int exert(object me, object target)
{
	if( target == me ) 
		return notify_fail("��ֻ�ܴ��������������ϡ�\n");	
	if( !target->is_character() || !living(target) )
		return notify_fail("�ⶫ�������ǻ��\n");
	if( target->query_skill_mapped("force") != me->query_skill_mapped("force") )
      if(!(target->query("class")=="doctor" && target->query_temp("saving_die")))
		return notify_fail("�Է��ڹ���������������, �޷����͡�\n");
	if( target->is_fighting() || me->is_fighting() )
		return notify_fail("ս�����޷��˹���\n");
	if( (int)me->query("force") < 100 )
		return notify_fail("�������������\n");

	me->add("force", -100);
	target->add("force",60);
	if( target->query("force") > target->query("max_force") )
		target->set("force",target->query("max_force"));
	message_vision("[36m$N��˫������$n�ٻ�����������Ѩ��һ���ھ���$N����������$n���ڣ���$n�������������ںϡ�[0m\n", me, target);

	return 1;
}
