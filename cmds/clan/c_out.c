// c_out.c by ACKY

#include <ansi.h>
#include <login.h>

inherit F_CLEAN_UP;

int main( object me )
{
	int i;
	object from, *count;
	string filep, gate;

	seteuid(getuid());
	filep = me->query("clan/out");
    if(!filep) filep="/open/common/room/inn.c";
	if( !me->query("clan") )
		return 0;
	if( me->is_fighting() )
		return notify_fail( "����æ��ս������\n" );
	if( CLAN_D->what_clan_area(me) == "NULL" )
		return notify_fail( "�˴����ǰ�������\n" );
	gate = CLAN_D->clan_query( CLAN_D->what_clan_area(me), "gate" );
	if( base_name(environment(me)) == CLAN_D->clan_query( me->query("clan/id"), "jail" ) )
		return notify_fail( "���ɼ������Ӳ���ȥ�ġ�\n" );
	if( !CLAN_D->is_clan_room(me) )	{
		if( file_name(environment(me)) != gate )
			return notify_fail( "�˴����ǰ���բ�š�\n" );
	}
	else if( me->query("clan/rank") > 4 )
		if( file_name(environment(me)) != gate )
			return notify_fail( "�˴����ǰ���բ�š�\n" );
	from = environment(me);
	message_vision( HIY"$N�˾�ȫ��, ʹ�������Ṧ, ��"HIC + trans_color(filep->query("short")) + HIY"�ɱ���ȥ��\n"NOR, me );
	me->move(filep);
	tell_room( filep, HIW"һ����Ӱ�������˹�ȥ����"+me->query("name")+"ͻȻ��������ǰ����\n"NOR, me );
/*	if( me->query("clan/rank") < 5 &&
		base_name(from)==CLAN_D->clan_query(me->query("clan/id"), "gate" ) &&
		filep->query("no_transmit")!=1 ) {
		count = all_inventory(from);
		i = sizeof( count );
		while(i--) {
			if( !count[i]->is_fighting() &&
				living(count[i]) &&
				count[i]->query_leader()==me &&
				count[i]->query("clan/out")->query("no_transmit")!=1 ) {
				message_vision( HIY"$N�˾�ȫ��, ʹ�������Ṧ, β��" + me->query("name") + "�ɱ���ȥ��\n"NOR, count[i] );
				count[i]->move(filep);
				count[i]->set( "food", 0 );
				count[i]->start_busy(random(20)+1);
				tell_room( filep, HIW"һ����Ӱ�������˹�ȥ����"+count[i]->query("name")+"ͻȻ��������ǰ����\n"NOR, count[i] );
			}
		}   
	} */
	return 1;
}

int help( object me )
{
	write("
	c_out: �뿪���ɡ�

	       �׼�������: �����ڰ���բ�Ų����뿪��

	       �׼�������: ���ڰ���բ�Ŵ�������뿪��

							by ACKY 2000/02/23

");
        return 1;
}
