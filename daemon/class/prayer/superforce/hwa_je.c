#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
void remove_effect (object me);
int exert(object me, object target)
{
int fun,fun1,fun2,fun3,fun4,fun5;
fun=me->query("functions/hwa_je/level");
fun1=me->query("functions/black/level");
fun2=me->query("functions/bluesea/level");
fun3=me->query("functions/goldsun/level");
fun4=me->query("functions/blood/level");
fun5=me->query("functions/green/level");
if( fun1 < 50 ) return notify_fail ("���������ȼ����㡣\n");
if( fun2 < 70 ) return notify_fail ("��ĵ�׺��ȼ����㡣\n"); 
if( fun3 < 90 ) return notify_fail ("��Ľ��صȼ����㡣\n");  
if( fun4 < 110 ) return notify_fail ("���Ѫ�Եȼ����㡣\n");  
if( fun5 < 130 ) return notify_fail ("���������ȼ����㡣\n");
if(me->query("class")!="prayer")
          return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
  if (me->query ("force") < 50)
     return notify_fail ("�����������!\n");
  if ((int)me->query_temp ("hwa_je", 1))
     return notify_fail ("���Ѿ�ʹ�û����ˡ�\n");
  if(me->is_fighting() && !wizardp(me)) me->start_busy(1);
  message_vision ("$Nʹ���������еġ����١�\n",me);
  me->add ("force", -50);
  message_vision (HBRED+HIC"$N������ɢ����һ�����⣬���������㲼��������!!��\n"NOR, me);
  me->set_temp ("hwa_je", 1);
  me->start_call_out((: call_other, __FILE__, "remove_effect",me:),fun+10);
  return 1;
}
void remove_effect (object me)
{
  me->delete_temp ("hwa_je");
  tell_object (me, HBGRN+HIY"�������ԵĻ�����������ɢ�ڿ���֮����!!��\n"NOR);
  if( me->query("functions/hwa_je/level") < 100 )
     function_improved ("hwa_je",random(500));
  if( me->query("kee") > 40)
        me->add("kee",-40);
  return;
}
