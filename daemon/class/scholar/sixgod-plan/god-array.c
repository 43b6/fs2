//������ʮ��������󷨼�
//�������ɽ��Ľ���һ����������������
//Ϊһ��ͬ���ǣ��ü��߲��������ս��
//ֻ�����Ա߹ۿ��������ʱ��ľ�ʦ
//ֻ���Ա߳����ԡ�
//
//
//���ݶ�Ϊ��
//
//���ɲ�����	������Ҫ����NPC ��������NPC �Ĺ�����������������
//����֮��	������Ҫ����NPC ��������NPC �Ĺ�����*2/3��������*3/2
//�ķ�֮��	������Ҫ�ĸ�NPC ��������NPC �Ĺ�����/2,������*2
//����֮��	������Ҫ���NPC ��������NPC �Ĺ�����=(������+������)�������� = 0

#include <ansi.h>
int perform(object me,object target)
{

  int i,m,k=0;
  int c=0;		// ������ who �ۼ���
  object room;
  mixed count,who;

  if( !target ) return notify_fail("��Ҫ��˭�ü� ?\n");
  if( userp(target) ) return notify_fail("���ж�����û�á�\n");
  if( me->query("sen") < 50 )
   return notify_fail("��ľ������������޷��üơ�\n");
  if( me->query_skill("plan") <= 70 )
   return notify_fail("���ı������������\n");
//  if( me->query_skill("god-plan") <= 70)
//   return notify_fail("��Կ����������˽ⲻ�����޷�ʹ�ô˼ơ�\n");
  if( me->query("family/family_name") != "����")
   return notify_fail("�������������������֣���^_^\n");
  if( me->is_fighting() )
   return notify_fail("��û��������\n");

  room = environment(me);
  count = all_inventory(room);
who=all_inventory(room);

  for(i=0;i<sizeof(count);i++)
  {
   if( count[i]->query_temp("follow")==1)      // ��������й� follow
{
     who[c++]= count[i];				// �� count ץ�����˷ŵ� who ����
   k=k+1;						// ԭ���� i ���ۼӣ������ who ������
}
  }

     if( k == 2 )
     {
      message_vision("\n$N��ȣ����ڽ������\n"+
      who[0]->query("name")+"��"+who[1]->query("name")+
      "\n�漴��\�������ɲ�����������"+target->query("name")+"ӭͷʹ����\n\n",me);
      who[0]->kill_ob(target);
      target->kill_ob(who[0]);
      who[1]->kill_ob(target);
      target->kill_ob(who[1]);
      target->start_busy(2);
     } else
     if( k == 3 )
     {
      message_vision("$N��ȣ����ڽ������\n"+
      who[0]->query("name")+"��"+who[1]->query("name")+"��"+who[2]->query("name")+
      "\n�漴��\��������֮�󡱣�����"+target->query("name")+"ӭͷʹ����\n\n",me);
      who[0]->kill_ob(target);
      target->kill_ob(who[0]);
      who[1]->kill_ob(target);
      target->kill_ob(who[1]);
      who[2]->kill_ob(target);
      target->kill_ob(who[2]);
      target->start_busy(3);
     } else
     if( k == 4 )
     {
      message_vision("$N��ȣ����ڽ������\n"+
      who[0]->query("name")+"��"+who[1]->query("name")+"��"+who[2]->query("name")+"��"+who[3]->query("name")+
      "\n�漴��\�����ķ�֮�󡱣�����"+target->query("name")+"ӭͷʹ����\n\n",me);
      who[0]->kill_ob(target);
      target->kill_ob(who[0]);
      who[1]->kill_ob(target);
      target->kill_ob(who[1]);
      who[2]->kill_ob(target);
      target->kill_ob(who[2]);
      who[3]->kill_ob(target);
      target->kill_ob(who[3]);
      target->start_busy(4);
     } else
     if( k == 5 )
     {
      message_vision("$N��ȣ����ڽ������\n"+
      who[0]->query("name")+"��"+who[1]->query("name")+"��"+who[2]->query("name")+"��"+who[3]->query("name")+"��"+who[4]->query("name")+
      "\n�漴��\��������֮�󡱣�����"+target->query("name")+"ӭͷʹ����\n\n",me);
      who[0]->kill_ob(target);
      target->kill_ob(who[0]);
      who[1]->kill_ob(target);
      target->kill_ob(who[1]);
      who[2]->kill_ob(target);
      target->kill_ob(who[2]);
      who[3]->kill_ob(target);
      target->kill_ob(who[3]);
      who[4]->kill_ob(target);
      target->kill_ob(who[4]);
      target->start_busy(4);
     } else
     if( k <= 1 && k > 5 )
     {
     return notify_fail("�����������λ��ٿ����У����������Ǣ���\n");
     }
  return 1;
}

