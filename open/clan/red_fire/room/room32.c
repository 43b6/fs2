// Room : /open/clan/red_fire/room/room32.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��$HIR$���� $HIC$���$HIY$��$NOR$" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "������" );
	set( "light_up", 1 );
	set( "long", @LONG
����������ǰ����һ�������Ĵ��������ĳ����ˮ���ϵ�����Ư
����$HIR$����$NOR$����·�������һ��$HIR$��$HIG$��$HIY$��$HIC$Դ$NOR$������ǰ���������������㲻�Ծ�
����ǰ�������㼴�̴󲽴󲽵ļ�����ǰ̽����δ֪�ĵط���


LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/red_fire/room/room44",
		"south"     : "/open/clan/red_fire/room/room61",
]) );
	setup();

	}
