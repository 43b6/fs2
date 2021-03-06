inherit ROOM;
void create() {
	set( "short", "$RED$分岐点$NOR$" );
	set( "owner", "onyx" );
	set( "item_desc", ([
		"sign" : @ITEM
$HIW$   内～有～恶～猫   $NOR$
ITEM,
	]) );
	set( "object", ([
		"amount9"  : 59,
		"file8"    : "/open/marksman/obj/super_pill",
		"amount4"  : 1,
		"amount10" : 1,
		"file3"    : "/open/wu/npc/obj/armband",
		"file4"    : "/daemon/class/blademan/obj/mkblade",
		"file2"    : "/open/killer/obj/k_ring",
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/gold/obj/golden-blade",
		"amount8"  : 15,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/fire-hole/obj/g-pill",
		"amount3"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/fire-hole/obj/r-pill",
		"amount5"  : 72,
	]) );
	set( "build", 10058 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room12.c",
		"east"      : "/open/clan/hell/room/room21.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
经过了漫长的旅途，你费了九牛二虎之力来到了此地，
路边放了一块小路牌(sign)，路牌上的字迹似乎已经模糊不
清了，前方的路被一层迷蒙的雾所覆盖，而左边的路却一直
传来阵阵的猫声。

　　　　　 $HIW$喵～　喵～　$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
