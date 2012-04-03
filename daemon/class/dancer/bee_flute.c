inherit COMBINED_ITEM;
#include <ansi.h>
void create ()
{
        set_name(HIY" �� �� "NOR,({"bee flute","flute"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else 
	{
                set("unit", "��");
                set("base_unit", "֦");
                set("value","10");
		set("long","һֻ�ɷ������Ƴ�ͭ��ɫ�ĵ���, �����ٻ��۷�����������ˡ�

ʹ�÷��� : attack <Ŀ��>\n");
        }
set_amount(1);
setup();
}

void init()
{
add_action("do_attack","attack");
}

int do_attack(string arg)
{
object me,ob,env,target;
string d_msg;
int i,sk,t_sk,limit;

	me = this_player();
	ob = this_object();
	env = environment(me);
	sk = me->query_skill("order-bee",1);

	if( !arg )
		return 0;
 	if( !present("bee flute",me) )
		return notify_fail("�����ҪЯ�������ϲ���ʹ�á�\n");

	if( !present(arg,env) )
		return notify_fail("���ʹ�÷��� : attack <Ŀ��> \n");

	target = present(arg,env);

	if( sk == 0 )
		return notify_fail("��������������������޷�˳���Ĵ����ѡ�\n");

	if( me->query("class") != "dancer" )
		return notify_fail("����ר���ķ�ѣ��㲢����ʹ�á�\n");

	if( me->query_temp("order_bee") )
		return notify_fail("�����㲻�ϵĴ����ţ�����Ѿ��޷���������ս���е��۷䡣\n");

	if( target->query("no_kill") || environment(target)->query("no_fight") )
		return notify_fail("�·���һ�����ص�������ֹ���㴵���ѡ�\n");

	if( target->is_corpse() || !target->is_character())
		return notify_fail("ֻ��һȺ�۷������"+target->name(1)+"֮�ϣ���û�в�ȡ�κι�����\n");

	if( !me->is_fighting() || !target->is_fighting() )
		return notify_fail("�۷��޷��жϵ��ˣ������ϵ��Ĵ��ҷ��С�\n");

	me->set_temp("order_bee",1);
	t_sk = (int)target->query_skill("dodge");
	if( t_sk == 0 )
		t_sk = 2;
	d_msg = HIW" ������ \n\n"NOR;
	i = random(100);

	if( random(sk) > random(t_sk) )
	{

		if( sk >= 60 && random(100) < 1 )
		{
			d_msg = d_msg + HIC+"����"+HIG+"�� "+HIM+"�� �� "+HIG+"��  "+HIC+"��"+HIG+"  ��  "+HIY+"��    ��    ƪ"+HIG+"  ��  "+HIW+"��\n\n"+NOR;
			if( i == 77 )
			{
				d_msg = d_msg + "     "+HIC+"	�� "+HIW+"	�� "+HIM+"	�� "+HIW+"	�� "+HIY+"	�� "+HIW+"	�� "+HIG+"	��     \n"NOR;
				limit = (int)target->query("max_kee")/10;
				if( limit < 1500 )
					limit = 1500;
			}
			if( 90 > i > 80 )
			{
				d_msg = d_msg + "     "+HIC+"	�� "+HIW+"	�� "+HIM+"	�� "+HIW+"	�� "+HIY+"	�� "+HIW+"	�� "+HIG+"	ħ     \n"NOR;
				limit = (int)target->query("max_gin")/10;
				if( limit < 800 )
					limit = 800;
			}
			if( 40 > i > 30 )
			{
				d_msg = d_msg + "     "+HIC+"	�� "+HIW+"	�� "+HIM+"	�� "+HIW+"	�� "+HIY+"	�� "+HIW+"	�� "+HIG+"	��     \n"NOR;
				limit = (int)target->query("max_sen")/10;
				if( limit < 500 )
					limit = 500;
			}
			if( i == 77 || i == 85 || i == 35 || i == 84 || i == 34 || i == 82 || i == 32 )
				d_msg = d_msg + HIY+"\n����һ���ȳɡ��޷�չ�������ҵĹ��ơ�\n"+NOR;
			else
			{
				d_msg = d_msg + HIR+"\n��ϧ��һ�߲�������ƫ�˼���������\n"+NOR;
				limit = (int)target->query("max_kee")/100;
				if( limit > 500 )
					limit = 500;
			}
			message_vision(HIW+"$N����$n"+d_msg+"\n"+NOR,me,target);
			target->receive_wound("kee", random(limit),me);
			COMBAT_D->report_status(target);
			call_out("do_dest",4,me);
			me->start_busy(1);
			return 1;
		}
		if( sk >= 30 && random(100) < 50 )
		{
			d_msg = d_msg + HIY+"����"+HIC+"�� ��  "+HIY+"��"+HIG+"     ��   "+HIW+"��   "+HIG+"��   "+HIW+"��   "+HIG+"��\n\n"+NOR;
			if( i >= 40 )
			{
				d_msg = d_msg +HIC"   ��   ��"+NOR;
				limit = (int)me->query("max_gin")/10;
				me->receive_curing("gin",random(limit));
				me->receive_heal("gin",random(limit));
			}
			if( i >= 70 )
			{
				d_msg = d_msg +HIY"   ��   ��"+NOR;
				limit = (int)me->query("max_kee")/10;
				me->receive_curing("kee",random(limit));
				me->receive_heal("kee",random(limit));
			}
			d_msg = d_msg +HIM"   ��   ��"+NOR;
			limit = (int)me->query("max_sen")/10;
			me->receive_curing("sen",random(limit));
			me->receive_heal("sen",random(limit));
			message_vision("$N��$n��ǰ�������Լ�"+d_msg+"\n"+NOR,me,target);
			COMBAT_D->report_status(me);
			call_out("do_dest",3,me);
			return 1;
		}
		d_msg = d_msg +HIM+"�F��"+HIY+"�� ����"+HIM+"��"+HIW+"	��     Ⱥ     ��     ��     ��\n\n"+NOR;
		limit = random(200)+sk;
		if( i > 70 )
		{
			d_msg = d_msg +HIM"   ��   ��"+NOR;
			target->receive_damage("gin",limit,me);		
		}
		if( i > 40 )
		{
			d_msg = d_msg +HIC"   ��   ��"+NOR;
			target->receive_damage("gin",limit,me);
		}
		d_msg = d_msg +HIY"   ��   ��"+NOR;
		target->receive_damage("kee",limit,me);
		message_vision(HIW+"$N����$n"+d_msg+"\n",me,target);
		COMBAT_D->report_status(target);
		call_out("do_dest",2,me);
		return 1;
	}
	else
	{
		message_vision(HIR+"$N"+HIR+"����$n"+HIR+"�����ŷ�ѣ���ϧ���޺������κε��۷������\n"NOR,me,target);
		call_out("do_dest",1,me);
	return 1;
	}
}

int do_dest(object me)
{
if(me)
me->delete_temp("order_bee");
}
