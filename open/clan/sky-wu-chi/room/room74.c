// Room : /open/clan/sky-wu-chi/room/room74.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIM$【小佩的小小窝】$NOR$" );
	set( "owner", "peiyi" );
	set( "object", ([
		"file1"    : "/open/capital/obj/king-cloak",
		"file6"    : "/open/capital/obj/king-boots",
		"file10"   : "/open/mogi/dragon/obj/key",
		"file4"    : "/open/capital/obj/king-belt",
		"file3"    : "/open/capital/room/king/obj/dagger1",
		"amount5"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/capital/obj/king-cloth",
		"file7"    : "/open/capital/obj/king-ring",
		"file9"    : "/open/scholar/obj/icefan",
		"amount8"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11523 );
	set( "long", @LONG
这里是小佩佩栖身的住所，进门左手边有一个小小的置物柜，里面放着小佩佩
的小小鞋。绕过一个小小的屏风，后面是小佩佩生活起居的小小地方，在这个小小
地方里，有一张小小床跟一个小小梳妆枱。在粉红小小床的旁边是小佩佩的小小衣
物柜，里面放着小小的衣服。在小小床跟小小屏风中间的小小空地，是小佩佩常常
练习跳舞的小小地方。
LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
		"north"     : "/open/clan/sky-wu-chi/room/room226.c",
		"south"     : "/open/clan/sky-wu-chi/room/room285.c",
		"east"      : "/open/clan/sky-wu-chi/room/room309",
		"out"       : "/open/clan/sky-wu-chi/room/room23.c",
]) );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	setup();

	}
