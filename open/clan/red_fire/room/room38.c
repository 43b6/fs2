// Room : /open/clan/red_fire/room/room38.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��$HIR$���� $HIC$���$HIY$��$NOR$" );
	set( "build", 10400 );
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
  "west" : "/open/clan/red_fire/room/room39.c",
  "east" : "/open/clan/red_fire/room/hall.c",
]) );
	setup();

	}