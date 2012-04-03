// Room : /open/clan/demon_castle/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "恶魔城" );
	set( "build", 93 );
	set( "light_up", 1 );
	set( "no_transmit", 1 );
	set( "long", @LONG

    这里是恶魔城的主大殿，一尊庞大的雕像塑立在你眼前，只见雕
像的双眼隐约透露出邪恶的杀气，八条魔龙攀附着雕像朝天而啸，相
传恶魔城是由武林第一邪魔 -- 傅剑寒一手创立的，其手下聚集一股
庞大的恶势力令人闻之丧胆，所以恶魔城也被列为武林禁地，其帮主
傅剑寒更被喻为恶魔化身。

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 4 */
		"up"        : "/open/clan/demon_castle/room/room5.c",
		"north"     : "/open/clan/demon_castle/room/room3.c",
		"west"      : "/open/clan/demon_castle/room/room2.c",
]) );
	setup();
	call_other( "/obj/board/demon_castle_b.c", "???" );

	}
