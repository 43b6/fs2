#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(HIC"��ͷģ��"NOR,({"snake head","head","c-snake-1"}));
	set_weight(100);
	set("long","
����һ���ߵ�ͷ�����֣���Ƿȱ��������β���������(compose)
��һ���������ߡ�\n");
	set("unit","��");
	set("value",100);
setup();
}

void init()
{
add_action("do_compose","compose");
}

int do_compose()
{
object me,obj;

	me = this_player();

	if( !present("c-snake-1",me) || !present("c-snake-2",me) || !present("c-snake-3",me) )
		return 0;

	message_vision(HIY"$N����ͷ���������ڽ���βװ�ϣ�һ���������߾���װ���ˡ�\n"NOR,me);
	obj = new(__DIR__"snake-key-2");
	obj->move(me);
	destruct(present("c-snake-2",me));
	destruct(present("c-snake-3",me));
	destruct(present("c-snake-1",me));
return 1;
}
		
