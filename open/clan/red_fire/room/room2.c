// Room : /open/clan/red_fire/room/room2.c
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
  "out" : "/open/clan/red_fire/room/room13",
  "north" : "/open/clan/red_fire/room/room8",
]) );
	set( "short", "$HIY$��$HIR$����$NOR$ $HIC$���$HIY$��$NOR$" );
	set( "long", @LONG
����������ǰ����һ�������Ĵ��������ĳ����ˮ���ϵ�����Ư
����$HIR$����$NOR$����·�������һ��$HIR$��$HIG$��$HIY$��$HIC$Դ$NOR$������ǰ���������������㲻�Ծ�
����ǰ������ֻ��.....ǰ���ƺ�û��·��......


LONG);
	setup();

	}
