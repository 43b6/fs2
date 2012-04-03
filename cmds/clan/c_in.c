// c_in.c by ACKY 05/24/00

inherit F_CLEAN_UP;

#include <ansi.h>

int clan_ally( string clan_id, string clan )
{
	string *ally;

	ally = CLAN_D->clan_query( clan, "ally" );

	if( !ally ) {
		write( "���Ŀǰ��û����˰����ˡ�\n" );
       		return 0;
	}

	if( member_array( clan_id, ally ) == -1 ) {
		write( "���Ŀǰ��û����˰����ˡ�\n" );
       		return 0;
       	}
       	else
       		return 1;
}

int main( object me, string clan )
{
        string clan_id;
        int num, war, level, gate;
        object to, from;

        if( !clan )
                return notify_fail("���뵽����ȥ?\n");
	if( !CLAN_D->have_clan( clan ) )
		return notify_fail( "�޴˰��ɡ�\n" );
	if( me->is_fighting() || me->is_ghost() || me->query_temp("pk_fight") )
		return notify_fail( "�ܱ�Ǹ, �����ڵ��������ʹ�����ָ�\n" );
	if( environment(me)->query("no_transmit"))
		return notify_fail( "����ط������ô˹����......��\n" );
	if( base_name(environment(me)) == CLAN_D->clan_query( me->query("clan/id"), "jail" ) )
		return notify_fail( "���ɼ������Ӳ���ȥ�ġ�\n" );

	to = CLAN_D->clan_query( clan , "gate" );
	gate = CLAN_D->clan_query( clan , "gate_level" );
	clan_id = me->query("clan/id");

	if( clan_id == clan )
		level = 2;
	else if( clan_ally( clan_id, clan ) )
		level = 3;
	else
		level = 4;
	if( level > gate && !wizardp(me) )
		return notify_fail("��Ҫǰ���İ��ɲ���������롣\n");
	if( environment(me)->query("no_transmit") ) {
		if( me->query("food") < 200 )
			return notify_fail( "����ȫ������, �������ˡ�\n" );
		me->add( "food", -200 );
	}
	else {
		if( me->query("food") > 50 )
			me->add( "food", -50 );
		else
			return notify_fail( "����ȫ������, �������ˡ�\n" );
	}
	message_vision( HIY"$Nʹ��׿�����Ṧ, ��"HIC +
		( to ? trans_color( to->short() ) : CLAN_D->clan_query( clan , "name" ) )
		+ HIY"ֱ����ȥ��\n"NOR, me );
	from = environment(me);
	if( CLAN_D->what_clan_area(me)== "NULL" )
		me->set( "clan/out", file_name(from) );
	me->move(to);
	tell_room( to, HIC"һ��ǿ��Ϯ������" + me->query("name") + "����ӰͻȻ���֡�\n"NOR, me );
	war = CLAN_D->clan_query( clan , "war" );
	if( !war ) {
		num = CLAN_D->clan_query( clan , "gatetax");
                if( me->query("clan/id") != clan )      {
                        if( me->query("bank/coin") < num*10000 && !wizardp(me) ){
                                message_vision(HIY"����բ������˵����ûǮ����������\n"NOR,me);
                                message_vision(NOR"����բ�������˾�����һ�ߣ�$N���ߵ��ָ���Զ����\n"NOR,me);
                                me->move(from);
                                message_vision(HIR"$NͻȻ�����ω�������������\n"NOR,me);

                                return 1;
                        }
                        if( !wizardp(me) )      {
                                me->add("bank/coin",-num*10000);
                                CLAN_D->add_money( clan , num );
                        }
                        message_vision(HIY"����բ��������$N��ȡ��˰"+CHINESE_D->chinese_number(num)+"���ƽ�\n"NOR,me);
                }
        }

        return 1;
}

int help( object me )
{
        write( "
	c_in <����Ӣ������>: �ƶ���ĳ����֮բ�š�

                                        by ACKY 05/24/2000
");
	return 1;

}
