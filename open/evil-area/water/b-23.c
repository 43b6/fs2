inherit ROOM;
#include <ansi.h>
int do_check();
int do_dest();

void create ()
{
	set("short",HIG"�� �� �� -- �� Ժ"NOR);
	set("long",@LONG
���Ϸ���һ���ߵ�ľͷ�������õĸ�ͷ������������ĵĻ���
����������(hold)��ͷ��Ȼ���ٴ����Ŀ�(cut)��ȥ��
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-20",
"east":__DIR__"b-24",
]));
	setup();
}

void init()
{
add_action("do_hold","hold");
add_action("do_cut","cut");
}

int do_hold()
{
object me;

	me = this_player();

	if( me->query_temp("evil/water/cut") )
		return notify_fail("���Ѿ��߾ٸ�ͷ�ˡ�\n");

	message_vision("$N�߾��Ÿ�ͷ��\n",me);
	if( random(50) > (int)me->query("str") )
	{
		message_vision("$N�����������������ӣ����еĸ�ͷ���ϵ��ڻζ���\n",me);
		me->set_temp("evil/water/cut",1);
	}
	else
	{
		message_vision("$N�����˸�ͷ���������У�ʮ�ֵ��Ƚ���\n",me);
		me->set_temp("evil/water/cut",2);
	}
return 1;
}

int do_cut()
{
object me,ob;
int i;

	me = this_player();

	if( !me->query_temp("evil/water/cut") )
		return 0;

	if( !present("burned-torch",environment(me)) )
	{
		me->delete_temp("evil/water/cut");
		return notify_fail("��������������еĸ�ͷ������...���ϲ�û��ľ�Ŀ����㿳��..\n");
	}

	message_vision("$N�������������еĸ�ͷ��\n",me);
	if( (int)me->query_temp("evil/water/cut") > 1 )
	{
		if( random(100) < 90 )
			me->set_temp("evil/water/cut_item",2);
		else
			me->set_temp("evil/water/cut_item",1);
	}
	else
	{
		if( random(100) < 10 )
			me->set_temp("evil/water/cut_item",2);
		else
			me->set_temp("evil/water/cut_item",1);
	}
	me->delete_temp("evil/water/cut");
	do_check();
return 1;
}

int do_check()
{
object obj,me;

	me = this_player();

	if( !me->query_temp("evil/water/cut_item") )
		return 0;
	if( (int)me->query_temp("evil/water/cut_item") > 1 )
	{
		message_vision("���$N��׼�Ľ�ľ���������롣\n",me);
		obj = new(__DIR__"obj/good_torch");
	}
	else
	{
		message_vision("���$N��С�Ĵ�ƫ�����ĵ㣬ľ�ı�İ��С�ġ�\n",me);
		obj = new(__DIR__"obj/bad_torch");
	}
	obj->move(environment(me));
	me->delete_temp("evil/water/cut_item");
	do_dest();
return 1;
}

int do_dest()
{
object me,obj;

	me = this_player();
	obj = present("burned-torch",environment(me));

	if( present("burned-torch",environment(me)) )
		destruct(obj);
return 1;
}
