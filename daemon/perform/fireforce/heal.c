

#include <ansi.h>

int exert(object me, object target)
{
  if(!target->query("quest/new_gold_fire",1)){
                tell_object(me, "���Ǽ����¹��ܣ������ؽ��ղ�����\n");
                return 1;
                                                   }
	if( target!=me ) {
		tell_object(me, "��ֻ�ܰ��Լ����ˡ�\n");
		return 1;
	}
	if( me->is_fighting() ) {
		tell_object(me, "ս�����˹����ˣ�������\n");
		return 1;
	}
	if( (int)me->query("force") < 50 ) {
		tell_object(me, "��������������޷�ʹ�ü��������ˡ�\n");
		return 1;
	}

	write( HIR "��ϯ�����𡮼��𹦡��е������ķ���һ�ɻ��������ϲ�ͣȼ�գ������ѽ������⡣\n" NOR);
	message("vision",me->name()+"���𡮼��𹦡��е������ķ���һ�ɻ��������ϲ�ͣȼ�գ����ã��³�һ����Ѫ���������ö��ˡ�\n",environment(me), me);

	me->receive_curing("kee", ( 10 + (int)me->query_skill("force")/20 + (int)me->query_skill("fireforce")/10 ));
	me->add("force", -35 );
	if( me->query("force") < 0 )
		me->set("force", 0);

	return 1;
}
