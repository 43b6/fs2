// Room : /open/clan/red_fire/room/room8.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "cmkroom", 1 );
	set( "clan_room", "������" );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"south"     : "/open/clan/red_fire/room/room2",
		"down"      : "/open/clan/red_fire/room/room107",
]) );
	set( "short", "$HIY$��$HIR$����$NOR$ $HIC$���$NOR$ $HIM$����$HIY$��$NOR$" );
	set( "long", @LONG
����������ǰ����һ�������Ĵ��������ĳ����ˮ���ϵ�����Ư
����$HIR$����$NOR$����·�������һ��$HIR$��$HIG$��$HIY$��$HIC$Դ$NOR$������ǰ���������������㲻�Ծ�
����ǰ������ֻ��......ǰ�澹Ȼ��$HIM$����$NOR$��������һƬ$HIB$�ƺ�$NOR$......������
һ������ʹ��׿�����Ṧ����Ծ��$HIB$�ƺ�$NOR$֮��......��


LONG);
	setup();

	}
