#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_FUNCTION;
inherit SSERVER;
void remove_effect (object me);
int fun;
int exert(object me, object target)
{
  int sk;
  sk=me->query_skill("iceforce",1);
  fun=me->query("functions/flyarrow/level");
  if (sk < 50)
  return notify_fail ("��ı��ľ���������ʮ�����޷�ʹ���������С�\n");
  if(me->query("family/family_name")!="������") 
  return notify_fail("�㲻�������ɵ���, �޷�ʹ����������");
  if (me->query ("force") < 200)
  return notify_fail ("����������㣬�޷�ʹ���������С�\n");
  if (me->query_temp ("flyarrow")==1)
  return notify_fail ("���Ѿ������������ˡ�\n");
  if(fun<=70)
  {
  me->set("title",HIW"������"NOR);
  }
  if(fun>=71)
  {
  me->set("title",HIC"��"HIR"��������"HIC"��"NOR);
  }
if(fun>=71)
{
message_vision (  HIC"$Nʩչ"HIW"��"HIR"��Զ����"HIW"��"HIC"�����ڼ�Ԧ�ļ����仯��ǧ��\n"NOR, me);
      me->add("force",-150);
      me->set_temp ("sort1", 1);
      me->set_temp ("flyarrow", 1);
      me->add_temp ("apply/dodge",  60);
      me->add_temp ("apply/attack", 60);
      me->start_call_out((: call_other, __FILE__, "remove_effect", me :), fun+20);
} else if(fun>=36&&fun<=70)
{
message_vision (  HIC"$Nʩչ"HIW"��"HIR"�����鰶"HIW"��"HIC"����ʱ��ɳ��ʯ����������ӭ����ϡ� \n"NOR, me);
      me->add("force",-150);
      me->set_temp ("sort1", 2);
      me->set_temp ("flyarrow", 1);
      me->add_temp ("apply/dodge",  40);
      me->add_temp ("apply/attack", 40);
      me->start_call_out((: call_other, __FILE__, "remove_effect", me :), fun+20);
} else 
{
message_vision (  HIC"$Nʩչ"HIW"��"HIR"���η���"HIW"��"HIC"������ɢ��������̣�������$N��\n"NOR, me);
      me->add("force",-150);
      me->set_temp ("sort1", 3);
      me->set_temp ("flyarrow", 1);
      me->add_temp ("apply/dodge",  20);
      me->add_temp ("apply/attack", 20);
      me->start_call_out((: call_other, __FILE__, "remove_effect", me :), fun+20);
}
return 1;
}

void remove_effect (object me)
{
  fun=me->query("functions/flyarrow/level");
  if (me->query_temp ("sort1")==1)
  {
  me->add_temp ("apply/dodge",  -60);
  me->add_temp ("apply/attack", -60);
  }
else if (me->query_temp ("sort1")==2)
  {
  me->add_temp ("apply/dodge",  -40);
  me->add_temp ("apply/attack", -40);
  }
else
  {
  me->add_temp ("apply/dodge",  -20);
  me->add_temp ("apply/attack", -20);
  }
  me->delete_temp("flyarrow");
  tell_object (me, HIW"��е�����������ɢ�ˡ�\n"NOR);
  if(fun < 100)
  function_improved ("flyarrow",random(500));
}

