// Room : /open/clan/ou-cloud-club/room/room105.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
游啊游的,发现水面上有几片木板飘着,看来这不久前这附
近应该有人来过,不过既然还没看到,还是专心游吧!!在这种地
方溺水可不是好玩的,而脚底下最好也多留意些,说不定深水下
另有洞天,更不能对水中可能发生的状况掉以轻心.
LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "傲云山庄" );
	set( "short", "$HIW$恶魔城$HIR$地下水脉$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"file4"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file2"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
	]) );
	set( "build", 10700 );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room106.c",
  "west" : "/open/clan/ou-cloud-club/room/room104",
]) );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	setup();

	}
