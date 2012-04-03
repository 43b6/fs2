inherit ROOM;
#include <ansi.h>
#include <tree.msg>

void create()
{
	set("short",HIG"�� �� �� -- "NOR+YEL"�� �� ��"NOR);
	set("long",@LONG
��ͻȻ�������ĳ�����������������������ķ羰��Ҳ��������
��а�飬����һ�ֻ�ɢ��������ζ������֬��һֻ��ȸ����һ������
���ǿ�Ҫ���ѵ���֦���������ţ�һ�����ص�ζ������ȸ�̲�ס����
�������֦���뿪����ô�������������ֻҪ�ڳ��������Ϳ��Խ�ľ
֦����(uproot)��������
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"b-40",
]));
	setup();
}

void init()
{
add_action("do_uproot","uproot");
}

int do_uproot()
{
object me,obj;
int str;

	me = this_player();
	str = (int)me->query("str");

	if( me->query_temp("evil/water/uproot") )
		return notify_fail("��֦�Ѿ��������ˣ�ֻ����һ�����ѵ����ɡ�\n");
	message_vision("$Nһʹ����������֦��������������\n",me);
	obj = new(__DIR__"obj/keep_bee");
	obj->move(me);
	tell_object(me,"���õ���һ��"+obj->name(1)+"��\n");
	me->set_temp("evil/water/uproot",1);
	if( str > random(50) )
	{
		message_vision("$N�ε�̫���������һ��С�ľ͵�����ȥ...\n",me);
		tell_object(me,HIY"�����룺����...:~...\n"NOR);
		me->move("/open/evil-area/water/b-20");
		me->receive_wound("gin",200);
		me->receive_wound("kee",300);
		me->receive_wound("sen",100);
		COMBAT_D->report_status(me,1);
		return 1;
	}
return 1;
}

