//���겻ɢ
//���辭���ر�ʽ���ܽ����״̬֮һ
#include <ansi.h>

int update_condition(object me, int duration)
{
  object ob1,ob2;
  ob1=new("/u/n/neverend/npc/ghost1.c");
  ob2=new("/u/n/neverend/npc/ghost1.c");

  if( duration >= 15 )
  {
    if ( random(100) > 15 )
    {
     tell_object(me,HIB"\n���������ɵص״��𲢳�����߷��˹���!!\n"NOR);
     message("vision",me->name() + "���������������ʲô�������Ƶģ�������������\n"NOR,environment(me), me);
     ob1->move(environment(me));
     ob1->kill_ob(me);
     ob1->set_leader(me);
     ob2->move(environment(me));
     ob2->kill_ob(me);
     ob2->set_leader(me);
    }else{
    message_vision(HIB"$N�ĺ��������ʲô�����ڸ���!!\n"NOR,me);
    }
  }

  else if( duration >= 1 )
  {
    if ( random(100) > 15 )
    {
     tell_object(me,HIB"\nһ�������ɵص״��𲢳�����߷��˹���!!\n"NOR);
     message("vision",me->name() + "���������������ʲô�������Ƶģ�������������\n"NOR,environment(me), me);
     ob1->move(environment(me));
     ob1->kill_ob(me);
     ob1->set_leader(me);
    }else{
    message_vision(HIB"$N�ĺ��������ʲô�����ڸ���!!\n"NOR,me);
    }
   }
  if( duration < 1 )
  return 0;
  return 1;
}

