// refresh.c
// refix by chan
int exert(object me, object target)
{
 int force,max_force,limit_force,value;
 limit_force=(int)me->query("max_force")/100;
 limit_force=limit_force*5;
 if(limit_force > 125)
  limit_force=125;
 if(limit_force < 5)
  limit_force=5;
 if((int)me->query("force")<20) //����Ҫ20���ϲ����ð�.....by chan
  return notify_fail("�������������\n");
 if((int)me->query("force")< limit_force)
  return notify_fail("�������������\n");
 if( target != me ) return notify_fail("��ֻ�����ڹ��՚a�Լ�������\n");
 value=(int)me->query("max_force")/4;
 if(value<50) //������������
   value=50;
 if(value>200) //�趨����
   value=200;
//��������by chan
     me->add("force", -limit_force);
 me->receive_heal("sen",value);
//����fix  by chan
//        message_vision("[36m$N��һ�������˿����������������Ѷ��ˡ�[0m\n", me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}
