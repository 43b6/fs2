// c_take.c by ACKY

inherit F_CLEAN_UP;
#include <ansi.h>
#include <clanf.h>
#define MAX 10

int build( int build )
{
	build /= 1000;
	if( build > MAX )
		build = MAX;
	return build;
}

void list( object me )
{
	int a, t, j, n, amount, max;
	string *v, *k, item, list, unit;
	object env;

	env = environment(me);
	k = keys(env->query("object"));
	v = values(env->query("object"));
	max = build(env->query("build"));
	if( max )
		list = sprintf( HIM" �� Ŀǰ�������Ʒ: "HIB"(�ռ� %d%%)\n\n"NOR, sizeof(k)*50 / max );
	else
		list = HIM" �� Ŀǰ�������Ʒ: "HIB"(û�п�λ�����Ʒ)\n\n"NOR;
	a = sizeof(k);
	for( t=0, j=0; t<a; t++ ) {
		if( sizeof(item=v[t]+".c") > 7 ) j++;
		else continue;
		sscanf( k[t], "file%d", n );
		amount = env->query( "object/amount" + n );
		if( amount == 1 ) unit = "";
		else		  unit = CHINESE_D->chinese_number(amount) + item->query("unit");
		list += sprintf( "   ("HIY"%2d"NOR") "HIC"%s"NOR"("HIG"%s"NOR")"NOR,
			j, unit + item->query("name"), item->query("id") );
		if( wizardp(me) )
			list += sprintf( " %2d: %s", t, item );
		list += "\n";
	}
	me->start_more(list);
}

int main( object me, string arg )
{
	int i, j, t, n, a, b, amount;
	string list="", item, filename, file, unit, *strs, *v, *k;
	object env, obj;

	seteuid(getuid());
	if( !me->query("clan") ) return 0;
	env = environment(me);
	if( env->query("owner") != me->query("id") && !wizardp(me) )
		return notify_fail( "�˴�������������\n" );
	if( !env->query("object") )
		return notify_fail( "�˴���δ�����κ���Ʒ��\n" );

	if( !arg ) {
		list(me);
		return 1;
	}

	k = keys(env->query("object"));
	v = values(env->query("object"));
	filename = base_name(env) + ".c";
	file = read_file(filename);

	if( sscanf( arg, "%d", n ) ) {
		a = sizeof(k);
		for( t=0, j=0; t<a; t++ ) {
			if( sizeof(item=v[t]+".c") > 7 ) {
				j++;
				if( n==j ) break;
			}
		}
		if( n != j )
			return notify_fail( "û��������Ʒ��\n" );
	}
	else {
		n = sizeof(k);
		for( t=0; t<n; t++ )
			if( sizeof(item=v[t]+".c") > 7 && item->query("id") == arg ) break;
		if( t==n )
			return notify_fail( "û��������Ʒ��\n" );
	}

	sscanf( k[t], "file%d", n );
	obj = new(item);
	if( obj->query_amount() )
		obj->set_amount( env->query( "object/amount" + n ) );
	obj->move(me);
	message_vision( HIY"$Nȡ��һ" + obj->query("unit") + "$n"HIY"��\n"NOR, me, obj );
	env->delete( "object/file" + n );
	env->delete( "object/amount" + n );
	strs = explode( file, "\n" );
	if( !sizeof(env->query("object")) ) {
		for( i=0; i<sizeof(strs); i++ )
        	        if( strsrch( strs[i], "\"object\"" ) != -1 ) break;
		file = implode( strs[0..i-1], "\n" ) + "\n" +
			implode( strs[i+4..<0], "\n" ) + "\n";
	}
	else {
		k = keys(env->query("object"));
		v = values(env->query("object"));
		for( i=0; i<sizeof(k); i++ )
			list += sprintf("\t\t\"%-9s : %O,\n", k[i]+"\"", v[i] );
		for( i=0; i<sizeof(strs); i++ )
			if( strsrch( strs[i], "\"object\"" ) != -1 ) { a = i; break; }
		for( i=0; i<sizeof(strs); i++ )
			if( strsrch( strs[i], "]) );" ) != -1 && i > a ) { b = i; break; }
		file = implode( strs[0..a], "\n" ) + "\n" +
			list +
			implode( strs[b..<0], "\n" ) + "\n";
	}

	write_file( filename, file, 1 );
	C_ROOM->update_keep( filename );
	return 1;
}

int help( object me )
{
	write( @HELP
����ָ��: c_take ȡ�������������ڵ���Ʒ��

	c_take
		��ʾ���򴢴�״����

	c_take <��ƷID>
	c_take <��Ʒ���>
		ȡ�������������ڵ���Ʒ��

���ָ��: c_store, c_build

						by ACKY 08/17/2000
HELP);
	return 1;
}
