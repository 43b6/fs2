inherit ROOM;
void create() {
	set( "short", "炼丹房" );
	set( "owner", "puffy" );
	set( "object", ([
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 220,
		"amount4"  : 211,
		"amount8"  : 1,
		"file8"    : "/obj/gift/lingzhi",
		"file6"    : "/open/fire-hole/obj/k-pill",
		"file4"    : "/open/fire-hole/obj/y-pill",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount5"  : 198,
		"amount1"  : 516,
		"file5"    : "/open/fire-hole/obj/w-pill",
		"file9"    : "/open/fire-hole/obj/b-pill",
		"amount7"  : 10,
		"file2"    : "/open/fire-hole/obj/r-pill",
		"file10"   : "/obj/gift/shenliwan",
		"amount9"  : 327,
		"amount3"  : 100,
		"file3"    : "/open/fire-hole/obj/p-pill",
		"file7"    : "/open/mogi/castle/obj/sspill",
	]) );
	set( "build", 10087 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room162",
	]) );
	set( "long", @LONG
这里是小二的炼丹房
所有FS里面的稀有丹药
不管是龙丹还是补满血的丹药
或是超贵的super pill
这里都有...此时你居然看到
偶发事件的丹药
神力丹,仙丹...等
这...小二真的是太神通广大了
不过...你不是小二拿不出来
想吃....去问问小二吧...
LONG);
	setup();
	replace_program(ROOM);
}
