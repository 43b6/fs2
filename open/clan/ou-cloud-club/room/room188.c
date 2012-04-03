inherit ROOM;
void create() {
	set( "short", "$HIR$绝焱$NOR$" );
	set( "owner", "bbsboss" );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/capital/room/king/obj/dagger1",
		"amount10" : 1,
		"amount6"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10019 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room189",
		"west"      : "/open/clan/ou-cloud-club/room/room186.c",
	]) );
	set( "long", @LONG

      $HIY$此乃至阳之物，能给予敌人致命伤害$NOR$


咦!!这不是风林山寨寨主雷霸的随身武器嘛....
莫非..他也被小马给挂了.....
传言雷霸的六脉神剑已经出神入化....一被他封穴就别想解开..
小马果真艺高人胆大....敢在此人头上动土....
LONG);
	setup();
	replace_program(ROOM);
}
