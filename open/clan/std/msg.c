// ���ѶϢ���� by babe

#include <ansi.h>

void npc_ct( object npc, string msg )
{
	message( "vision", sprintf( HIY"��"HIC"%s"HIY"��%s(%s)˵��: %s\n"NOR,
		npc->query("clan/name"), npc->query("name"), npc->query("id"), trans_color(msg) ), filter_array( users(), "filter_clan", this_object(), npc->query("clan/id") ) );
	return;
}

int filter_clan( object who, string clan_id )
{
        if( who->query("clan/id") == clan_id )
		return 1;
	return 0;
}

