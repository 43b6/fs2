// destclan.c by acky 06.22.00

#include <ansi.h>

inherit F_CLEAN_UP;

int main( object me, string clan_id )
{
	int	i, n;
	string	player_id, *dir, *player;
	object	ob, ob_temp;

	if( !clan_id )
		return notify_fail("��Ҫ�����һ������?\n");

	if( wiz_level(me)<6 )
		return notify_fail("��û������Ȩ����\n");

	if( !CLAN_D->have_clan( clan_id ) )
		return notify_fail("�޴˰��ɡ�\n");

	CHANNEL_D->do_channel( me, "mud", HIR"\n��Ȼһ����ɫ�����Х�ų����ƶ�...\n"NOR );
/*
	ֱ�Ӵ����������, ������ʱ��������, �б�Ҫʱ��ʹ��!
	dir = get_dir( "/data/login/" );
	i = sizeof(dir);
	while(i--) {
		write( dir[i] );
		player = get_dir( "/data/login/" + dir[i] + "/" );
		n    = sizeof( player );
		while(n--) {
			reset_eval_cost();
			if( sscanf( player[n], "%s.o", player_id ) !=1 )
				continue;
			if( !ob = FINGER_D->acquire_login_ob( player_id ) )
				continue;				
			if( !ob = find_player( player_id ) ) {
				ob_temp = "/adm/daemons/cappointd.c" -> get_user_ob( player_id );
				ob      = "/adm/daemons/cappointd.c" -> get_user_body( ob_temp );
				ob      -> set_temp( "link_ob", ob_temp );
				ob      -> setup();
			}
			if( ob->query("clan/id") == clan_id ) {
				ob -> delete( "clan" );
				ob -> save();
			}
			if( !find_player( player_id ) )
				destruct(ob);
		}
        }
*/
	"/adm/daemons/arthurd"->remove_all_dir( "/open/clan/" + clan_id );
	call_out( "step2", 5, me, clan_id );
	return 1;
}

void step2( object me, string clan_id )
{
	CHANNEL_D->do_channel( me, "mud", sprintf( 
	     HIR"\n����ͻȻ�����������������, %s����:\n\n" +
		"\t\t��! ��֪��%s, ȫ��ͨͨ�����µ���ȥ��!\n\n"NOR,
		me->query("name"), CLAN_D->clan_query( clan_id, "name" ) ) );
	call_out( "step3", 5, me, clan_id );
}

void step3( object me, string clan_id )
{
	CHANNEL_D->do_channel( me, "mud", sprintf( 
	     HIB"\n��%s���ܵ�"HIW"��Ǵ"HIB", ��ʧ�ڿ���ռ䡣\n\n"NOR,
		CLAN_D->clan_query( clan_id, "name" ) ) );
	log_file( "clan/DESTCLAN", sprintf( "%s %s(%s)����%s�����׻���\n",
		ctime(time()), me->query("name"), me->query("id"), CLAN_D->clan_query( clan_id, "name" ) ) );
	CLAN_D->dest_clan( clan_id );
}

int help( object me )
{
	write("
	destclan <����Ӣ������>: ����ĳ�����ɡ�

						by ACKY 2000/06/22\n");
        return 1;
}

