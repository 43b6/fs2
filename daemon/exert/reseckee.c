// recover.c

int exert(object me, object target)
{
        if(target!=me)
          return notify_fail("��ֻ�����ڹ��ָ��Լ���������\n");
        if(!me->query("sec_kee"))
	  return notify_fail("�������û��������\n");
	if( (int)me->query("force") < 20 )
	  return notify_fail("�������������\n");

        me->add("s_kee",1+(int)me->query_skill("force")/10);
        if(me->query("s_kee")>me->query("max_s_kee"))
          me->set("s_kee",me->query("max_s_kee"));
	me->add("force", -20);

//        message_vision("[36m$N�����е���������������ʹ����תǿ��[0m\n",me);

	if( me->is_fighting() ) me->start_busy(1);

	return 1;
}
