// ������ force
#define ALLOW ({"fighter","bonze","prayer","doctor"})
int exert(object me,object target)
{
	int power;
int max=me->query("max_kee",1);
int maxt;
if(target)
maxt=target->query("max_kee",1);
	if( (int)me->query("force") < 30 )
		return notify_fail("�������������\n");
	if( me->is_fighting() || target->is_fighting() )
		return notify_fail("ս�����޷����ˡ�\n");
    if( member_array(me->query("class"), ALLOW) == -1 && !wizardp(me))
		return notify_fail("���ְҵ�޷����ˡ�\n");
if(me->query("eff_kee")==max && !target)
return notify_fail("��û�����ˡ�\n");
if(target)
  if(target->query("eff_kee") >= maxt)
    return notify_fail(target->query("name")+"û������\n");
      if(me->query_condition("mogi"))
        return notify_fail("[1;32m���ϵ�����֮����Ȼ����,ʹ��Ϣ�ܵ�Ӱ���޷���������[0m\n");
       if(target->query_condition("mogi"))
        return notify_fail("[1;32m�Է����ϵ�����֮��,ʹ���޷�������������[0m\n");
        power = 5 + (int)me->query_skill("force")/10;
	if( target==me ){
		message_vision("[36m$N����ϯ�ض���������ȫ���������ˣ�һ�������$Nͷ��ð����, ����������ת�á�[0m\n", me);
	}
	else{
		message_vision("[36m$N����ϯ�ض���������ȫ����������$n����, һ�������ͷ��ð����, $n����������ת�á�[0m\n", me, target);
                power = power/2;
	}
        me->receive_curing("kee", power );
    if(target)
      if(target != me) target->receive_curing("kee",power);
	me->add("force", -30);
	return 1;
}
