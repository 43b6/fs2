// c_build.c by ACKY

inherit F_CLEAN_UP;
#include <ansi.h>

int get_value( string filename )
{
	int i, n, t;
	string *strs, file;

	file = read_file(filename);
	strs = explode( file, "\n" );
	t = sizeof(strs);
	for( i=0; i<t; i++ )
		if( strsrch( strs[i], "\"build\"" ) != -1 ) break;
	if( i==t ) return 0;
	sscanf( strs[i], "\tset( \"build\", %d );", n );
	return n;
}

void add_value( string filename, int value )
{
	int i, n, t;
	string *strs, file;

	file = read_file(filename);
	strs = explode( file, "\n" );
	t = sizeof(strs);
	n = get_value(filename) + value;

	for( i=0; i<t; i++ )
		if( strsrch( strs[i], "\"build\"" ) != -1 ) break;
	if( i==t ) {
		for( i=0; i<t; i++ )
			if( strsrch( strs[i], "\"short\"" ) != -1 ) break;
		strs[i] += "\n\tset( \"build\", " + n + " );";
	}
	else
		strs[i] = "\tset( \"build\", " + n + " );";

	file = implode( strs, "\n" ) + "\n";
	write_file( filename, file, 1 );
}

int check( object obj )
{
	if( obj->is_character() || obj->is_corpse() )
		return notify_fail( "ֻ��ʹ����Ʒ��\n" );
	return 1;
}

void delay_build( object me )
{
	if(!me) return;
	me->delete_temp("c_build");
}

int main( object me, string arg )
{
	string filename, short, name, material;
	object env, obj;
	int i, build, value;

	seteuid(getuid());

	if( !me->query("clan") )   return 0;

	env = environment(me);
	filename = base_name(env) + ".c";
	short = trans_color(env->short());
	build = get_value(filename);

	if( !arg ) {
		if( !CLAN_D->is_clan_room(me) && !wizardp(me) )
			return notify_fail( "�����򲢷Ǳ����������̡�\n" );
		if( build > 10000 )
			write( short + "�ѽ�����ɡ�\n" );
		else
			write( short + "������ɶ� " + build*100/10000 + "%��\n" );
		return 1;
	}

	obj = present( arg, me );
	if( !obj ) obj = present( arg, env );
	if( !obj ) return notify_fail( "�޴���Ʒ��\n" );
	if( !check( obj ) )
		return 0;

	switch( material= obj->query("material") )
	{
	case "crimsonsteel"	: value = 27;	name = "����";	break;
	case "blacksteel"	: value = 24;	name = "����";	break;
	case "gem"		: value = 21;	name = "��ʯ";	break;
	case "gold"		: value = 18;	name = "��";	break;
	case "silver"		: value = 15;	name = "��";	break;
	case "steel"		: value = 12;	name = "��";	break;
	case "copper"		: value =  9;	name = "ͭ";	break;
	case "iron"		: value =  6;	name = "��";	break;
	case "wood"		: value =  3;	name = "ľͷ";	break;
	default			: value =  1;	name = "NONE";
	}

	value += obj->query("value")/100000;	// 1000 = NT$1000
	value += obj->weight()/5000;		// 5000 = 1kg

	if( value > 100 )
		return notify_fail( "�鷳���֪ wiz: ACKY, c_build " + obj->short() + " ʱ, �������⡣\n" );

	if( stringp(obj->query_autoload()) )
		return notify_fail( "��" + obj->short() + "���Űɡ�\n" );

	if( obj->query_autoload() ) {
		write( "���ѵ�, �����۾��������, " + obj->short() + "���ǵ������׵�ϡ���䱦ѽ��\n" );
		me->do_command( "roll" );
		return 1;
	}

	if( env->query("c_bm") == material )
		return notify_fail( "���ò�ͬ���ʵĽ��İɡ�\n" );

	if( me->query_temp("c_build") > 2 )
		return notify_fail( "������, ��Ϣһ�°ɡ�\n" );

	if( me->query("food") < 1 )
		return notify_fail( "����ȫ������, �ȳԱ���˵�ɡ�\n" );
	me->add( "food", -1 );

	if( name == "NONE" )
		message_vision( HIY"$N����һ" + obj->query("unit") + "$n"HIY"���ô��, ����Ŭ������"
			+ short + HIY"��\n"NOR, me, obj );
	else
		message_vision( HIY"$N����һ" + obj->query("unit") + "��" + name + "�Ƴɵ�$n"HIY"���ô��, ����Ŭ������"
			+ short + HIY"��\n"NOR, me, obj );

	me->add_temp( "c_build", 1 );
	call_out( "delay_build", 2, me );
	destruct(obj);
	if( random(3)==1 )
		material = env->query("c_bm");
	if( material )	env->set( "c_bm", material );
	else		env->set( "c_bm", "unknown" );
	add_value( filename, value );
	if( wizardp(me) )
		write( "����̶�: " + build + " + " + value + " = " + (build+value) + "\n" );

	return 1;
}

int help( object me )
{
	write( @HELP
����ָ��: c_build ��������

	c_build
		��ʾ����״����

	c_build <��Ʒ>
		����Ʒ��������

	����ѡ�ü�ֵ�ϸ�, ���ʽϺ�, �������ص���Ʒ, ����Ч����Խϸߡ�

                                                by ACKY 08/17/2000
HELP);
        return 1;
}
