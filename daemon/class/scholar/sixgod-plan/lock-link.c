// By Swy ������� QC 98/6/20
// Modify by AceLan ���������� 99/04/05
#include <ansi.h>
int perform(object me,object target)
{
   int i;
   object *all = me->query_enemy();
   if(!me->is_fighting())
      return notify_fail("������ֻ����ս����ʹ�á�\n");
   if( me->query("sen") < 30 )
      return notify_fail("��ľ������������޷��üơ�\n");
   if( me->query_skill("plan",1) < 105 )
      return notify_fail("���ı������������\n");
   if(all[i]->query_temp("lock-link")==1)
   return notify_fail("�˼ƶ�ͬһ����ֻ����һ�Ρ�\n");
   if(all[i]->is_busy())
     return notify_fail("�����������ı����,��û�������!\n");
   me->add("sen",-20);
// ��������
   if( me->query("family/family_name") != "����")
      return notify_fail("�������������������֣���^_^\n");
    message_vision( HIB + @LONG
$Nʹ�ñ����е����������ƣ���ͼǣ�Ƶ��˵��ж���
LONG + NOR , me , target );
   for( i = 0 ; i < sizeof(all) ; i ++ ) 
   {
         message_vision( CYN + @LONG
$n����$N����������֮�ƣ��ж���ǣ��ס�ˣ�
LONG + NOR , me , all[i] );
         all[i]->start_busy(3);
         all[i]->set_temp("lock-link",1);
}
   me->start_busy(1);
   return 1;
}

