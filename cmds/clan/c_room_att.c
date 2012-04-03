// c_room_att.c by ACKY
inherit F_CLEAN_UP;

#include <clanf.h>

string filename, file;

int help( object me );

int main( object me, string arg )
{
	object env;
	string type;

	seteuid(getuid());
	if( !me->query("clan") ) return 0;
	if( arg != "here" )      return help(me);
	if( !CLAN_D->is_clan_room(me) )
		return notify_fail( "�����򲢷Ǳ����������̡�\n" );
	env = environment(me);
	if( env->query("owner") != me->query("id") && me->query("clan/rank") > 3 )
		return notify_fail( "�˴�������������\n" );
	filename = base_name(env) + ".c";
	file = read_file(filename);
	write( "����" + ( env->query("light_up") ? "����" : "���" ) + "������Ϊ [1]���� [2]��� : " );
	input_to( "ask_light", me );
	return 1;
}

void ask_light( string str, object me )
{
	int i, n;
	string *strs;

	strs = explode( file, "\n" );
	if( sscanf( str, "%d", n ) && n > 0 && n < 3 )
		if( n==1 ) {
			for( i=0; i<sizeof(strs); i++ )
				if( strsrch( strs[i], "\"light_up\"" ) != -1 ) break;
			if( i==sizeof(strs) ) {
				for( i=0; i<sizeof(strs); i++ )
					if( strsrch( strs[i], "\"short\"" ) != -1 ) break;
				strs[i] += "\n\tset( \"light_up\", 1 );";
			}
			else
				strs[i] = "\tset( \"light_up\", 1 );";
			file = implode( strs, "\n" ) + "\n";
		}
		else {
			for( i=0; i<sizeof(strs); i++ )
				if( strsrch( strs[i], "\"light_up\"" ) != -1 ) break;
			if( i<sizeof(strs) )
				file = implode( strs[0..i-1], "\n" ) + "\n" +
					implode( strs[i+1..<0], "\n" ) + "\n";
		}
	write( "����" + ( environment(me)->query("outdoors") ? "����" : "����" ) + "������Ϊ [1]���� [2]���� : " );
	input_to( "ask_outdoors", me );
}

void ask_outdoors( string str, object me )
{
	int i, n;
	string *strs;

	strs = explode( file, "\n" );
	if( sscanf( str, "%d", n ) && n > 0 && n < 3 )
		if( n==1 ) {
			for( i=0; i<sizeof(strs); i++ )
				if( strsrch( strs[i], "\"outdoors\"" ) != -1 ) break;
			if( i==sizeof(strs) ) {
				for( i=0; i<sizeof(strs); i++ )
					if( strsrch( strs[i], "\"short\"" ) != -1 ) break;
				strs[i] += "\n\tset( \"outdoors\", \"/open/clan/" + me->query("clan/id") + "\" );";
			}
			else
				strs[i] = "\tset( \"outdoors\", \"/open/clan/" + me->query("clan/id") + "\" );";
			file = implode( strs, "\n" ) + "\n";
		}
		else {
			for( i=0; i<sizeof(strs); i++ )
				if( strsrch( strs[i], "\"outdoors\"" ) != -1 ) break;
			if( i<sizeof(strs) )
				file = implode( strs[0..i-1], "\n" ) + "\n" +
					implode( strs[i+1..<0], "\n" ) + "\n";
		}
	write_file( filename, file, 1 );
	C_ROOM->update_keep( filename );
	write( "OK.\n" );
}

int help( object me )
{
	write( @HELP
ָ���ʽ: c_room_att here
ָ��˵��: �޸�Ŀǰ��������֮���ԡ�
	  ���˽׼���֮��, Ҳ�������޸��Լ�������

						by ACKY 08/17/2000
HELP);
	return 1;
}
