#include <ansi.h>
// by sueplan �ž���
// busy��
int perform(object me,object target)
{
	int i, dec;
        object *all = me->query_enemy();

        if(!me->is_fighting())
        return notify_fail("ֻ����ս����ʹ�á�\n");
        if( me->query("sen") < 100 )
		return notify_fail("��ľ��񲻹����޷�ʹ�á�\n");
// ��������
        if( me->query("family/family_name") != "����")
        return notify_fail("�������������������֣���^_^\n");
   if(all[i]->is_busy())
     return notify_fail("�����������ı����,��û�������!\n");
        me->add("sen",-20);
        me->add("force",-50);
   for( i = 0 ; i < sizeof(all) ; i ++ )
   {
      if(all[i]->query_temp("busy-plan")==3)
         return notify_fail("�˼�ֻ�ܶ�ͬһ��ֻ�������Ρ�\n");
      message_vision( HIY + @LONG
$Nʹ������������еļž���, $n������������Լ��Ѿ�����Σ��!!!
LONG + NOR , me , all[i] );
        all[i]->start_busy(4);
     all[i]->add_temp("busy-plan",1);
   }
      me->start_busy(1);
      return 1;
}

