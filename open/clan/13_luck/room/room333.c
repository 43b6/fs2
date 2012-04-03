inherit ROOM;
void create() {
	set( "short", "神风之道" );
	set( "object", ([
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount4"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/capital/obj/chen_dagger",
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount6"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 1,
	]) );
	set( "owner", "smalloo" );
	set( "build", 10374 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room334",
		"north"     : "/open/clan/13_luck/room/room335.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    你的直觉告诉你，就快到[0;1;34m□[1m□[1m□[1m□[1m□[1m□[0m了。你心中冲满了[0;1;33m□[1m□[1m□[1m□[0m和[0;1;35m□[1m□[1m□[1mQ[0m。
阴风吹袭的愈来愈强烈，仿佛像你说道，想到[0;1;34m□[1m□[1m□[1m□[1m□[1m□[0m，轻功不够等于
死路一条，此时你被阴风吹的你快稳不住脚步。你运起[0;1;33m□[1m□[1m□[1m□[0m，不停的
加快脚步向前走去。此时厚厚黑黑的云层吹过来，压得你喘不过气来
，连忙[0;1;33m□[1mB[1m□[1m\[0m自保。


LONG);
	setup();
	replace_program(ROOM);
}
