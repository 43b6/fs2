// c_set.c by ACKY
#include <ansi.h>
#include <clanf.h>
string msg;

int main( object me )
{
	if( !me->query("clan") ) return 0;
	if( me->query("clan/rank") > 2 )
		return notify_fail( "����Ȩʹ�ô�ָ�\n" );
	if( !CLAN_D->is_clan_room(me) )
		return notify_fail( "�����򲢷Ǳ���֮���̡�\n" );

	msg = "
	[0] �����趨
	[1] ����Ǯׯ
	[2] ���ɱ�Ӫ
	[3] ����բ��
	[4] ���ɺ���
	[5] ���ɼ���

	������������Ϊ? [0~5] : ";

	write(msg);
	input_to( "ask", me );

	return 1;
}

void ask( string arg, object me )
{
	int  n;

	if( sscanf( arg, "%d", n )!=1 || n<0 || n>5 ) {
		tell_object( me, CLR );
		write(msg);
		input_to( "ask", me );
		return;
	}

	switch( n ) {
	case 0 :
		return;
	case 1 :
		arg = "bank";
		msg = "Ǯׯ";
		break;
	case 2 :
		arg = "npc_room";
		msg = "��Ӫ";
		break;
	case 3 :
		arg = "gate";
		msg = "բ��";
		break;
	case 4 :
		arg = "home";
		msg = "����";
		C_ROOM->update_room( CLAN_D->clan_query( me->query("clan/id"), "home" ) );
		CLAN_D->clan_set( me->query("clan/id"), arg, base_name(environment(me)) );
		C_ROOM->update_keep( "/open/clan/" + me->query("clan/id") + "/room/hall" );
		break;
	case 5 :
		arg = "jail";
		msg = "����";
	}

	CLAN_D->clan_set( me->query("clan/id"), arg, base_name(environment(me)) );
	CHANNEL_D->do_channel( me, "ct",
			"\n\t�� -��"HIW + me->query("clan/title") + HIY"��֣�ص���������\n\t" +
			"������֮"HIG + msg + HIY"����"HIC + environment(me)->short() + HIY"��"NOR );
}

int help( object me )
{
	write( "
	c_set: �趨��������

                                                         by ACKY 2000/08/17
" );
	return 1;
}

