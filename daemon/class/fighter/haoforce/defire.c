// defire.c
// �������˼����˵�condition by Chan Design
// ��ɽ��ר��
#include <ansi.h>
int exert(object me)
{
  int need;
  if(me->query_skill("force")/2+me->query_skill("haoforce", 1)<120)
   return notify_fail(HIW"��ĺ����ھ����ò�������޷������������ơ�\n"NOR);
  if( me->is_fighting() )
    return notify_fail(HIW"ս����ûʱ��������ơ�\n"NOR);
  if(me->query("family/family_name")!="��ɽ��")
    return notify_fail(HIW"ֻ����ɽ���Ӳ��ܵ������ϵ�����\n"NOR);
  if( (string)me->query_skill_mapped("force") != "haoforce")
    return notify_fail(HIW"��û��ʹ�ú����ķ���Ҫ��ô����������!!!\n"NOR);
  if((int)me->query("kee")<200 || (int)me->query("sen")<90 )
    return notify_fail("�������ע�����������޷�ȫ�ĵ������ơ�\n");
  if((need=me->query_condition("burn")*100)!=0)
  {
     if((int)me->query("force")< need)
      {
       message_vision(
       HIW"$Nϯ�ض���,ǿ����������ķ�����������������!!������������,����Ⱦ�����,�����������ϵ�����\n"NOR, me);
       me->add("force",-need);
       me->apply_condition("burn", 15);
       me->add("kee",-200);
       return notify_fail(HIR"��о���ͷһ��!!!����һ����Ѫ����!!��\n"NOR);
      }
     message_vision(
     HIW"$Nϯ�ض���,��������ķ�һ�������ھ��ӵ�������ȫ��,�����ܵ�������ȫ�Ƴ������ˡ�\n"NOR, me);
     me->add("force", -need);
     me->apply_condition("burn", 0);
  }
  else if((need=me->query_condition("cold")*130)!=0)
  {
     if((int)me->query("force")< need)
      {
       message_vision(
       HIW"$Nϯ�ض���,ǿ����������ķ����������ڵ�ѩ�Ժ���!!������������,��ɺ��˼��ٶ�,�����������ϵĺ���\n"NOR, me);
       me->add("force",-need/2);
       me->apply_condition("cold", 15);
       me->add("kee",-200);
       return notify_fail(HIR"��о���ͷһ��!!!����һ����Ѫ����!!��\n"NOR);
      }
     message_vision(
     HIW"$Nϯ�ض���,��������ķ�һ�������ھ��ӵ�������ȫ��,˫��ɢ��˿˿����,�㽫�󲿷ݵĺ����Ƴ������ˡ�\n"NOR, me);
     me->add("force", -need/2);
     me->apply_condition("cold",0);
  }
 else
    return notify_fail("�㲢���ܺ��˻�����,���Բ��õ�������!!!��\n");
    return 1;
}
