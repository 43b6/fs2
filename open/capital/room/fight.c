#include </open/capital/capital.h>
#include <ansi.h>
inherit ROOM;

void create()
{
	set( "short", "�䶷�᳡" );
	set( "long",
   "������ǳ����������䶷�᳡, �᳡������ɽ�˺�, �ƺ���������������
��ò��ɿ���������, ���Ȳ����������ȥ�ո����֡�
" );
	set( "outdoors", "/open/capital" );
	set( "exits", ([
		"south" : __DIR__"r60",
		"enter" : "/open/mulitpk/room/room01.c",
	]) );
	set( "objects", ([
		CAP_NPC"Fguard" : 3,
	]) );
	setup();
}

// by babe
int valid_leave( object me, string dir )
{
	if( dir == "enter" ) {
		if( me->query("pker")==1 )
			return notify_fail( "ɱ�����ֽ�ֹ�����䶷�᳡��\n" );
		if( me->query_condition("mogi") )
			return notify_fail( "���о綾, �����Ƚⶾ�ٽ��䶷�᳡�ɡ�\n" );
		if( me->query("gin") < me->query("max_gin") ||
			me->query("kee") < me->query("max_kee") ||
			me->query("sen") < me->query("max_sen")
			)
			return notify_fail( "��������, ���ǵȻָ����ٽ��䶷�᳡�ɡ�\n" );
		if( me->query("force") < me->query("max_force") ||
			me->query("mana") < me->query("max_mana") ||
			me->query("atman") < me->query("max_atman")
			)
			return notify_fail( "Ŀǰ��δ�������״̬, ���ǵ�������ȫ׼�����ٽ��䶷�᳡�ɡ�\n" );
		if( !userp(me) ) {
			tell_room( this_object(), me->query("name") + "�������, ���ý����䶷�᳡��\n"NOR, me );
			return 0;
		}
		if( me->query("clan") )
			if( CLAN_D->clan_query( me->query("clan/id"), "war" ) )
				return notify_fail( "�������ս���С�\n" );
		if( me->query("combat_exp") < 500000 )
			return notify_fail( "���Ľ�����������, ���ǵ�ǿһ�������ɡ�\n" );
		if( !me->query_temp( "multipk" ) )
			me->set_temp( "multipk", time() );
	}
	return 1;
}
