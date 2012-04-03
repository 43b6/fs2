// c_create.c

#include <clan.h>
#include <ansi.h>

inherit F_CLEAN_UP;

int help( object me )
{
        write(@HELP

ָ���ʽ: c_create <����ID> <������������> <����Ӣ������>
ָ��˵��: �ڿ���ռ䴴���µİ��ɡ�

HELP
    );
        return 1;
}

int main( object me, string str )
{
	object  ob;
	string  id, cname, cid;

	if( !me->query("clan") || wiz_level(me)<5 )
		return 0;
	if( !str || sscanf( str, "%s %s %s", id, cname, cid ) != 3 )
		return help(me);
        if( !ob = find_player(lower_case(id)) )
                return notify_fail("û������ˡ�\n");
        if( !CLAN_D->create_clan( id, cid, cname ) )
		return notify_fail("��������Ѿ������ˡ�\n");
        if(CLANV_D->create_clanv(cid))
        ob->set( "clan/name", cname );
        ob->set( "clan/id", cid );
        ob->set( "clan/rank", 1 );
        ob->set( "clan/passwd", "0" );
        ob->set( "clan/title", "�����ϴ�" );
	CHANNEL_D->do_channel( me, "mud",
		"\n�챨!!�챨!!"+ob->query("name")+"�ڿ����½�ϳ�����"+cname+"������ɡ�\n");

        return 1;
}

