// heal.c by ice
// modify by oda (96/4/19)

#include <ansi.h>

int exert(object me, object target)
{
	int bellpower=me->query("bellicosity")/100 + 1;

	if( target!=me ) {
		tell_object(me, "��ֻ�ܰ��Լ����ˡ�\n");
		return 1;
	}
	if( me->is_fighting() ) {
		tell_object(me, "ս�����˹����ˣ�������\n");
		return 1;
	}
	if( me->query_condition("mogi") ) {
		tell_object(me, HIG"�����ϵ�����֮����Ȼ����,ʹ��Ϣ�ܵ�Ӱ���޷���������\n"NOR);
		return 1;
	}
	if( (int)me->query("force") < 50 ) {
		tell_object(me, "��������������޷�ʹ����ħ������ķ������ˡ�\n");
		return 1;
	}

/*
	if( (int)me->query("eff_kee") < (int)me->query("max_kee") / 2 )
		return notify_fail("���Ѿ����˹��أ�ֻ��һ��������������Σ�գ�\n");
*/
        if(me->query("class") != "bandit")
        return notify_fail("ֻ�ж���������ħ�������ˡ�\n");
	write( HIW "��ϯ������" + HIY "����ħ����" + HIW "�е������ķ���һ��а���ɱ������ȫ���������������ˡ�\n" NOR);
	message("vision",
		me->name() + "������ħ����ʼ���ˣ����Ž������ϲ�ͣ��ð�����飬���ã��³�һ����Ѫ���������ö��ˡ�\n",
		environment(me), me);

me->receive_curing("kee", ( 10 + (int)me->query_skill("force",1)/10 + (int)me->query_skill("badforce",1)/10 ) * bellpower );
	me->add("force", -( 45 + bellpower * 3 ) );
	if( me->query("force")<0 )
		me->set("force", 0);

	return 1;
}
