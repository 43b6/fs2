// uptime.c ����ʱ�� by ACKY

inherit F_CLEAN_UP;

int main()
{
	int tmp, uptime, time;

	seteuid(getuid());

	tmp = uptime();

	if( file_size( "/data/date") > 0 )
		sscanf( read_file( "data/date" ), "%d %d", time, uptime );
	else return 1;

	if( uptime > tmp )
		uptime = 0;
	else {
		time = time + tmp - uptime;
		uptime = tmp;
	}

        write_file( "/data/date", sprintf( "%d %d", time, uptime ), 1 );

	printf( "[����ռ�]�Ѿ�����ִ��%s��\n�ܹ�ִ��%s��\n����ʱ��: %s\n",
		CHINESE_D->chinese_period(tmp),
		"һ��" + CHINESE_D->chinese_period(time),
		ctime(time()) );

/*
	if( wizardp(this_player()) )
		printf( "uptime = %d\n", uptime() );
*/

	return 1;
}

int help( object me )
{
	write(@HELP
ָ���ʽ: uptime

��ѯ[����ռ�]�ֱ𼺾�����ִ�к��ܹ�ִ���˶�á�
�� server Ŀǰ��ʱ�䡣

HELP);
	return 1;
}
