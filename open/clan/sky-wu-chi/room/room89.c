// Room : /open/clan/sky-wu-chi/room/room89.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "天道无极" );
	set( "short", "火极殿" );
	set( "light_up", 1 );
	set( "owner", "shih" );
	set( "long", @LONG
炎之殿堂，火极殿，帜热的环境下，拥有着人世间
不可捉摸之物，幻化之火，炎之龙岩，遍布着整个火极
殿堂，其独特之炎之龙岩和幻化之火，是自古就以停驻
在此，使人对于天道无极之五行殿更加充满了想对它多
加了解的念头。

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "west" : "/open/clan/sky-wu-chi/room/room87",
]) );
	set( "cmkroom", 1 );
	setup();

	}
