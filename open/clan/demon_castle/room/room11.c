// Room : /open/clan/demon_castle/room/room11.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "short", "��С���л�ئ�" );
	set( "light_up", 1 );
	set( "build", 10080 );
	set( "owner", "suzukiami" );
	set( "long", @LONG
LONG);
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/demon_castle/room/room10",
		"east"      : "/open/clan/demon_castle/room/room12.c",
]) );
	set( "clan_room", "��ħ��" );
	setup();

	}
