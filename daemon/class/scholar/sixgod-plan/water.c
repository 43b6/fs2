// by sueplan ��躾�ˮ���޸� 2000.7.26
// ��ı����  ������
//���͵�forceֵ�Ѿ�������(������Ŀǰ������ߵ�force����׼)
#include <ansi.h>
int perform(object me,object target)
{
    int i, k, j;
    object *all = me->query_enemy();
    object who = this_player();
    j = random(100);
    k = me->query_skill("force",1)*3;
    if(!me->is_fighting())
    return notify_fail("ˮ��ֻ����ս����ʹ�á�\n");
    if( me->query("sen") < 30 )
    return notify_fail("��ľ������������޷��üơ�\n");
    if( me->query_skill("plan") < 70 )
    return notify_fail("���ı������������\n");
    // ��������
    if( me->query("family/family_name") != "����")
    return notify_fail("�������������������֣���^_^\n");
    me->add("sen",-20);
    message_vision( HIB + @LONG
$Nʹ����������еľ�ˮ�ƣ�ֻ����ˮ���ͻ���բ���͵�$n����ǰ!!
LONG + NOR , me , all[i] );
    for( i = 0 ; i < sizeof(all) ; i ++ ) 
    {
         if(all[i]->query("no_water")>2)         message_vision( HIR "$n�ѿ���$N�Ĺ�ƣ�һ��ת���������κ�ˮ��\n"NOR,me,all[i]);
          if(all[i]->query("no_water")>2)  continue;
all[i]->add("no_water",1);
      if(random(100)<80)
      {
        if( j<61&&j>40)
        {
        message_vision( HIR + @LONG
$N��ˮ���˳���ش���$n����
$n��ʱ�������Ϻ�����������Ȼ�Ǵ�˵��ˮ���������ġ���  ˮ  �ơ�!
LONG + NOR , me , all[i] );
        all[i]->add( "force" ,-k*2);
            me->add("force",k*2/5);
        COMBAT_D->report_status( all[i] );
        }
        if( j<81&&j>60)
        {
        message_vision( HIR + @LONG
$N��ˮ���˳���ش���$n����
$n��ʱ�������Ϻ�����������Ȼ�Ǵ�˵��ˮ��ʮ�����ġ���  ˮ  �ơ�!
LONG + NOR , me , all[i] );
        all[i]->add( "force" ,-k*3);
            me->add("force",k*3/5);
        COMBAT_D->report_status( all[i] );
        }
        if( j<91&&j>80)
        {
        message_vision( HIR + @LONG
$N��ˮ���˳���ش���$n����
$n��ʱ�������Ϻ�����������Ȼ�Ǵ�˵��ˮ����ʮ�����ġ���  ˮ  �ơ�!
LONG + NOR , me , all[i] );
        all[i]->add( "force" ,-k*4);
            me->add("force",k*4/5);
        COMBAT_D->report_status( all[i] );
        }
        if( j>90)
        {
        message_vision( HIR + @LONG
$N��ˮ���˳���ش���$n����
$n��ʱ�������Ϻ�����������Ȼ�Ǵ�˵��ˮ����ʮ�����ġ�ˮ�;��ݳǡ�!
LONG + NOR , me , all[i] );
            me->add("force",k*5/5);
        all[i]->add( "force" ,-k*5);
        COMBAT_D->report_status( all[i] );
        }
        if( j<41)
        {
        message_vision( HIR + @LONG
$N��ˮ���˳���ش���$n����
$n��ʱ�������Ϻ�����������Ȼ�Ǵ�˵��ˮ��һ�����ġ���  ˮ  �ơ�!
LONG + NOR , me , all[i] );
            me->add("force",k/5);
        all[i]->add( "force" ,-k);
        COMBAT_D->report_status( all[i] );
      }
    }
    else 
    message_vision( HIC + @LONG$n�����Ʋ���ܵ��˸ߴ����ӹ���һ�٣�
LONG + NOR , me ,all[i] );
  }
  return 1;

}
