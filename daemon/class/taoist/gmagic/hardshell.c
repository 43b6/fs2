#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
void remove_effect (object me);
int conjure(object me, object target)
{
  int fun=me->query("spells/hardshell/level");
  if (!me->query("spells/hardshell/level"))
     return 0;
  if(me->query("class")!="taoist")
     return notify_fail ("ֻ�е�ʿ�������ַ�����\n");
  if (me->query ("atman") < 50)
     return notify_fail ("�����������!\n");
  if ((int)me->query_temp ("hardshell", 1))
     return notify_fail ("���Ѿ�ʹ��Ӳ���ˡ�\n");
if( me->is_fighting() ) me->start_busy(1); //ս����ʹ��busy һ��

  message_vision ("$Nʹ�����Ŷݼ��еġ�Ӳ�׻��塱\n",me);
  me->add ("atman", -50);

       
  message_vision (HIG"$N��Ƥ���𽥽��ʻ������������εĽ���Ӳ�ס�\n"NOR, me);
  me->set_temp ("hardshell", 1);
me->start_call_out((: call_other, __FILE__, "remove_effect",me:),fun+10);
  return 1;
}

void remove_effect (object me)
{ 
  me->delete_temp ("hardshell");
  tell_object (me, NOR"һ���ʹ�����Ƥ���ظ�ԭ������״�ˡ�\n"NOR);
        if( me->query("spells/hardshell/level") < 100 )
   spell_improved ("hardshell",random(700));
  if( me->query("kee") > 40)
   me->add("kee",-40);
  return;
}
