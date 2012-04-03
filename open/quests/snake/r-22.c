inherit ROOM;
#include <ansi.h>

void create()
{
	set("short","��կ ������");
	set("long",@LONG
������ǰ��һ�����͵����Σ��������ԽԱ�ʯ�ڸ���Χס������
�������ӵ����
LONG);
	set("item_desc",([
"����":"���ε����ֱ�����һ�����͵İ��ۣ���СԼ��������ࡣ\n",
"ʯ��":"ʯ���ϲ���ֵ��ע��ĵط���\n",
]));
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/hau_snake":1,
__DIR__"npc/snake_soldier":2,
]));
	set("exits",([
"south":__DIR__"r-19",
]));
	setup();
}

void init()
{
add_action("do_put","put");
}

int do_put(string arg)
{
object me,obj;

	me = this_player();

	if( !arg )
		return 0;
	if( arg != "snake gem" && arg!= "gem" )
		return 0;
	if( !present("snake-key-2",me) )
		return notify_fail("����ôװҲ�޷��������������ε����Ͱ����ڣ��ƺ����ϡ�\n");

	message_vision(HIY"$N�������������������ε�����ִ���

ͻȻ$N���µĵذ�̮����$Nһ��վ���ȣ�������ȥ��\n"NOR,me);
	destruct(present("snake-key-2",me));
	me->move(__DIR__"r-23");
	tell_room(__DIR__"r-23",HIY"������һ�����ƺ��ж�������������\n"NOR);
	obj=new(__DIR__"npc/obj/snake_gem");
	obj->move(environment(me));
return 1;
}