// By Swy ������� QC 98/6/20
#include <ansi.h>
int perform(object me,object target)
{
    int i,flag=0;
	object *all = me->query_enemy();
        if(!me->is_fighting())
		return notify_fail("�ճǼ�ֻ����ս����ʹ�á�\n");
	if( me->query("sen") < 5 )
		return notify_fail("��ľ��񲻹����У��޷�ʹ����ʮ���ơ�\n");
	if( me->query_skill("plan",1) < 30 )
		return notify_fail("���ı������������\n");
		if( all[i]->query_temp("empty")==1 )
			return notify_fail("��ͬ��ı�ԣ���ʹ�þ�ʧЧ�ˡ�\n");
    me->add("sen",-10);
// �������ŵĻ�....
        if( me->query("family/family_name") != "����")
    return notify_fail("�������������������֣���^_^\n");
		message_vision( HIC + @LONG
$Nʹ�ÿ�������֮�еĿճǼƣ�ʹ�з����ɣ�
LONG + NOR , me );
		for( i = 0 ; i < sizeof(all) ; i ++ ) 
		all[i]->set_temp("empty",1);
      for(i=0;i<sizeof(all);i++)
      {
      if(all[i]->query_temp("no_plan") || all[i]->query("no_plan"))
      {
    flag=1;
      message_vision("$N�ٺ�Ц��:����ʹ�ÿճǼ�???����,��������˰�!!\n",all[i]);
      all[i]->kill_ob(me);
      me->start_busy(2);
      }
      }
    if(!flag)
		me->remove_all_killer();
        return 1;
}

