// Room : /open/clan/red_fire/room/room42.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��$HIR$���� $HIM$������$HIY$��$NOR$" );
	set( "build", 9 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG
������$HIR$������$NOR$��$HIM$������$NOR$��������ȥ��һ�����С·������ͨ��$HIR$������$NOR$
�ıؾ�֮·��һ·�Ϸ�����ġ����ﻨ�㣬����һ��$HIR$��$HIG$��$HIY$��$BLU$��$NOR$����һ�ж�
����Ϊ$HIR$������$NOR$����$HIR$ĸ$HIG$��$HIY$��$BLU$��$NOR$�������ġ�


LONG);
	set( "clan_room", "������" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/red_fire/room/room37.c",
		"east"      : "/open/clan/red_fire/room/room43.c",
		"up"        : "/open/clan/red_fire/room/room156.c",
]) );
	setup();

	}
