// Room : /open/clan/ou-cloud-club/room/room57.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$ʱ�ơ���$NOR$" );
	set( "build", 10545 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 5 */
  "eastup" : "/open/clan/ou-cloud-club/room/room62.c",
  "east" : "/open/clan/ou-cloud-club/room/room58.c",
  "west" : "/open/clan/ou-cloud-club/room/room56",
  "westup" : "/open/clan/ou-cloud-club/room/room61.c",
  "up" : "/open/clan/ou-cloud-club/room/room63.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
��ǰͻȻ������һ������,��е��ŵ��µ�ʯ���ƺ�����
ƽ��,�������컨��,�ŷ�������������������ͽ���ʵǶ���
����С���,�м��һ����ֱ���϶�ȥ,�ƺ��Ǹ��쾮,����
��һ������ʱ����ʱ��,���ڶ��ߵ�,��ʱէ��֮���ǿ���,
һ����֮��ȴ�ǹص�,�����Ƶ���һ���ķ���˼�ڻ��ؿ���
֮��.
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
