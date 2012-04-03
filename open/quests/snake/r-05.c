inherit ROOM;
#include <way.c>

void create()
{
	set("short","��կ ������");
	set("long",@LONG
����һ�����С���ܱտռ䣬����Կ���������һ�����͵���
�Σ��������˵����կկ�����������ƺ����Ե��е�С�����������
�����Ļƽ����鱦�����������Ƿ��ñ���ĵط���
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/snake_soldier":3,
]));
	set("exits",([
"east":__DIR__"r-17",
"west":__DIR__"r-21",
"north":__DIR__"r-19",
]));
	setup();
}

void init()
{
add_action("do_search","search");
add_action("do_turn","turn");
}

int do_search()
{
object me = this_player();

	tell_object(me,"����ϸ�������Ÿ��������������������һ�����͵�ת�֡�\n");
	me->set_temp("snake/search",1);
return 1;
}

int do_turn()
{
object me;

	me = this_player();

	me->delete_temp("snake/search");
	tell_object(me,"�㳢����ת������ת�֣���������˻��ء�\n");
	message_vision("$Nת��������!!\n",me);
	me->move(__DIR__"r-04");
return 1;
}
	