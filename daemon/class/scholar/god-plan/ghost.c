#include <ansi.h>
// By Swy ������� QC 98/6/20
int perform(object me,object target)
{
	int i, dec;
        object *all = me->query_enemy();

        if(!me->is_fighting())
                return notify_fail("ֻ����ս����ʹ�á�\n");
	if( me->query("sen") < 10 )
		return notify_fail("��ľ��񲻹����޷�ʹ�á�\n");
        if( me->query_skill("plan",1) < 30 )
		return notify_fail("���ı�Գ̶Ȳ�����\n");
      
 
 me->add("sen",-10);
// ��������
   if( me->query("family/family_name") != "����")
      return notify_fail("�������������������֣���^_^\n");
   for( i = 0 ; i < sizeof(all) ; i ++ )
   {
      if(all[i]->query_temp("ghost")==1)
         return notify_fail("��ͬһ��ֻ����һ�Ρ�\n");
      message_vision( RED + @LONG
$NͻȻ�ض�ʹ��$n�۵�֮�ƣ���$n��æ���Ҳ�֪���룡
LONG + NOR , me , all[i] );
      all[i]->start_busy(2);
      all[i]->set_temp("ghost",1);
   }
      me->start_busy(1);
      return 1;
}

