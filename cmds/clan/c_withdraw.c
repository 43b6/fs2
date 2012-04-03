// by ACKY 04/18/00

int help( object me )
{
	write("
	c_withdraw <����> <��������>���ڰ���Ǯׯ��

		   �������ࣺ
		 	    diamond �� ��ʯ
		 	    cash    �� ��Ʊ
			    gold    �� �ƽ�

	���ɴ������һ�������ƽ�ʱ, ���ṩ�˷���
");
	return 1;
}

int main( object me, string arg )
{
	int amount, value;
	object n_money;
	string kind, clan_id;

	if( !me->query("clan" ) ) return 0;

	if( !CLAN_D->is_clan_room(me) )
		return notify_fail("�˴����ǹ��֮���̡�\n");

	clan_id = me->query("clan/id");

	if( file_name(environment(me)) != CLAN_D->clan_query( clan_id, "bank" ) )
		return notify_fail( "�˴�����Ǯׯ��\n" );

	if( !arg )
		return "/cmds/clan/c_deposit.c"->balance( me );

	if( sscanf( arg, "%d %s", amount, kind ) != 2 )
		return help(me);

        if( file_size("/obj/money/"+kind+".c") < 0 )
                return notify_fail("Ǯׯ��û�����ֻ��ҡ�\n");

        if( amount < 1 )
                return notify_fail("���һ������Ҫһ����\n");

	value = call_other( "/obj/money/"+kind, "query", "base_value" );

	if( value < 10000 )
                return notify_fail("Ǯׯ��û�����ֻ��ҡ�\n");

        value /= 10000;
        value *= amount;

        if( me->query("clan/bank") < value || value < 1 )
		return notify_fail("����Ǯׯ��û�д���ô��Ǯ��\n");

	if( value > 1000000 )
		return notify_fail( "����һ�����쳬���ƽ�һ��������\n" );

        if( CLAN_D->clan_query( clan_id, "gold" ) < 1000000 )
		return notify_fail("Ŀǰ�����ת���飬�޷���\n");

        me->add( "clan/bank", -value );
	CLAN_D->add_money( clan_id, -value );
	CLAN_D->clan_set( clan_id, "member_gold", CLAN_D->clan_query( clan_id, "member_gold" )-value );

        n_money = present(kind + "_money", me);

        if( !n_money ) {
                n_money = new("/obj/money/" + kind);
                n_money->move(me);
                n_money->set_amount(amount);
        }
        else
                n_money->add_amount(amount);

        write( sprintf("��һ�����%s%s%s��\n",
		chinese_number(amount),
		n_money->query("base_unit"),
		n_money->query("name") ) );

        return 1;
}

