#include <ansi.h>

inherit F_CLEAN_UP;

int help( object me );

int main( object me, string arg )
{
	int n, value, num1;
	if( !me->query("clan") ) return 0;
	if( !arg )
		return help(me);
	if( me->query("clan/rank") > 3 )
		return notify_fail( "��Ȩʹ�ô�ָ�\n" );

	if( sscanf( arg, "%d", n )!=1 || n<0 || n>1 )
		return notify_fail( "״ֻ̬������(0|1)��\n" );

	CLAN_D->clan_set( me->query("clan/id"), "alert", n );
	switch( n ) {
	case 1:
		CHANNEL_D->do_channel( me, "ct",
			"\n\t�� -��"HIW+me->query("clan/title")+HIY"��֣�ص���������\n\t" +
			"����ȫԱ���뾯�䱸ս״̬��"NOR );
		break;
	case 0:
		CHANNEL_D->do_channel( me, "ct",
			"\n\t�� -��"HIW + me->query("clan/title") + HIY"��֣�ص���������\n\t" +
			"����ȫԱ������䱸ս״̬��"NOR );
	}

        return 1;
}

int help( object me )

{
	write(@HELP

��ʽ˵��: c_alert <״̬>

	  �趨���䱸ս״̬

						by ACKY 08/17/2000
HELP);
	return 1;
}

