#include <ansi.h>
#include <command.h>
inherit SSERVER;
inherit F_CLEAN_UP;
void remove_effect(object me);
int perform(object me, object target)
{
   if( target != me)
   return notify_fail("�˼�ֻ�ܶ��Լ��á�\n");
   if( me->is_fighting())
      return notify_fail("û��ˮ...������������...\n");

   if( me->query_temp("defense")==1)
      return notify_fail("���Ѿ���������, �������Ĳ�����...\n");

   if( me->query("sen") < 20 )
      return notify_fail("��ľ������������޷��üơ�\n");

   if( me->query_skill("plan", 1) < 50 )
      return notify_fail("���ı������������\n");
// ��������
   if( me->query("family/family_name") != "����")
    return notify_fail("�������������������֣���^_^\n");

   me->add("sen",-20);
   me->start_busy(2);           //������û�гɹ� �� delay ��˵....
   me->set_temp("defense", 1);
  me->add_temp("apply/defense", me->query_skill("god-plan",2));
me->start_call_out((:call_other,__FILE__,"remove_effect",me:),30);
message_vision(HIC"$Nʹ����ˮ����֮��, ��������, �����Լ������ݼ�����!!\n"NOR, me);
   return 1;
}
void remove_effect( object me)
{
  me->delete_temp("defense");
me->add_temp("apply/defense",-me->query_skill("god-plan",2));
  tell_object( me, "����...����...�����Ѿ�û������������...\n");
}
