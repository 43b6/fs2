// rose_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
  if(duration < 1||me->query("force")<10) {
    tell_object(me, "�����Ѫ����˳���ˡ�\n");
    return 0;
  }
  else {
    // �ĳ�����, ���ҵ�Сһ��
    me->add("force",-1*(random(me->query_skill("force",1)/10)+1));
    me->apply_condition("ff_poison",duration-1);
    tell_object(me,HIY "����Ѫʧ���������޷��ָ���\n" NOR);
  }
  return 1;
}
