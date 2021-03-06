inherit ROOM;
void create() {
	set( "short", "医务室" );
	set( "owner", "wyld" );
	set( "object", ([
		"amount6"  : 102,
		"amount1"  : 98,
		"file6"    : "/open/doctor/item/sky_item",
		"file7"    : "/open/magic-manor/obj/evil-kill-claw",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/doctor/item/human_item",
		"amount4"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 11076 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room59",
	]) );
	set( "long", @LONG
闻到浓浓的药水味..就知道这是小护士的医务室..摆着多种的药材
有着红药水..绿药水..蓝药水..跟紫药水..跟优碘..
当然也帮忙开刀..跟急诊..最重要人死在这边..还会送一套棺材给你.
祝你儿子代代中状元..对呀..代代赚大钱..对呀..
LONG);
	setup();
	replace_program(ROOM);
}
