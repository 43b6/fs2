// love potion by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIM"���봺ҩ"NOR, ({ "love potion", "potion" }) );
	set( "long", "һ��ǿЧ������, ��С��ʹ��(use potion), ����ˬ������ҲҪ�˺á�" );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 500 );
		set( "unit", "��" );
	}
	setup();
}


void init()
{
	if( !present( this_object(), this_player() ) )
		return;
	add_action( "do_use", "use" );
}

int do_use( string arg )
{
	object	me, ob;
	string	str;

	if( !arg || sscanf( arg, "%s", str ) != 1 )
		return 0;
	if( str != "potion" )
		return 0;

	me = this_player();
	ob = this_object();
	
	if( me->query("age") < 18 )
		return notify_fail( "δ���겻����ʹ��ࡣ�\n" );

	if( me->query("gender")=="Ů��" ) {
		if( me->query("gin") > 200 )
			me->add( "gin", -random(100)-100 );
		else
			return notify_fail( "���ľ���������, ��Ϣһ�°ɣ�\n" );
		if( me->query("force") > 200 )
			me->add( "force", -random(100)-100 );
		else
			return notify_fail( "��û������ο��, ��Ϣһ�°ɣ�\n" );
		if( ob->query("use")>100 )
			return notify_fail( ob->name() + "�ѱ����ù��ˣ�\n" );
		message_vision( HIY"$N��" + ob->name() + HIY"���浹��һ��ҩ��������ȥ, �۾�ͻȻ����������\n"NOR, me );
		message_vision( HIM"$N���������ȹ��, ��ʼ��ο��\n"NOR, me );
		call_out( "do_use_2", 5, me );
		ob->add( "use", 1 );
	}
	else
		return notify_fail( ob->name() + "��Ů�˲����õ�ร�\n" );
	return 1;
}

void do_use_2( object me )
{
	me->do_command( "say ��~ ��ʪ�~ �˼Ҳ�����~" );
	call_out( "do_use_3", 5, me );
}

void do_use_3( object me )
{
	object ob;
	me->do_command( "say ��~ �˼Ҳ�����~ Ҫȥ��Ҫȥ��~" );
	message_vision( HIY"$Nʪ��һ�ء�\n"NOR, me );
	ob = new("/open/clan/area/home/sex2_2");
	ob->set_name( HIW + me->name() + "�İ�Һ"NOR , ({ "love water", "water" }) );
	ob->move(environment(me));
}
