#include <ansi.h>
// By Swy ������� QC 98/6/20
int perform(object me, object target)
{
   int i, test=0;
   object room;
   mixed count;

   if( !target)
      return notify_fail("��Ҫ��˭ʹ�ý赶ɱ��֮�ơ�\n");
// ��׼�����ʹ��
   if( userp(target))
      return notify_fail("���ж�����û�á�\n");

   if( me->query("sen") < 50 )
      return notify_fail("��ľ������������޷��üơ�\n");

   if( me->query_skill("plan",1) < 80 )
      return notify_fail("���ı������������\n");

// ����������ŵ�...hehe....
   if( me->query("family/family_name") != "����")
      return notify_fail("�������������������֣���^_^\n");

   me->add("sen",-30);
   me->start_busy(1);
// �жϼ�ı�Ƿ�ɹ�...
   if( 80 > random(100) )
   {
      room = environment( me);
// �������ڵ����� NPC ץ����...
      count = all_inventory( room );
      for( i=0; i< sizeof(count ); i++)
      {
// ������������й��յ�֮�Ƶ�, �Ϳ�ʼ�� target ����...
         if( count[i]->query_temp("follow") )
         {
           if(count[i]->query_temp("no_plan") || count[i]->query("no_plan"))
           {
           message_vision("$N��Ȼ������˵��,���Ҷ���ʹ�ü�ı,�������ǻ�����!!ȥ����!\n",count[i]);
           count[i]->kill_ob(me);
           me->start_busy(3);
           me->kill_ob(count[i]);
           }
           else{
            message_vision(HIW+ count[i]->query("name")+ "����$N�Ľ赶ɱ��֮��, ��ʼ��"+ target->query("name")+ "�������ҵĹ�����\n"NOR, me);
            count[i]->kill_ob( target);
            target->kill_ob( count[ i]);  
// �����ж��Ƿ����κε� NPC ����������, ��Ϊ 0 ���ʾ�����������й��յ�֮��...
            test++;
         }
      }
      if( test == 0)
         tell_object(me, "����Ҫ��˭֮��������ɱ"+ target->query("name")+ "��\n");
           }
   }

   else
   {
      room = environment( me);
// �������ڵ����� NPC ץ����...
      count = all_inventory( room );
      for( i=0; i< sizeof(count ); i++)
      {
// ������������й��յ�֮�Ƶ�, �Ϳ�ʼ�� me ����...
         if( count[ i]->query_temp("follow")==1 )
         {
            message_vision(HIW+ target->query("name")+ "ʶ����$N�ĵĽ赶ɱ��֮��, ��"+ count[ i]->query("name")+ "���ֳ��㷢�����ҵĹ��ơ�\n"NOR, me);
            count[i]->kill_ob( me);
// �����ж��Ƿ����κε� NPC ����������, ��Ϊ 0 ���ʾ�����������й��յ�֮��...
            test++;
         }
      }
      message_vision(HIW+ target->query("name")+ "ʶ����$N�ĵĽ赶ɱ��֮��, ���㷢�����ҵĹ��ơ�\n"NOR, me);
      target->kill_ob( me);
   }
   return 1;
}
