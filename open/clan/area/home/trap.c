// trap.c by ACKY

inherit ITEM;
#include <ansi.h>

void create()
{
	set_name( HIM"�����"NOR, ({ "trap bag", "trap", "bag" }) );
	set( "long", "��ë����������(setup)������������ع��߰���" );
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set( "weight", 5000 );
		set( "unit", "��" );
                set( "value", 1000000 );
                set( "use/1", 10 ); // ������
	}
	setup();
}

string long()
{
	string long, list, type;
        int i, n, o;

	list = "";
	long = "    ��ë����������(setup)������������ع��߰���\n";

	for( i=1; i<2; i++ )
		if( o = query( "use/" + i ) ) {
			switch(i) {
				case 1: type = "������"; break;
			}
			n++;
			list += "\t" + CHINESE_D->chinese_number(o) + "��" + type + "\n";
		}

	if(n)
		return long + "����װ��" + CHINESE_D->chinese_number(n) + "�ֻ������� -\n" + list;
	else
		return long + "�������һ�\n";
}

void init()
{
	add_action( "do_use", "setup" );
}

int do_use( string arg )
{
	object	trap, me, ob, env;
	int	type;

	if( !arg || sscanf( arg, "%d", type ) != 1 || type < 1 || type > 1 ) {
		write( @TRAP
	[1] ������
	[2] δ֪
	[3] δ֪
	[4] δ֪
	[5] δ֪
TRAP);
		return 1;
	}

	me = this_player();
	ob = this_object();
	env = environment(me);
	
	if( me->query("age") < 18 )
		return notify_fail( "δ���겻��ʹ�á�\n" );

	if( me->query("gin") > 200 )
		me->add( "gin", -random(100)-100 );
	else
		return notify_fail( "��ľ���������, ��Ϣһ�°ɡ�\n" );
	if( me->query("force") > 200 )
		me->add( "force", -random(100)-100 );
	else
		return notify_fail( "�������������, ��Ϣһ�°ɡ�\n" );
	trap = new( "/open/clan/area/home/trap_" + type );
	if( !query( "use/" + type ) )
		return notify_fail( trap->short() + "�ѱ��ù��ˡ�\n" );
	message_vision( HIY"$NС������ؽ�" + name() + HIY"���" + trap->name() + HIY"�ó�����װ��" + env->short() + HIY"��\n"NOR, me );
	call_out( "do_use_2", 10, me, trap, env );
	add( "use/" + type, -1 );
	return 1;
}

void do_use_2( object me, object trap, object env )
{
	if( env != environment(me) ) {
		message_vision( HIY"$N��װ" + trap->name() + HIY"ʧ�ܡ�\n"NOR, me );
		destruct(trap);
		return;
	}
	message_vision( HIY"$N�ɹ��ؽ�" + trap->name() + HIY"��װ��" + env->short() + HIY"��\n"NOR, me );
	trap->move(environment(me));
	trap->set( "name", me->short() + "װ���" + trap->name() );
	trap->set( "setup", 1 );
	trap->set( "maker", me->name() + "(" + me->query("id") + ")" );
	me->start_busy(5);
}

