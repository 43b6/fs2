// Room : /open/clan/red_fire/room/room30.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��$HIR$����$HIC$���Ǻ� $HIM$���Ŵ���$HIY$��$NOR$" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG
��վ��$HIM$����$NOR$����������$HIC$���Ǻ�$NOR$�����峺�ĺ�ˮ�����ɣ�....�ӵ׺���
����һЩ$HIW$��$NOR$�����գ�����˭����ô�������Ǳ���ˮ�п�$HIW$��$NOR$������������
ȥ��һ��......�ǺǺǣ�......$HIY$����$NOR$���߶���Ү��������һ�߰�����....
..����ȥ���������......�����ģ�������˵����


LONG);
	set( "clan_room", "������" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 4 */
		"eastdown"  : "/open/clan/red_fire/room/room67",
		"north"     : "/open/clan/red_fire/room/room34.c",
		"south"     : "/open/clan/red_fire/room/room13.c",
		"westdown"  : "/open/clan/red_fire/room/room66",
]) );
	setup();

	}
