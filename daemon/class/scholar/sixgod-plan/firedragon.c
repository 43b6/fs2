// by sueplan ��躻������޸� 2000.7.26
//�����޸��������֮�������� 2000.8.25 by sueplan
#include <ansi.h>
int count;
int again(object me);
int perform(object me,object target)
{
        int i, dam, dam1, j;
        object *all = me->query_enemy();
        object who = this_player();
        count=0;
        if(me->is_busy()) 
        return notify_fail("���������޷��Ż����Ƶ�!!\n");
        if(!me->is_fighting())
        return notify_fail("���ֻ����ս����ʹ�á�\n");
        if( me->query("sen") < 50 )
        return notify_fail("��ľ������������޷��üơ�\n");
        if( me->query_skill("plan") < 120 )
        return notify_fail("���ı������������\n");
        //��������ô����ڽ�Ѩʱ�ǲ��ܷŵ�
        if(me->query_temp("big_fire"))
        return notify_fail("������ʩ�Ŵ���, ��ʱ�ǲ������ٷŻ����Ƶ�!!\n");
        // ��������
        if( me->query("family/family_name") != "����")
        return notify_fail("�������������������֣���^_^\n");
        me->add("sen",-20);
        me->start_busy(1);
        message_vision( HIR + @LONG
$Nʹ���������֮�еĻ�ƣ�ֻ����������������������ǰ .....
LONG + NOR , me , target );
  for( i = 0 ; i < sizeof(all) ; i ++ ) 
  {
  if( 80 > random(100))
  {
    if( me->query("quest/gold-fire") && (me->query("combat_exp")>5000000))
    {
      dam=who->query_skill("stabber")*10;
//һ��ppl��Լֻ�ᵽ2100 + weapon ֻ�ܵ�2200
      dam1 = dam;
      if(dam1>2500)
      dam1=2500;
      j=who->query_skill("plan",1)*3;
      message_vision( HIR + @LONG
$N��֪�����˼�֮Ҫ�������Ż���Լ���������д���֮�ƣ��Ͷ�Ϊһ$n��ʱ��������ҵ���Ҵܣ���Ȼ�ǳ��֮սʱ����֮����    ��    �ơ�!
LONG + NOR , me , all[i] );
      all[i]->apply_condition("burn",30);  
      all[i]->receive_wound( "kee" ,dam1);
      all[i]->receive_wound( "sen" ,j);
      all[i]->receive_wound( "gin" ,j);
      COMBAT_D->report_status( all[i] );
    }
    else
    {
       dam=all[i]->query("max_kee")/5;
       if(dam > 1000) dam=1000;
       message_vision( HIR + @LONG
$n���������ܣ���˱�$N�ų��˻��������ˣ�
LONG + NOR , me , all[i] );
       all[i]->apply_condition("burn",10);  
       all[i]->receive_wound( "kee" ,dam);
       COMBAT_D->report_status( all[i] );
     }
  }
  else 
  message_vision( HIY + @LONG
$n�����Ʋ�����˿������ӹ���һ�٣�
LONG + NOR , me ,all[i] );
  }
if (me->query("quest/gold-fire") && me->query("env/����"))
 {
  call_out("again",2,me);
}
  return 1;
}
//������set���ƻ���ֵ�����
//���ƻ�busy�Լ�4������pkla �˺�����̫��
//����������meq ���ܿ��Ա�Ѩ by sueplan
int again(object me)
{
        int i;
        object *all = me->query_enemy();
        count ++;
        if(count>4) 
        {
//�¼ӱ�������meq��Ѩ�󻹿��Է�
          me->delete_temp("big_fire");
          return 1;
        }
me->start_busy(1);
if (me->query("quest/gold-fire") && me->query("env/����"))
{
    if (me->query("bellicosity") < 500)
    {
    return 1;
    }
    me->set_temp("big_fire",1);
    me->add("bellicosity",-5);
//����temp
    message_vision( HIR + @LONG
$N��  : ��������ԣ��һ���� - ���ơ�һ���޴�Ļ�����������ǰչ��!!
LONG + NOR , me );
    for(i=0;i<sizeof(all);i++)
    {
        if(random(100) <80)
        {
        all[i]->receive_wound( "kee" ,700);
        all[i]->receive_wound( "sen" ,100);
        all[i]->receive_wound( "gin" ,100);
//�˾�������� 
//busy �Լ� 4����ǿ�ȵ���, ��Ȼû��busy(4)��ǿ�� by sueplan
        COMBAT_D->report_status( all[i] );

        } 
        else 
        {
        message_vision( HIY + @LONG
$n�����Ʋ�����˿������ӹ���һ�٣�
LONG + NOR , me ,all[i] );
        }
   }
  call_out("again",2,me);
//busy���������ʱ��, ���ڷŴ���ʱ�Լ��ǲ�����ֵ�
  }
return 1;
}

