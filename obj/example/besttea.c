// besttea.c by ACKY

#include <ansi.h>

inherit ITEM;
////inherit F_LIQUID;

int extra_func();
int drink_func();

void create()
{
	set_name("���Բ�", ({ "tea" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "long", "һ��������ʵ��ؼ����������衣\n" );
		set( "unit", "��" );
		set( "value", 1000 );
		set( "����", 20 );
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("Һ��", ([
		"����"		: "��",
		"����"		: "�ؼ�����������",
		"ʣ"		: 20,
		"ֹ��"		: 100,
		"����ѶϢ"	: (: drink_func :),
		"���⺯��"	: (: extra_func :)
	]) );
        setup();
}

int extra_func()
{
	if( !query("Һ��/ʣ") ) {
		write( "������Ѿ�����ȹ���, ���˾���ָ, ������÷��顣\n" );
		destruct( this_object() );
		return 1;
	}
	return 0;
}

int drink_func()
{
	object me = this_player();
	message_vision( HIC"$N�ó����Բ�, �ſ������˾�, һ��������ˮ�����$P����, ��, ����͸��������\n"NOR, me );
	return 1;
}
