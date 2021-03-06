inherit ROOM;
void create() {
	set( "short", "凉 亭" );
	set( "light_up", 1 );
	set( "object", ([
		"amount9"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/dancer/obj/yuawaist",
		"file7"    : "/obj/gift/xiandan",
		"amount8"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/prayer/obj/boris-cloth",
		"file5"    : "/daemon/class/fighter/armband",
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount5"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"file4"    : "/obj/gift/xisuidan",
	]) );
	set( "build", 10280 );
	set( "exits", ([
		"enter"     : "/open/clan/ou-cloud-club/room/room182",
		"east"      : "/open/clan/ou-cloud-club/room/room125.c",
	]) );
	set( "long", @LONG
前 无 古 者 ， 后 无 来 者

凉的休息之处，看起来相当整齐干净
非常舒服的感觉，也可是凉修炼神功之处
明日的泷山之星，在这便可感受到她的气魄
虽然只是女子，但看她精妙的武功，实在不输男子
从她身上发出的淡淡体香，令人难以想像她是泷山第一大师姐
LONG);
	setup();
	replace_program(ROOM);
}
