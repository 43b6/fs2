// sex oil by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIG"��������"NOR, ({ "sex oil", "oil" }) );
	set( "long", "һƿǿ��׳��ҩˮ, ��С��ʹ��(use oil), ����ˬ������ҲҪ�˺á�" );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 500 );
		set( "unit", "ƿ" );
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
	if( str != "oil" )
		return 0;

	me = this_player();
	ob = this_object();
	
	if( me->query("age") < 18 )
		return notify_fail( "δ���겻����ʹ��ࡣ�\n" );

	if( me->query("gender")=="����" ) {
		if( me->query("gin") > 200 )
			me->add( "gin", -random(100)-100 );
		else
			return notify_fail( "��ľ���������, ��Ϣһ�°ɣ�\n" );
		if( me->query("force") > 200 )
			me->add( "force", -random(100)-100 );
		else
			return notify_fail( "��û������������, ��Ϣһ�°ɣ�\n" );
		if( ob->query("use")>100 )
			return notify_fail( ob->name() + "�ѱ����ù��ˣ�\n" );
		message_vision( HIY"$N��" + ob->name() + HIY"ͿĨ�ڴ������, �۾�ͻȻ����������\n"NOR, me );
		message_vision( HIM"$NѸ�����¿���, �ͳ��Ⱥ����Ĵ����, �����ش���ǹ����\n"NOR, me );
		call_out( "do_use_2", 5, me );
		ob->add( "use", 1 );
	}
	else
		return notify_fail( ob->name() + "�����˲����õ�ร�\n" );
	return 1;
}

void do_use_2( object me )
{
	me->do_command( "say �~ ����ˬ����!" );
	call_out( "do_use_3", 5, me );
}

void do_use_3( object me )
{
	object ob;
	me->do_command( "say �~ �~ ����ˬ����!" );
	message_vision( HIY"$N��������һ�ء�\n"NOR, me );
	ob = new("/open/clan/area/home/sex1_1");
	ob->set_name( HIW + me->name() + "�ľ�Һ"NOR , ({ "semen" }) );
	ob->move(environment(me));
}
