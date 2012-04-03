// c_room_make.c by ACKY

inherit F_CLEAN_UP;

string get_file_name(string dir);
void create_room(string file);

int help( object me )
{
	write(
"\n\tc_room_make: ���Ű��ɵ��̡�
\n\t��������(c_join)����, ��������(c_prestige)����, ��ռ��ĵ�������\n\n"
	);
	return 1;
}

int main( object me )
{
	string	code, dir, file, clan;
	object	room;

	if( !me->query("clan") )
                return 0;
        if( me->query("clan/rank") > 3 )
                return notify_fail( "��Ȩʹ�ô�ָ�\n" );
	if( !CLAN_D->is_clan_room(me) )
		return notify_fail( "�����򲢷Ǳ����������̡�\n" );
	clan = me->query("clan/id");
	if( CLAN_D->clan_query( clan, "gold" ) < 1000 )
		return notify_fail( "���ɴ��㡣\n" );
	if( sizeof(get_dir("/open/clan/" + clan + "/room/")) >
		CLAN_D->clan_query( clan , "develop" )/100 + sizeof(CLAN_D->clan_query( clan, "members" )) )
		return notify_fail( "�������������Ѵ����ޡ�\n" );

	dir = CLAN_D->get_clan_dir(me);
	file = dir + get_file_name(dir);

	code = @CODE
inherit ROOM;
void create() {
	set( "short", "������" );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
CODE;

	write_file( file, code, 1 );
	if( !room = load_object(file) )
		return notify_fail( "����������ʧ�ܡ�\n" );
	else
		write( "����Ҽǧ���ƽ���������\n" );
	if( wizardp(me) )
		write( "�½��ĵ�������Ϊ: " + file + "\n" );
	CLAN_D->add_money( me->query("clan/id"), -1000 );
	return 1;
}

string get_file_name( string dir )
{
        int i;
	i = 1;
        while(i++)
		if( file_size( dir+"room/room"+i+".c" ) == -1 )
			return "room/room"+i+".c";
}

