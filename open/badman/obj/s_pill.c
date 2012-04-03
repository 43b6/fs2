// s_pill.c by oda

#include </open/open.h>
#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("ҩ��", ({ "pill" }));
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "����һ�Ŵ�����ҽ�Ǳ�͵������ҩ�裬����ȥҲ����ʲô����Ĺ�Ч��\n");
		set("unit", "��");
		set("ʳ��", ([
                        // "ʣ" : 4,       // ���ԳԼ���
                        // "��Ӧ": 40,     // ÿһ������ӵ���
                        "���⺯��" : "do_eat",
                ]) );
	}
	setup();
}

int do_eat(object me, string arg)
{
	if( !arg || arg!="pill" )
		return 0;
	message_vision("$N����ҩ�裬�������߶�ʮһ�ľ����������̡�\n", me);
	tell_object(me, "��о���ȫ��ͻȻ��Ѫ���ڣ��ѵ�����ҩ�Ĺ�Ч����������һ���ӵĹ�����\n");
	this_object()->move(BAD_ROOM"temp");
	call_out("eat_pill", 3, me);
	return 1;
}

int eat_pill(object me)
{
	tell_object(me, "\n���ˣ���ô�о���̫�Ծ����ո��Ǹ�ҩ��....\n");
	tell_object(me,HIC"�����ˣ���ոճԵ��ǽ������������Ĵ�ҩ�������Ϻ�ɢ����\n"NOR);
	tell_object(me,HIC"\n��е�ȫ����Ѫ���ڣ�����ȫʧ��\n"NOR);
	me->set("force", 0);
	me->apply_condition("spring", 10);
	destruct(this_object());
	return 1;
}
