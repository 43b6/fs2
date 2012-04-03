// c_store.c by ACKY
// ��Ʒ set( "no_save", 1 ); �޷�����

inherit F_CLEAN_UP;
#include <ansi.h>
#include <clanf.h>

int check( object obj )
{
	if( obj->is_character() || obj->is_corpse() )
		return notify_fail( "ֻ�ܴ�����Ʒ��\n" );
	if( obj->query("no_save") )
		return notify_fail( "����Ʒ���趨Ϊ�޷����档\n" );
	if( obj->query_autoload() )
		return notify_fail( "����Ʒ�����Զ�����Ĺ��ܡ�\n" );
	return 1;
}

int do_store( object me, object obj )
{
	int i, a, b, amount, *n, max;
	string save, filename, file, *strs, str="", *k, *v;
	object env;

	env = environment(me);
	filename = base_name(env) + ".c";
	file = read_file(filename);
	if( !amount = obj->query_amount() )
		amount = 1;
	max = "/cmds/clan/c_take.c"->build(C_BUILD->get_value(filename));
	if( max < 1 )
		return notify_fail( "���Ƚ�������(c_build)��\n" );

	for( i=1; i<max+1; i++ ) {
		if( save = env->query( "object/file" + i ) )
			continue;
		env->set( "object/file" + i, base_name(obj) );
		env->set( "object/amount" + i, amount );
		message_vision( HIY"$NС������ؽ�һ" + obj->query("unit") + "$n"HIY"�ղ�������\n"NOR, me, obj );
		destruct(obj);

		k = keys(env->query("object"));
		v = values(env->query("object"));
		for( i=0; i<sizeof(k); i++ )
			str += sprintf("\t\t\"%-9s : %O,\n", k[i]+"\"", v[i] );
		strs = explode( file, "\n" );
		for( i=0; i<sizeof(strs); i++ )
			if( strsrch( strs[i], "\"object\"" ) != -1 ) break;
		if( i==sizeof(strs) ) {
			for( i=0; i<sizeof(strs); i++ )
				if( strsrch( strs[i], "\"short\"" ) != -1 ) break;
			file = implode( strs[0..i], "\n" ) + "\n" +
				"\tset( \"object\", ([\n" + str + "\t]) );\n" +
				implode( strs[i+1..<0], "\n" ) + "\n";
		}
		else {
			for( i=0; i<sizeof(strs); i++ )
				if( strsrch( strs[i], "\"object\"" ) != -1 ) { a = i; break; }
			for( i=0; i<sizeof(strs); i++ )
				if( strsrch( strs[i], "]) );" ) != -1 && i > a ) { b = i; break; }
			file = implode( strs[0..a], "\n" ) + "\n" +
				str +
				implode( strs[b..<0], "\n" ) + "\n";
		}
		write_file( filename, file, 1 );
		C_ROOM->update_keep( filename );
		return 1;
	}
	return notify_fail( "�Ѵ�����򴢴�����, �����" + CHINESE_D->chinese_number(max) + "����Ʒ��\n" );
}

int main( object me, string arg )
{
	int amount, i, j;
	string item, list, unit;
	object env, obj, obj2;

	seteuid(getuid());
	if( !me->query("clan") ) return 0;
	env = environment(me);
	if( env->query("owner") != me->query("id") && !wizardp(me) )
		return notify_fail( "�˴�������������\n" );
	if( !arg ) {
		if( !env->query("object") )
			return notify_fail( "�˴���δ�����κ���Ʒ��\n" );
		"/cmds/clan/c_take.c"->list(me);
		return 1;
	}

	if( sscanf( arg, "%d %s", amount, item ) == 2 ) {
		obj = present( item, me );
		if( !obj ) obj = present( item, env );
		if( !obj ) return notify_fail( "�޴���Ʒ��\n" );
		if( !check( obj ) )
			return 0;
		if( !obj->query_amount() )
			return notify_fail( obj->name() + "���ܱ��ֿ���\n" );
		if( amount < 1 )
			return notify_fail( "��Ŀ������һ" + obj->query("unit") + "��\n" );
		if( amount > obj->query_amount() )
			return notify_fail( "����û����ô���" + obj->name() + "��\n" );
		if( amount == obj->query_amount() ) {
			return do_store( me, obj );
		}
		else {
			obj->set_amount( obj->query_amount() - amount );
			obj2 = new(base_name(obj));
			obj2->set_amount(amount);
			return do_store( me, obj2 );
    		}
	}

	obj = present( arg, me );
	if( !obj ) obj = present( arg, env );
	if( !obj ) return notify_fail( "�޴���Ʒ��\n" );
	if( !check( obj ) )
		return 0;
	return do_store( me, obj );
}

int help( object me )
{
	write( @HELP
����ָ��: c_store ������Ʒ���Լ�������

	c_store
		��ʾ���򴢴�״����

	c_store <��ƷID>
		������Ʒ���Լ�������

���ָ��: c_take, c_build
						by ACKY 08/17/2000
HELP);
	return 1;
}
