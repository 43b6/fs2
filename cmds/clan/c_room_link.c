// c_room_link.c by ACKY
inherit F_CLEAN_UP;

#include <ansi.h>
#include <clanf.h>

void do_save( object me );

string *list( string dir )
{
        string  *file, *list, temp;
        int     i, n;

	dir = "/open/clan/" + dir + "/room/";
	file = get_dir(dir);
	i = sizeof(file);
	list = ({});

	while(i--)
		if( file_size( dir + file[i] ) > 0 &&
			sscanf( file[i], "%s.c", temp ) == 1 )
			list += ({ dir + temp });
	n=sizeof(list);
	if( n==1 ) {
		write( "没有其余区域可供连结。\n" );
		return ({});
	}
	dir = "";
	for( i=0; i<n; i++ ) {
		temp = remove_color(list[i]->query("short"));
		if( strlen(temp) > 15 )
			temp = temp[0..14];
		if( strlen(list[i]->query("long")) < 200 )
			dir = sprintf("%s%s%3d%s.%-15s%s",
				dir, HIR, i+1, NOR, temp, ( (i+1)%4 ? "" : "\n" ) );
		else
			dir = sprintf("%s%3d.%-15s%s",
				dir, i+1, temp, ( (i+1)%4 ? "" : "\n" ) );
		if( (i+1)%88==0 ) {
			write( dir );
			dir = "";
		}
	}
	write( dir + "\n" );
        return list;
}

int main( object me, string arg )
{
	string *list;

	if( !me->query("clan") ) return 0;
	if( !CLAN_D->is_clan_room(me) && !wizardp(me) )
		return notify_fail( "此区域并非本帮所属地盘。\n" );
	if( me->query("clan/rank") > 3 )
		return notify_fail( "无权使用此指令。\n" );
	if( !arg ) {
		list( CLAN_D->what_clan_area(me) );
		return 1;
	}
	if( environment(me)->query("exits/"+arg) ) {
		write( DIR_D->cdir(arg) + "的出口已经有指定区域了, 确定要取消吗? [N] :" );
		input_to( "ask_yn", me, arg );
		return 1;
	}
	list = list( CLAN_D->what_clan_area(me) );
	write( "请输入此出口欲连结之区域号码: " );
	input_to( "choice_exit", me, arg, list );
        return 1;
}

void ask_yn( string str, object me, string arg )
{
	if( !strlen(str) || ( str[0] != 'y' && str[0] != 'Y' ) ) {
		write( "OK.\n" );
		return;
	}
	environment(me)->delete( "exits/"+arg );
	do_save(me);
}

void choice_exit( string choice, object me, string exit, string *list )
{
	int i, j;

	j = sizeof(list);
	i = atoi(choice);
	if( i<1 || i>j ) {
		list = list( CLAN_D->what_clan_area(me) );
		write( "无此区域, 请重新选择: " );
		input_to( "choice_exit", me, exit, list );
		return;
	}

	environment(me)->set( "exits/"+exit, list[i-1] );
	do_save(me);
}

void do_save( object me )
{
	int i, a, b;
	object env;
	string filename, file, str="", *strs, *v, *k;

	env = environment(me);
	filename = base_name(env) + ".c";
	file = read_file(filename);
	strs = explode( file, "\n" );
	k = keys(env->query("exits"));
	v = values(env->query("exits"));
	for( i=0; i<sizeof(k); i++ )
		str += sprintf("\t\t\"%-10s : %O,\n", k[i]+"\"", v[i] );
	for( i=0; i<sizeof(strs); i++ )
       	        if( strsrch( strs[i], "\"exits\"" ) != -1 ) break;
	if( !sizeof(env->query("exits")) ) {
		file = implode( strs[0..i-1], "\n" ) + "\n" +
			implode( strs[i+3..<0], "\n" ) + "\n";
	}
	else if( i==sizeof(strs) ) {
		for( i=0; i<sizeof(strs); i++ )
			if( strsrch( strs[i], "\"short\"" ) != -1 ) break;
		file = implode( strs[0..i], "\n" ) + "\n" +
			"\tset( \"exits\", ([\n" + str + "\t]) );\n" +
			implode( strs[i+1..<0], "\n" ) + "\n";
	}
	else {
		for( i=0; i<sizeof(strs); i++ )
			if( strsrch( strs[i], "\"exits\"" ) != -1 ) { a = i; break; }
		for( i=0; i<sizeof(strs); i++ )
			if( strsrch( strs[i], "]) );" ) != -1 && i > a ) { b = i; break; }
		file = implode( strs[0..a], "\n" ) + "\n" +
			str +
			implode( strs[b..<0], "\n" ) + "\n";
	}

	write_file( filename, file, 1 );
	C_ROOM->update_keep( filename );
	write( "OK.\n" );
	return;
}

int help( object me )
{
	write( @HELP
指令格式: c_room_link <方向>
指令说明: 设定目前所处区域之连结。

	  c_room_link <方向>
	  删除此方向之连结。

	  c_room_link
	  显示可供此处连结之区域。

	  红色编号区域代表叙述过少, 请尽快改进。

						by ACKY 08/17/2000
HELP);
	return 1;
}
