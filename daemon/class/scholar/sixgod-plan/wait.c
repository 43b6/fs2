// By Swy ������� QC 98/6/20
#include <ansi.h>
int perform(object me,object target)
{
	int i;
	object *all;
	if( me->query("sen") < 10 )
		return notify_fail("��ľ��񲻹����У��޷��÷���֮�ơ�\n");
	if( me->query_temp("invis")==1)
		return notify_fail("����δ��������������ʹ�ô˼ơ�\n");
// ����...
        if( me->query("family/family_name") != "����")
    return notify_fail("�������������������֣���^_^\n");
     if( me->query_skill("plan",1) < 75 )
		return notify_fail("���ı�Գ̶Ȳ�����\n");
    me->add("sen",-15);
	message_vision( CYN + @LONG
$N��ʼ����������ȴ�ʱ����
LONG + NOR , me );
	me->set_temp("invis",1);
	all = all_inventory(environment(me));
	for( i = 0 ; i < sizeof(all) ; i ++ ) 
	if( living(all[i]) ) all[i]->set_temp("see-wait",me);
	return 1;
}



