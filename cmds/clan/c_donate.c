// ���ɾ�Ǯָ�� by ACKY
// �����ڰ���Ǯׯ��Ǯ, �������

#include <limit.h>
#include <ansi.h>

inherit F_CLEAN_UP;

int help( object me );
int main( object me, string arg )
{
	int o, i, num, count, scale;
	string clan_id, m;

	if( !arg )
		return help( me );

	if( !me->query("clan" ) )
		return notify_fail( "��û�м����κΰ��ɡ�\n" );

	if( !CLAN_D->is_clan_room(me) )
		return notify_fail("�˴����ǹ��֮���̡�\n");

	clan_id = me->query("clan/id");

	if( file_name(environment(me)) != CLAN_D->clan_query( clan_id, "bank" ) )
		return notify_fail( "�˴�����Ǯׯ��\n" );

	num = atoi( arg );
	if( num < 1000 )
		return notify_fail("ÿ��������ҪһǪ���ƽ�\n");

	if( me->query("clan/bank") < num )
		return notify_fail("���ڰ���Ǯׯ�ڲ�û�д���ô��Ǯ��\n");

	i = me->query("combat_exp");
	for( scale=0; i>0; scale++ )
		i-= (scale)*(scale)*50;
	count = num/scale;
//	if( me->query("net_count/count") > count )
//		me->add( "net_count/count" , -count );
//	else
//		me->set( "net_count/count" , 0 );

	me->add( "clan/bank"  , -num );
	me->add( "clan/donate",  num );
	CLAN_D->add_clanset( clan_id, "member_gold", -num );

	CHANNEL_D->do_channel(me, "ct",
		"\n\t�� -��"HIW+me->query("clan/title")+HIY"�����"+
		CHINESE_D->chinese_number(num)+"���ƽ�����ϣ�������ܹ�����ǿ��"NOR);
/*
	write( HIM"\nһ������, "+me->query("clan/name")+"�ػ������Ŀ�����������Ϊ "+(MAX_KB-me->query("net_count/count"))+" KB��\n"NOR);

*/
	sscanf (ctime (time()), "%s %s %d %d:%d:%d %d", m, m, o, o, o, o, o);
	log_file("clan/"+clan_id+"/DONATE-"+m, sprintf("%s%8d���ƽ� by %s(%s)\n"
		,ctime(time()),num,me->query("name"),me->query("id")));

	return 1;
}

int help( object me )
{
	write("
	c_donate <����> : ��Ǯ�����ɣ���λ : �ƽ�

");
        return 1;
}

