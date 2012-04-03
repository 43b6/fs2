inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� �� -- �� Ժ"NOR);
	set("long",@LONG
���ʵ���գ��·��ܽ��ŵ�����ô�������������ˣ������
������ν֮���������������µĺۼ��Ѿ����ڠ��ǰ߲�������������
�����������Ҫ��(climb)����ô�������Ҫ���������(find_hole)
�����һ��ץ���ȣ����˸�����ʺ...�ǿ���Ļ�������...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-19",
"south":__DIR__"b-23",
"east":__DIR__"b-21",
]));
	setup();
}

void init()
{
add_action("do_climb","climb");
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
	

int do_climb()
{
object me;

	me = this_player();

	if( !me->query_temp("evil/water/climb") )
	{
		message_vision("$NŬ����������ȥ������ȴ��С�ĵĵ����ڵء�\n",me);
		me->receive_wound("kee",500);
		COMBAT_D->report_status(me,1);
		return notify_fail("���̲�ס�����а����ۡ�\n");
	}
	message_vision("$N˳����������ȥ��\n",me);
	me->delete_temp("evil/water/climb");
	me->move(__DIR__"b-28");
return 1;
}