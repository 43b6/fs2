// clan NPC by ACKY

inherit NPC;

#include <clanf.h>

void init()
{
	if( !query_heart_beat( this_object() ) )
		set_heart_beat(1);
	::init();
}

/*
void heart_beat()
{
	if( !is_fighting() ) {
		if( query("sen") < query("eff_sen") ) // 125
			command( "exert refresh" );
		if( query("force") < query("max_force") ) // 1 -> 5.035
			command( "ex 160" );
		if( query("eff_kee") < query("max_kee") ) // 35
			command( "10 exert heal" );
		if( query("gin") < query("eff_gin") ) // 125
			command( "exert regenerate" );
		if( query("kee") < query("eff_kee") ) // 125 -> 300
			command( "3 exert recover" );
	}
	::heart_beat();
}
*/

void greeting( object who )
{
	object	npc;
	string	cid_npc, cid_who, cname_npc, cname_who, *npc_ally;
	int	alert, ally, kill, war;

	npc	  = this_object();
	cid_npc   = npc->query( "clan/id"   );
	cid_who   = who->query( "clan/id"   );
	cname_npc = npc->query( "clan/name" );
	cname_who = who->query( "clan/name" );
	alert     = CLAN_D->clan_query( cid_npc, "alert" );
	npc_ally  = CLAN_D->clan_query( cid_npc, "ally"  );
	war 	  = CLAN_D->clan_query( cid_npc, "war"   );
//	ally      = member_array( cid_who, npc_ally )+1;
	if( who->query("clan/kill")==cname_npc )
		kill = 1;
	else
		kill = 0;

	if( !interactive(who) || npc->is_fighting() || npc->query("attitude")=="aggressive" )
		return;

	if( CLAN_D->is_clan_room(npc) )	{
		if( war || alert ) {
			if( kill )
				kill_ob(who);
			else if( cid_who != cid_npc && !ally ) {
				kill_ob(who);
				if( !who->query_temp("clan/invade") ) {
					who->set_temp( "clan/invade",1 );
					if( cid_who )
						MSG->npc_ct( npc,
"$HIR$ע��!! ����$HIM$" + cname_who + "$HIR$��$HIM$" + who->query("clan/title") + "$HIR$��$HIM$" + who->query("name") + "$HIR$($HIM$" + who->query("id") + "$HIR$)�Ƿ�����" + (environment(npc))->query("short") + "$HIR$!!$NOR$" );
					else
						MSG->npc_ct( npc,
"$HIR$ע��!! ����$HIM$" + who->query("name") + "$HIR$($HIM$" + who->query("id") + "$HIR$)�Ƿ�����" + (environment(npc))->query("short") + "$HIR$!!$NOR$" );
				}
			}
		}

		if( !war && cname_who==cname_npc )
			if( who->query("clan/rank")==1 ) {
				command("say ��"+who->query("clan/title")+"�����á�");
				command("bow "+who->query("id"));
			}
			else if( who->query("clan/rank")==5 )
				command("smile "+who->query("id"));
			else if( who->query("clan/rank")==7 )
				command("spit "+who->query("id"));
			else {
				command("say ��"+who->query("clan/title")+"�����á�");
				command("smile "+who->query("id"));
			}
	}
}

void die()
{
	mapping objs;
	object npc, who, env, home;
	int i, a, b, alert, ally, war;
	string file, filename, *strs, cid_npc, cid_who, cname_npc, cname_who, *npc_ally;

	seteuid(ROOT_UID);
	npc 	  = this_object();
	env	  = environment(npc);
	home	  = load_object( npc->query("startroom") + ".c" );
	who	  = query_temp("last_damage_from");
	cid_npc   = npc->query( "clan/id"   );
	cid_who   = who->query( "clan/id"   );
	cname_npc = npc->query( "clan/name" );
	cname_who = who->query( "clan/name" );
	alert     = CLAN_D->clan_query( cid_npc, "alert" );
	npc_ally  = CLAN_D->clan_query( cid_npc, "ally"  );
	war 	  = CLAN_D->clan_query( cid_npc, "war"   );
//	ally      = member_array( cid_who, npc_ally )+1;

	if( CLAN_D->is_clan_room(npc) )	{
		if( war )	{
			if( cid_who )
				MSG->npc_ct( npc,
"$HIM$" + cname_who + "$HIR$��$HIM$" + who->query("clan/title") + "$HIR$��$HIM$" + who->query("name")+ "$HIR$($HIM$" + who->query("id") + "$HIR$)�ѹ���" + env->query("short") + "$HIR$, �����֧Ԯ!!$NOR$" );
			else
				MSG->npc_ct( npc,
"$HIM$" + who->query("name")+ "$HIR$($HIM$" + who->query("id") + "$HIR$)�ѹ���" + env->query("short")+ "$HIR$, �����֧Ԯ!!$NOR$" );
		}
		else if( alert && cname_who!=cname_npc && !ally ) {
			if( cid_who )
				MSG->npc_ct( npc,
"$HIR$ע��!! ����$HIM$" + cname_who + "$HIR$��$HIM$" + who->query("clan/title") + "$HIR$��$HIM$" + who->query("name") + "$HIR$($HIM$" + who->query("id") + "$HIR$)�Ƿ�����" + env->query("short") + "$HIR$!!$NOR$" );
			else
				MSG->npc_ct( npc,
"$HIR$ע��!! ����$HIM$" + who->query("name") + "$HIR$($HIM$" + who->query("id") + "$HIR$)�Ƿ�����" + env->query("short") + "$HIR$!!$NOR$" );
		}
	}

	filename = base_name(home) + ".c";
	file = read_file(filename);
	objs = home->query("objects");
	map_delete( objs, base_name(npc) );
	home->set( "objects", objs );
	strs = explode( file, "\n" );
	if( sizeof(objs) > 0 ) {
		for( i=0; i<sizeof(strs); i++ )
			if( strsrch( strs[i], "\"objects\"" ) != -1 ) { a = i; break; }
		for( i=0; i<sizeof(strs); i++ )
			if( strsrch( strs[i], "]) );" ) != -1 && i > a ) { b = i; break; }
		file = implode( strs[0..a-1], "\n" ) + "\n" +
			sprintf( "\tset(\"objects\", %O );\n", objs ) +
			implode( strs[b+1..<0], "\n" ) + "\n";
	}
	else {
		for( i=0; i<sizeof(strs); i++ )
        	        if( strsrch( strs[i], "\"objects\"" ) != -1 ) break;
		file = implode( strs[0..i-1], "\n" ) + "\n" +
			implode( strs[i+4..<0], "\n" ) + "\n";
	}

	C_FILE->die( base_name(npc) + ".c", file, filename );

	::die();
}
