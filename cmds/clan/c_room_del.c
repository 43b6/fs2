// c_room_del.c by ACKY

inherit F_CLEAN_UP;

#include <ansi.h>
#include <clanf.h>

int main( object me, string arg )
{
	mapping path;
	object env;
	string file;

	if( !me->query("clan") ) return 0;
	if( !CLAN_D->is_clan_room(me) && !wizardp(me) )
		return notify_fail( "�����򲢷Ǳ����������̡�\n" );
	if( me->query("clan/rank") > 3 )
		return notify_fail( "��Ȩʹ�ô�ָ�\n" );
	if( !arg )
		return notify_fail( "c_room_del <�������������>\n" );
	path = environment(me)->query("exits");
	if( undefinedp(path[arg]) )
		return notify_fail( "�޴˷���\n" );
        file = path[arg];
	if( !env = find_object(file) )
		return notify_fail( "�޴�����\n" );
	if( !sscanf( file, "%*s.c" ) )
		file += ".c";
	if( file_size(file) == -1 )
		return notify_fail( "���������������Ʈ��, ����ʵ�塣\n" );
	write( "ȷ��Ҫ���� " + DIR_D->cdir(arg) + " ��������? [N] :" );
	input_to( "ask_yn", me, arg, file, env );
	return 1;
}

void ask_yn( string str, object me, string arg, string file, object env )
{
	if( !strlen(str) || ( str[0] != 'y' && str[0] != 'Y' ) ) {
		write( "OK.\n" );
		return;
	}
	environment(me)->delete( "exits/"+arg );
	destruct(env);
	rm(file);
	"/cmds/clan/c_room_link.c"->do_save(me);
}

int help( object me )
{
	write( "
	c_room_del <�������������>

	��������

						by ACKY 08/17/2000
" );
	return 1;
}
