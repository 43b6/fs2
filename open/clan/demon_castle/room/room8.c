// Room : /open/clan/demon_castle/room/room8.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "short", "���̲��Ҧ�" );
	set( "build", 2 );
	set( "light_up", 1 );
	set( "long", @LONG
LONG);
	set( "exits", ([ /* sizeof() == 1 */
  "west" : "/open/clan/demon_castle/room/room5",
]) );
	set( "clan_room", "��ħ��" );
	setup();

	}
