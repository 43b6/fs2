// defire.c
// �������˼����˵�condition by Chan Design
// ѩ����ר��
#include <ansi.h>
int exert(object me)
{
  int need;
if(me->query_skill("force")/2+me->query_skill("snowforce", 1) < 120)
   return notify_fail(HIW"���ѩ�Ժ������ò�������޷������������ơ�\n"NOR);
  if( me->is_fighting() )
    return notify_fail(HIW"ս����ûʱ��������ơ�\n"NOR);
  if(me->query("family/family_name")!="ѩ����")
    return notify_fail(HIW"ֻ��ѩ�Ե��Ӳ��ܵ������ϵ�����\n"NOR);
  if( (string)me->query_skill_mapped("force") != "snowforce")
    return notify_fail(HIW"��û��ʹ��ѩ���ڹ���Ҫ��ô����������!!!\n"NOR);
  if((int)me->query("kee")<200 || (int)me->query("sen")<90 )
    return notify_fail("�������ע�����������޷�ȫ�ĵ������ơ�\n");
  if((need=me->query_condition("cold")*100)!=0)
  {
     if((int)me->query("force")< need)
      {
       message_vision(
       HIW"$Nϯ�ض���,ǿ������ѩ���ķ������������ߺ���!!��������������,��ɺ�������,�����������ϵĺ���\n"NOR, me);
       me->add("force",-need);
       me->apply_condition("cold", 15);
       me->add("kee",-200);
       return notify_fail(HIR"��о����ﱻ��������,���絶��һ��!!��\n"NOR);
      }
     message_vision(
     HIW"$Nϯ�ض���,����ѩ���ķ�һ�����������ӵ�������ȫ��,�����ܵĺ�����ȫ�����ˡ�\n"NOR, me);
     me->add("force", -need);
     me->apply_condition("cold", 0);
  }
  else if((need=me->query_condition("burn")*130)!=0)
  {
     if((int)me->query("force")< need)
      {
       message_vision(
       HIW"$Nϯ�ض���,ǿ������ѩ���ķ����������ڵĺ�������!!������������,����Ⱦ�����,�����������ϵ�����\n"NOR, me);
       me->add("force",-need/2);
       me->apply_condition("burn", 15);
       me->add("kee",-200);
       return notify_fail(HIR"��о���ͷһ��!!!����һ����Ѫ����!!��\n"NOR);
      }
     message_vision(
     HIW"$Nϯ�ض���,����ѩ���ķ�һ�������ھ��ӵ�������ȫ��,ͷ��ɢ��˿˿����,�㽫�󲿷ݵ��Ⱦ��Ƴ������ˡ�\n"NOR, me);
     me->add("force", -need/2);
     me->apply_condition("burn",0);
  }
 else
    return notify_fail("�㲢���ܺ��˻�����,���Բ��õ�������!!!��\n");
    return 1;
}
