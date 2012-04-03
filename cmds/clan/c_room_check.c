// c_room_check.c by ACKY
inherit F_CLEAN_UP;

#include <ansi.h>
#include <clanf.h>

int help( object me )
{
	write( @HELP
ָ���ʽ: c_room_check <����>
ָ��˵��: ����������

	  < ���� n >
	  	ǰ����һ������

	  < ���� b >
	  	ǰ����һ������

	  < ���� d >
	  	ɾ��Ŀǰ��������

						by ACKY 08/17/2000
HELP);
	return 1;
}

string get_file_name( object me, string clan, int i, int mode )
{
	if( i==0 )
		i = 1;
	switch(mode) {
	case 1:
		while(i++) {
			if( file_size( "/open/clan/" + clan + "/room/room" + i + ".c" ) > 0 ) {
				me->set_temp( "c_room_check", i );
				return "/open/clan/" + clan + "/room/room" + i + ".c";
			}
			if( i > 300 ) {
				me->set_temp( "c_room_check", 1 );
				return "/open/clan/" + clan + "/room/hall.c";
			}
		}
	case 2:
		while(i--) {
			if( file_size( "/open/clan/" + clan + "/room/room" + i + ".c" ) > 0 ) {
				me->set_temp( "c_room_check", i );
				return "/open/clan/" + clan + "/room/room" + i + ".c";
			}
			if( i == 1 )
				return "/open/clan/" + clan + "/room/hall.c";
		}
	default:
		return "/open/clan/" + clan + "/room/room" + i + ".c";
	}
}

int main( object me, string arg )
{
	int num;
	string clan, filename;
	object room;

	if( !me->query("clan") || !wizardp(me) ) return 0;
	clan = CLAN_D->what_clan_area(me);
	if( clan == "NULL" )
		return notify_fail( "�˴����ǰ�������\n" );
	if( !arg )
		arg = "n";

	num = me->query_temp("c_room_check");
	switch(arg) {
	case "n" :
		room = (object)get_file_name( me, clan, num, 1 );
		me->move(room);
		if( strlen( room->query("long") ) < 200 )
			write( HIR"�������������� " + strlen( room->query("long") ) + " ��, ���Ϲ涨��\n"NOR );
		else
			write( HIG"�������������� " + strlen( room->query("long") ) + " ��, ���Ϲ涨��\n"NOR );
		break;
	case "b" :
		room = (object)get_file_name( me, clan, num, 2 );
		me->move(room);
		if( strlen( room->query("long") ) < 200 )
			write( HIR"�������������� " + strlen( room->query("long") ) + " ��, ���Ϲ涨��\n"NOR );
		else
			write( HIG"�������������� " + strlen( room->query("long") ) + " ��, ���Ϲ涨��\n"NOR );
		break;
	case "d" :
		filename = get_file_name( me, clan, num, 0 );
		room = (object)filename;
		rm(filename);
		me->move( get_file_name( me, clan, num, 2 ), 1 );
		write( HIM"ɾ��[" + room->short() + HIM"] - (" + filename + ")��\n"NOR );
		break;
	default :
		return help(me);
	}
	return 1;
}

