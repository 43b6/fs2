#include <ansi.h>
inherit F_SPELL;
int cast(object me,object target)
{   
   int mkee=me->query("max_kee");
   if(me->query("class") != "taoist")
         return notify_fail("�ⷨ��ֻ�е�ʿ�õĳ�������\n");
   if(!me->is_fighting(target))
         return notify_fail("Ѫ�鸿ֻ����ս����ʹ�á�\n");
   if(target->is_busy())
   return notify_fail("���� busy �С�\n");
   if( !me->query("spells/stopmove/level") )
         return 0;
   if(me->query("atman") < 300)
         return notify_fail("����������㡣\n");
   if(me->query("mana") < 300)
         return notify_fail("��ķ������㡣\n");
   me->start_busy(1);
   me->add("atman",-300);
   me->add("mana",-300);   
  if( mkee=mkee/5 > 100 )
  mkee = 120;
   me->add("kee",-mkee);
   message_vision(RED"\n\n$N���Լ�����Ѫ�������ܣ�$Nȫ��һʱ���Ѷ�������!!\n"NOR,me);
me->start_call_out((: call_other, __FILE__, "test2",me,target:),1);
  return 1;
}

void test2(object me,object target)
{
   if(!target) return;
   if( 80 > random(100) )
   {
     message_vision(HIG"\n\n\n���ܵ�Ѫ�����������𡫡���������\n\n"+
        "       �𽥻û��������������򸽽����˲�ȥ������\n\n\n"NOR,me);
     target->start_busy(3);
   }
    else {
      message_vision(HIW"\n$N���˰��죬���ʲô��Ҳû��������\n\n"NOR,me);
   }
  return;
}
