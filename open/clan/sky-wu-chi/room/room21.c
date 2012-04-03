// Room : /open/clan/sky-wu-chi/room/room21.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room10.c",
		"down"      : "/open/clan/sky-wu-chi/room/room363",
		"enter"     : "/open/clan/sky-wu-chi/room/room41.c",
		"north"     : "/open/clan/sky-wu-chi/room/room315",
		"south"     : "/open/clan/sky-wu-chi/room/room138.c",
		"up"        : "/open/clan/sky-wu-chi/room/room72.c",
]) );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
{嗯? 虎王在哪里? 我怎么都没看到?}
游客甲向旁边略胖的游客乙喃喃抱怨道.
{叉路这么多,我们就都走走吧!}
{这管路的到底在干什么?}
忽然 $HIW$思量$NOR$跳出来一口咬住游客甲,一脚踩住游客乙
{格老子,我写的区域还敢啰嗦}
话声一完,一阵清风吹过,这边又是条静谧的小径.
LONG);
	set( "short", "$HIY$神秘叉路$NOR$" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "build", 25 );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
