// sex box by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIR"��Ȥ���"NOR, ({ "sex box", "box" }) );
	set( "long", HIM"����װ��ȫ����Ȥ��Ʒ(open box)��"NOR );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 1000 );
		set( "unit", "��" );
		set( "value", 1000000 );
	}
	setup();
}


void init()
{
	if( !present( this_object(), this_player() ) )
		return;
	add_action( "do_open", "open" );
}

int do_open( string arg )
{
	object	me, ob, sex;
	string	str;

	if( !arg || sscanf( arg, "%s", str ) != 1 )
		return 0;
	if( str != "box" )
		return 0;

	me = this_player();
	ob = this_object();
	
	if( me->query("gender")=="����" ) {
		sex = new("/open/clan/area/home/sex1");
		if( ob->query("male")==1 )
			return notify_fail( ob->name() + "���"+ sex->name() + "�ѱ����߆���\n" );
		message_vision( "$N��" + ob->name() + "�ó�һ" + sex->query("unit") + sex->name() + "��\n", me );
		ob ->set( "male", 1 );
		sex->move(me);
	}
	else {
		sex = new("/open/clan/area/home/sex2");
		if( ob->query("female")==1 )
			return notify_fail( ob->name() + "���"+ sex->name() + "�ѱ����߆���\n" );
		message_vision( "$N��" + ob->name() + "�ó�һ" + sex->query("unit") + sex->name() + "��\n", me );
		ob ->set( "female", 1 );
		sex->move(me);
	}
	return 1;
}

