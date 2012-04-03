#include <ansi.h>

void init()
{
add_action("do_find","find_hole");
}

int do_find()
{
object me = this_player();
int kar,str;

	kar = (int)me->query("kar");
	str = (int)me->query("str");

	me->delete_temp("evil/water/climb");

	if( kar < random(50) )
		return notify_fail("�㲻�ϵ�Ѱ����̤�ŵ㣬���������ƺ��Ҳ�����\n");

	tell_object(me,"������Ѳ�Ӻ��ҵ���һ��̤�ŵ㡣\n");

	if( str < random(50) )
		return notify_fail("����λ���ƺ��е�Զ��������������������ܻ��޷�ʩ��������ȥ��\n");

	me->set_temp("evil/water/climb",1);
	tell_object(me,"��������һ�£�Ӧ�ÿ���˳��������ȥ��\n");
return 1;
}		
	

int valid_leave(object me,string dir)
{
	if( dir == "up")
	{
		if( !me->query_temp("evil/water/climb") )
		{
			message_vision("$NŬ����������ȥ������ȴ��С�ĵ�ûץ�����ɡ�\n",me);
			call_out("move",1,me);
			return notify_fail(HIY"�����롫������...:~...\n"NOR);
		}
	message_vision("$N˳����������ȥ��\n",me);
	me->delete_temp("evil/water/climb");
	}
	return 1;
}

int move(object me)
{

	me->move("/open/evil-area/water/b-20");
	me->receive_wound("kee",500);
	COMBAT_D->report_status(me,1);
	message_vision(HIR"\n$N���صĴ����ϵ����ڵء�\n"NOR);
}