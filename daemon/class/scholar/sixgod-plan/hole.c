// By Swy ������� QC 98/6/20
#include <ansi.h>
int perform(object me,object target)
{
	int i;
	string myhole;
	myhole = me->query("name") + "hole";
	if( !target )
	{
	if( me->query("kee") < 20 )
		return notify_fail("����������������������塣\n");
	if( me->query_skill("plan",1) < 90 )
		return notify_fail("���ı������������\n");
        if(me->is_fighting(target))
                return notify_fail("����ֻ����ս��ǰʹ�á�\n");
	if( environment(me)->query_temp(myhole) )
		return notify_fail("��������Ѿ����ã�����Ҫ�����ˡ�\n");
    me->add("kee",-15);
// ����...
        if( me->query("family/family_name") != "����")
    return notify_fail("�������������������֣���^_^\n");
		message_vision(HIG + @LONG
��һ��æµ֮��$N�ɹ������������塣
LONG + NOR , me );
		environment(me)->set_temp(myhole,1);
}
	else
	{
	if( me->query("sen") < 30 )
		return notify_fail("��ľ������������޷��üơ�\n");	
	if( me->query_skill("plan",1) < 90 )
		return notify_fail("���ı������������\n");
	if( !environment(me)->query_temp(myhole))
	return notify_fail("�㲢û���ڴ������壬�޷�ʹ�ô˼ơ�\n");
   if(target->query("no_hole")==1)
   return notify_fail("���������Ч��\n");
  if(target->is_busy())
  return notify_fail("����busy�У��칥���ɣ�\n");
	me->add("sen",-30);
 if(80>random(100))
	{
	message_vision(RED + @STRING
$nһ������������$N������֮�У��޷���������
STRING + NOR,me,target );
		if(target->query_temp("follow")==1)
		{
 target->start_busy(4);
 environment(me)->delete_temp(myhole);
 target->kill_ob(me);
 target->delete_temp("follow");
		}
		else
		{ 
target->start_busy(3);
		environment(me)->delete_temp(myhole);
		}
	}
        else
        message_vision(CYN + @STRING
$n�����ſ죬�㿪��$N�����µ����塣
STRING + NOR,me,target );        
}
   me->start_busy(1);
        return 1;
}




