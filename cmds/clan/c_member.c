// c_member by ACKY 04/12/00

#include <ansi.h>

int main( object me, string arg )
{
	mapping clans;
	string *member, str, clan_id, char;
	object ob, user;
	int o, sum, time, now;
int bank;
	now = time();
	if( !me->query("clan" ) )
		return notify_fail( "�����޼����κΰ��ɡ�\n" );
	if( me->query("clan/rank" ) > 4 )
		return notify_fail( "����Ȩʹ�ô�ָ�\n" );
	if( !arg )
		return notify_fail( "c_member <����ID��ͷ��ĸ(a~z)> <��(1~12)>\n" );
	if( sscanf( arg, "%s %d", char, time )!=2 || time<0 || time>12 )
		return notify_fail( "c_member <����ID��ͷ��ĸ(a~z)> <��(1~12)>\n" );
	clan_id = me->query("clan/id");
	clans = CLAN_D->query_all_clans();
	member = filter_array( clans[clan_id]["members"], "filter_id", this_object(), char );
	str = sprintf(HIC"Ŀǰ�����ܹ��� %d ������, ����IDΪ[%s]��ͷ���� %d ��,\n��[*]���ߴ����ѳ���%s����û������ -\n"+
		HIM"������������������������������������������������������������������������������\n"NOR,
		sizeof( CLAN_D->clan_query(clan_id,"members") ), char, sizeof( member ), CHINESE_D->chinese_number(time) );
	time *= 2592000;
	member = sort_array( member, "sort_keys", this_object() );
	sum = sizeof( member );
	for( o=0; o<sum; o++ )	{
        if( !user = FINGER_D->acquire_login_ob( member[o] ) ||(objectp(user) &&  wizardp(user) )) {
if(!user) bank=0; else bank=user->query("clan/bank");
             CLAN_D->clan_promote( clan_id, member[o], "banish",bank );
			continue;
		}
		str += sprintf(HIR"%s"HIW"%-26s "HIY"���%9d���ƽ�  "HIC"ս��%9d��"NOR"\n",( now-user->query("last_on")>time)?"[*]":"   ",
			user->name()+"("+user->query("id")+")", user->query("clan/donate"), user->query("clan/war") );
	}
	me->start_more( str );
	return 1;
}
int filter_id( string id , string first )
{
	if( id[0..0] == first )
		return 1;
	else
		return 0;
}

int sort_keys( string key1, string key2 )
{
	return strcmp( key1, key2 );
}

int help( object me )
{
	write("
	c_member <����ID��ͷ��ĸ(a~z)> <��(1~12)>���г����ڰ���������

						by ACKY 2000/04/12
");
        return 1;
}
