// Room : /open/clan/ou-cloud-club/room/room110.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
这里的水深长达五六公尺,再往后的深度恐怕有过之而无
不及,看来只能以游泳的方式前进了,在这种不知道水面下有
什么生物的情况下游泳而过,真是令人胆战心惊啊,不过大家
心知肚明,既然武功高强,唯一会令你烦恼的,只不过是会弄湿
身上的华丽衣饰吧 :p
LONG);
	set( "cmkroom", 1 );
	set( "short", "$HIR$恶魔城$HIW$地下水脉$NOR$" );
	set( "owner", "bbsboss" );
	set( "object", ([
		"amount1"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "build", 11112 );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room111.c",
  "west" : "/open/clan/ou-cloud-club/room/room106",
]) );
	set( "clan_room", "傲云山庄" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
