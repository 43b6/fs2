// love water by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIW"��Һ"NOR, ({ "love water", "water" }) );
	set( "long", "����İ�Һ, ��Ȼֻ��һС��, ȴ�������������ߵ�!" );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 1 );
		set( "unit", "��" );
	}
	setup();
}


void init()
{
	if( !present( this_object(), this_player() ) )
		return;
	add_action( "do_drink", "drink" );
}

int do_drink( string arg )
{
	object	me, ob;
	string	str;

	if( !arg || sscanf( arg, "%s", str ) != 1 )
		return 0;
	if( str != "water" )
		return 0;

	me = this_player();
	ob = this_object();
	
	if( me->query("age") < 18 )
		return notify_fail( "δ���겻��������ࡣ�\n" );

	message_vision( "$N��" + ob->name() + "������ȥ��\n", me );
	if( me->query("gender")=="Ů��" ) {
		message_vision( HIM"$N����!����һ��, �������ء�\n"NOR, me );
		me->set( "gin", 1 );
		me->set( "kee", 1 );
		me->set( "sen", 1 );
		me->set( "water", 0 );
	}
	else {
		message_vision( HIM"$N����!����һ��, �о�����ٱ���\n"NOR, me );
		me->set( "water", me->max_water_capacity() );
		if( me->query("eff_gin") < me->query("max_gin") )
			me->add( "eff_gin", 10 + random(11) );
		if( me->query("eff_gin") > me->query("max_gin") )
			me->set( "eff_gin", me->query("max_gin") );
		if( me->query("eff_sen") < me->query("max_sen") )
			me->add( "eff_sen", 10 + random(11) );
		if( me->query("eff_sen") > me->query("max_sen") )
			me->set( "eff_sen", me->query("max_sen") );
	}
	destruct(ob);
	return 1;
}		
