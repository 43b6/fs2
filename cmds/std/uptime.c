// uptime.c 加总时间 by ACKY

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

	printf( "[狂想空间]已经连续执行%s。\n总共执行%s。\n现在时间: %s\n",
		CHINESE_D->chinese_period(tmp),
		"一年" + CHINESE_D->chinese_period(time),
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
指令格式: uptime

查询[狂想空间]分别己经连续执行和总共执行了多久。
及 server 目前的时间。

HELP);
	return 1;
}
