// Room : /open/clan/ou-cloud-club/room/room123.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG

小Ｐ每天下班后打滚玩 FS 的地方

不过小Ｐ已经很久没来此房了

此房或许被小Ｐ下了许多的舞者咒术

也或许被小Ｐ摆了许多的机关吧

所以普通杂役也不敢随便侵入打扫

再加上主人久不归家无人打扫

所以此房看来杂乱不堪

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "short", "$HIG$‘$HIC$小Ｐ之家$HIG$’$NOR$" );
	set( "owner", "ppp" );
	set( "clan_room", "傲云山庄" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/ou-cloud-club/room/room122",
]) );
	set( "light_up", 1 );
	setup();

	}
