// by ACKY 04/18/00

#include <ansi.h>

inherit F_CLEAN_UP;

int balance( object me )
{
	write( sprintf( HIG"《"HIC"%|10s"HIG"》"HIY"帮派钱庄 "NOR"-\n\n"HIW"\t拥有%s锭黄金。\n"NOR,
		me->query("clan/name"), chinese_number(me->query("clan/bank")) ) );
	return 1;
}

int help( object me )
{
	write( "
	c_deposit <数量> <货币种类>

		于帮派钱庄存款。

		货币种类:
			diamond : 钻石
			cash    : 银票
			gold    : 黄金

	c_deposit
		于帮派钱庄查询存款余额。

	注意, 若脱离帮派, 存于钱庄内的钱将归原帮派所有。
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
		return notify_fail("此处并非贵帮之地盘。\n");

	clan_id = me->query("clan/id");

	if( file_name(environment(me)) != CLAN_D->clan_query( clan_id, "bank" ) )
		return notify_fail( "此处并非钱庄。\n" );

	if( !arg )
		return balance( me );

	if( sscanf( arg, "%d %s", amount, kind ) != 2 )
		return notify_fail("\ncdeposit <数量> <货币种类>\n");

	n_money = present(kind + "_money", me);

        if( !n_money || file_size("/obj/money/"+kind+".c") < 0 )
                return notify_fail("您身上没有这种货币。\n");

        if( amount < 1 )
                return notify_fail("存多一点嘛。\n");

	if( n_money->query("base_value") < 10000 )
                return notify_fail("存值钱一点的东西吧!\n");

        if( n_money->query_amount() < amount)
                return notify_fail("您身上并没有那么多" + n_money->query("name") +"。\n");

        value = n_money->query("base_value")/10000;
        value *= amount;

	member_gold = CLAN_D->clan_query( clan_id, "member_gold" );

	if( (CLAN_D->clan_query( clan_id, "gold" )+value) > 2000000000 ||
	    (member_gold                          +value) > 2000000000 )
		return notify_fail("帮派钱庄的财产已多到放不下啰!\n");

        ob = new("/obj/money/" + kind);
	n_money->add_amount(-amount);
        me->add( "clan/bank", value);
	CLAN_D->add_clanset( clan_id, "member_gold", value );
	CLAN_D->add_money( clan_id, value );
        write( "您一共存入"+chinese_number(amount)+ob->query("base_unit")+ob->query("name")+"。\n" );

        return 1;
}
