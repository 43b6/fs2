// by ACKY 04/18/00

#include <ansi.h>

inherit F_CLEAN_UP;

int balance( object me )
{
	write( sprintf( HIG"��"HIC"%|10s"HIG"��"HIY"����Ǯׯ "NOR"-\n\n"HIW"\tӵ��%s���ƽ�\n"NOR,
		me->query("clan/name"), chinese_number(me->query("clan/bank")) ) );
	return 1;
}

int help( object me )
{
	write( "
	c_deposit <����> <��������>

		�ڰ���Ǯׯ��

		��������:
			diamond : ��ʯ
			cash    : ��Ʊ
			gold    : �ƽ�

	c_deposit
		�ڰ���Ǯׯ��ѯ�����

	ע��, ���������, ����Ǯׯ�ڵ�Ǯ����ԭ�������С�
");
	return 1;
}

int main( object me, string arg )
{
	int amount, value, member_gold;
	object n_money, ob;
	string kind, clan_id;

	if( !me->query("clan" ) ) return 0;

	if( !CLAN_D->is_clan_room(me) )
		return notify_fail("�˴����ǹ��֮���̡�\n");

	clan_id = me->query("clan/id");

	if( file_name(environment(me)) != CLAN_D->clan_query( clan_id, "bank" ) )
		return notify_fail( "�˴�����Ǯׯ��\n" );

	if( !arg )
		return balance( me );

	if( sscanf( arg, "%d %s", amount, kind ) != 2 )
		return notify_fail("\ncdeposit <����> <��������>\n");

	n_money = present(kind + "_money", me);

        if( !n_money || file_size("/obj/money/"+kind+".c") < 0 )
                return notify_fail("������û�����ֻ��ҡ�\n");

        if( amount < 1 )
                return notify_fail("���һ���\n");

	if( n_money->query("base_value") < 10000 )
                return notify_fail("��ֵǮһ��Ķ�����!\n");

        if( n_money->query_amount() < amount)
                return notify_fail("�����ϲ�û����ô��" + n_money->query("name") +"��\n");

        value = n_money->query("base_value")/10000;
        value *= amount;

	member_gold = CLAN_D->clan_query( clan_id, "member_gold" );

	if( (CLAN_D->clan_query( clan_id, "gold" )+value) > 2000000000 ||
	    (member_gold                          +value) > 2000000000 )
		return notify_fail("����Ǯׯ�ĲƲ��Ѷൽ�Ų���!\n");

        ob = new("/obj/money/" + kind);
	n_money->add_amount(-amount);
        me->add( "clan/bank", value);
	CLAN_D->add_clanset( clan_id, "member_gold", value );
	CLAN_D->add_money( clan_id, value );
        write( "��һ������"+chinese_number(amount)+ob->query("base_unit")+ob->query("name")+"��\n" );

        return 1;
}
