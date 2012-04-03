#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me)
{
	object ob;
	if( !CLAN_D->clan_query( me->query("clan/id"), "home" ) )
		return notify_fail( "���뵽����ȥ?\n" );
	if( userp(me) && me->query("clan/rank") > 4 )
		return notify_fail( "����Ȩʹ�ô�ָ�\n" );
	if( environment(me)->query("no_chome") )
	    return notify_fail( "����ط����������ָ�\n");
	if( me->is_fighting() || me->is_ghost() || me->query_temp("pk_fight") )
		return notify_fail( "�ܱ�Ǹ, �����ڵ��������ʹ�����ָ�\n" );
	if( CLAN_D->what_clan_area(me)== "NULL" )
		me->set( "clan/out", file_name(environment(me)) );
	if( environment(me)->query("no_transmit") ) {
		if( me->query("food") < 200 )
			return notify_fail( "����ȫ������, �������ˡ�\n" );
        if(!wizardp(me)) //sorry,�Ҳ���һֱfull
		me->add( "food", -200 );
	}
	else {
        if(!wizardp(me)) //sorry,�Ҳ���һֱfull
		if( me->query("food") > 50 )
			me->add( "food", -50 );
		else
			return notify_fail( "����ȫ������, �������ˡ�\n" );
	}
	ob = CLAN_D->clan_query( me->query("clan/id"), "home" );
	message_vision( HIY"$Nʹ��׿�����Ṧ, ��"HIC + trans_color(ob->query("short")) + HIY"ֱ����ȥ��\n"NOR, me );
	me->move(ob);
	tell_room( ob, HIC"һ��ǿ��Ϯ������" + me->query("name") + "����ӰͻȻ���֡�\n"NOR, me );
	return 1;
}

int help(object me)
{
	write(@HELP

��ʽ˵��: c_home

 	  �ص����ɺ��ġ�

HELP    );
        return 1;
}
