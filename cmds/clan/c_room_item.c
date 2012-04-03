/* c_room_item.c by babe m^O^m

[format]
	set( "item_desc", ([
		"item_name" : @ITEM
item_description
ITEM,
	]) );
*/

inherit F_CLEAN_UP;
#include <ansi.h>

int help( object me )
{
	write( @HELP
����ָ��: c_room_item ר����������������򾰹ۡ�

ָ���ʽ: c_room_item
ָ��˵��: ��ʾĿǰ��������ľ��ۡ�

ָ���ʽ: c_room_item here
ָ��˵��: �����ݻ�Ŀǰ��������ľ��ۡ�

ָ�ע: ���˽׼���֮��, Ҳ�����Լ�����������ʹ�á�

							by ACKY 08/17/2000
HELP );
	return 1;
}

string *get_item( string *strs )
{
	int a, i, n;

	for( i=0, n=sizeof(strs); i<n; i++ )
		if( strsrch( strs[i], "\"item_desc\"" ) != -1 ) break;
	if( i==n )
		return ({});
	else {
		for( a=i; i<n; i++ )
			if( strsrch( strs[i], "]) );" ) != -1 )	break;
		return strs[a..i];
	}
}

string *get_item_short( string *strs )
{
	int i, n;
	string *item, short;

	for( item=({}), n=sizeof(strs), i=0; i<n; i++ )
		if( strsrch( strs[i], "@ITEM" ) != -1 ) {
			sscanf( strs[i], "\t\t\"%s\"", short );
			item += ({ short });
		}
	return item;
}

string *get_item_long( string *strs )
{
	int i, a, n;
	string *item, short;

	for( item=({}), n=sizeof(strs), i=0; i<n; i++ )
		if( strsrch( strs[i], "@ITEM" ) != -1 ) { a = i; }
		else if( strsrch( strs[i], "ITEM," ) != -1 )
			item += ({ implode( strs[a+1..i-1], "\n" ) });
	return item;
}

void display( string short, string *strs )
{
	int i, n;
	string *is, *il;

	if( !sizeof(strs) ) {
		write( short + "û���κξ���������\n" );
		return;
	}

	is = get_item_short(strs);
	il = get_item_long(strs);
	write( short + " - "HIC"���������б�"NOR":\n\n" );
	for( i=0, n=sizeof(is); i<n; i++ )
		printf( "("HIG"%s"NOR") :\n%s\n\n", is[i], il[i] );
}

int main( object me, string arg )
{
	object env;
	string short, filename, file, *strs;

	seteuid(getuid());
	if( !me->query("clan") ) return 0;
	env = environment(me);
	short = trans_color(env->short());

	if( !CLAN_D->is_clan_room(me) && !wizardp(me) )
		return notify_fail( short + "���Ǳ����������̡�\n" );
	if( env->query("owner") != me->query("id") && me->query("clan/rank") > 3 )
		return notify_fail( short + "������������\n" );

	filename = base_name(env) + ".c";
	file = read_file(filename);
	strs = get_item( explode( file, "\n" ) );

	if( arg == "here" ) {
		write( "��������Ҫ�����ݻٵľ���: " );
		input_to( "ask_item", me, strs );
	} else if( !arg )
		display( short, strs );
	else
		return help(me);
	return 1;
}

void do_save( object me, string *is, string *il )
{
	int a, i, n;
	object env;
	string filename, file, *strs;
	mapping item;

	item = ([]);
	env = environment(me);
	filename = base_name(env) + ".c";
	file = read_file(filename);
	strs = explode( file, "\n" );

	for( i=0, n=sizeof(strs); i<n; i++ )
		if( strsrch( strs[i], "\"item_desc\"" ) != -1 ) break;
	for( a=i; i<n; i++ )
		if( strsrch( strs[i], "]) );" ) != -1 )	break;
	if( sizeof(is) ) {
		if( a==n ) {
			for( i=0; i<n; i++ )
				if( strsrch( strs[i], "\"short\"" ) != -1 ) break;
			strs[i] += "\n\tset( \"item_desc\", ([\n\t\t\"" + is[0] + "\" : @ITEM\n" +
				il[0] + "ITEM,\n\t]) );";
			item[is[0]] = il[0];
		}
		else {
			strs = explode( implode( strs[0..a], "\n" ) + "\n" + implode( strs[i..<0], "\n" ) + "\n", "\n" );
			strs[a] += "\n\t\t\"" + is[0] + "\" : @ITEM\n" + il[0] + "ITEM,";
			item[is[0]] = il[0];
			for( i=1, n=sizeof(is); i<n; i++ ) {
				strs[a] += "\n\t\t\"" + is[i] + "\" : @ITEM\n" + il[i] + "\nITEM,";
				item[is[i]] = il[i];
			}
		}
		env->set( "item_desc", item );
		file = implode( strs, "\n" ) + "\n";
	}
	else {
		env->delete("item_desc");
		file = implode( strs[0..a-1], "\n" ) + "\n" +
			implode( strs[i+1..<0], "\n" ) + "\n";
	}
	write_file( filename, file, 1 );
	me->set( "force", 0 );
}

void set_long( object me, string item, string *strs, string str )
{
	int i, n;
	string *is, *il;

	if( sizeof(strs) ) {
		is = get_item_short(strs);
		il = get_item_long(strs);
	} else {
		is = ({});
		il = ({});
	}
	for( i=0, n=sizeof(is); i<n; i++ )
		if( il[i] == str ) {
			write( HIR"����������(" + item + ")��\n"NOR );
			return;
		}
	is = ({ item }) + is;
	il = ({ str }) + il;
	do_save( me, is, il );
	message_vision( HIY"$N�����(" + item + ")��\n"NOR, me );
}

void ask_item( string str, object me, string *strs )
{
	string *is, *il;
	int i, n;

	if( !sizeof(str) ) {
		write( "OK.\n" );
		return;
	}
	if( sscanf( str, "%d", n ) ) {
		write( "��������Ҫ�����ݻٵľ���: " );
		input_to( "ask_item", me );
		return;
	}
	if( member_array( str, get_item_short( strs ) ) == -1 ) {
		write( "������(" + str + ")������:" );
		me->edit( (: set_long, me, str, strs :) );
	}
	else {
		is = get_item_short(strs);
		il = get_item_long(strs);
		for( i=0, n=sizeof(is); i<n; i++ )
			if( is[i]==str ) {
				is -= ({ is[i] });
				il -= ({ il[i] });
				break;
			}
		do_save( me, is, il );
		message_vision( HIM"$N�˾�ȫ��, ��(" + str + ")�ݻ��ˡ�\n"NOR, me );
	}
	return;
}
