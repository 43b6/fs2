// By Swy ������� QC 98/6/20
#include <ansi.h>
int perform(object me,object target)
{
    	int i, dam;
 	object *all = me->query_enemy();
    	if(!me->is_fighting())
		return notify_fail("���ֻ����ս����ʹ�á�\n");
	if( me->query("sen") < 30 )
		return notify_fail("��ľ������������޷��üơ�\n");
	if( me->query_skill("plan") < 120 )
		return notify_fail("���ı������������\n");
	// ��������
   	if( me->query("family/family_name") != "����")
    		return notify_fail("�������������������֣���^_^\n");
    	me->add("sen",-20);

	me->start_busy(1);
	message_vision( HIR + @LONG
$Nʹ�ÿ�������֮�еĻ�ƣ���ʱ�ֳ�һƬ�Ĵ������������ .....
LONG + NOR , me , target );
	for( i = 0 ; i < sizeof(all) ; i ++ ) 
	{
if( 80 > random(100))
		{
			if( me->query("quest/gold-fire") && (me->query("combat_exp")>3000000))
			{
             dam=all[i]->query("max_kee")/3;
if(dam > 1000) dam=1000;
				message_vision( HIR + @LONG
$N��С�����һ��������߷١���ʹ���ں��˷���ħ�����𹦵����Ż��
ֻ����������ᴩ��$n�����Ѩ��������ش���
LONG + NOR , me , all[i] );
				all[i]->apply_condition("burn",30);  
all[i]->receive_wound( "kee" ,dam);
COMBAT_D->report_status( all[i] );
			}
			else
			{
        dam=all[i]->query("max_kee")/5;
        if(dam > 800) dam=800;
				message_vision( HIR + @LONG
$n���������ܣ���˱�$N�ų��˻��������ˣ�
LONG + NOR , me , all[i] );
				all[i]->apply_condition("burn",10);  
			all[i]->receive_wound( "kee" ,dam);
// ǿ���Ĺ���������delay���� by swy
// all[i]->start_busy(1);
			COMBAT_D->report_status( all[i] );
		}
			}
		else 
			message_vision( HIY + @LONG
$n�����Ʋ�����˿������ӹ���һ�٣�
LONG + NOR , me ,all[i] );
	}
	return 1;
}
