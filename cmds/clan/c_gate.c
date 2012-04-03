// c_gate.c

#include <ansi.h>

int help( object me );

int main( object me , string arg )
{
	int n;

	if( !me->query("clan") ) return 0;
	if( me->query("clan/rank") > 2 )
		return notify_fail( "����Ȩʹ�ô�ָ�\n" );
	if( !CLAN_D->is_clan_room(me) )
		return notify_fail( "�˴����ǹ��֮���̡�\n" );
	if( !arg )
		return help(me);
	if( sscanf( arg, "%d", n )!=1 || n<1 || n>4 )
		return notify_fail( "״ֻ̬������(1~4)��\n" );

	switch( n ) {
	case 1:
		CHANNEL_D->do_channel( me, "ct",
			"\n\t�� -��"HIW+me->query("clan/title")+HIY"��֣�ص���������\n\t" +
			"������բ�ž���㼶��Ϊ"HIC"[�ر�]"HIY"���Է������˵�������롣"NOR );
		break;
	case 2:
		CHANNEL_D->do_channel( me, "ct",
			"\n\t�� -��"HIW + me->query("clan/title") + HIY"��֣�ص���������\n\t" +
			"������բ�ž���㼶��Ϊ"HIC"[����]"HIY"��ֻ׼������ڽ�����"NOR );
		break;
	case 3:
		CHANNEL_D->do_channel( me, "ct",
			"\n\t�� -��"HIW + me->query("clan/title") + HIY"��֣�ص���������\n\t" +
			"������բ�ž���㼶��Ϊ"HIC"[����]"HIY"�������ѿ����ɽ������Ա㽻����ͨ���ޡ�\n"NOR );
		break;
	case 4:
		CHANNEL_D->do_channel( me, "ct",
			"\n\t�� -��"HIW + me->query("clan/title") + HIY"��֣�ص���������\n\t" +
			"������բ�ž���㼶��Ϊ"HIC"[����]"HIY"���ø�����ɿ����ɽ������Ա㽻����ͨ���ޡ�\n"NOR);
		break;
	default :
	}

	CLAN_D->clan_set( me->query("clan/id"), "gate_level", n );

	return 1;
}

int help( object me )
{
	write("
	c_gate <״̬>: �趨����բ��״̬��

	[״̬��] �ر�
	[״̬��] ����
	[״̬��] ����
	[״̬��] ����

					by ACKY 2000/03/28
");
        return 1;
}
