inherit ROOM;
#include <ansi.h>

void create()
{
	set("short","��կ ������");
	set("long",@LONG
����ڷ������Ļ�ѡ��ڻ�Ѱ�Χ�����룬��һ��΢΢͹���
ʯ�飬��ʯ��ı��߲�Զ����һ��ʯ�ţ�ʯ���Ͽ����ߵĵ���
LONG);
	set("item_desc",([
"���":"���ܵ��һ𲻶ϵ�ȼ���Ż�ѡ�\n",
"ʯ��":"ʯ�����ƺ��ܷ���ĳ����Ʒ...\n",
"��":"���ϵ�����ߵĻ��񣬲��ҽ����š�\n",
"ʯ��":"���ϵ�����ߵĻ��񣬲��ҽ����š�\n",
"door":"���ϵ�����ߵĻ��񣬲��ҽ����š�\n",
]));
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"r-42",
]));
	setup();
}

void init()
{
add_action("do_put","put");
add_action("do_enter","enter");
}

int do_put(string arg)
{
object me;

	me = this_player();

	if( !arg )
		return 0;
	if( arg != "snake statue" && arg != "statue" )
		return 0;

	if( !present("snake-key-2",me) )
		return notify_fail("�㳢���Ž��ߵ����\��ȥ��������С�ƺ���һ����\n");

	message_vision("$N˳���Ľ������\��ȥ��\n",me);
	call_out("door",3,me);
	destruct(present("snake-key-2",me));
return 1;
}

int door(object me)
{
	message_vision("�Ż����Ŀ����ˡ�\n",me);
	set("exits/north",__DIR__"r-44");
return 1;
}

int valid_leave(object me,string dir)
{
	if( dir == "north" )
	{
		message_vision(HIY"$Nһ̤���ż����ž��漴���ϡ�\n"NOR,me);
		delete("exits/north");
	}
return 1;
}