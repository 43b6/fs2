inherit ROOM;
void create() {
	set( "short", "特殊物品房间" );
	set( "owner", "puffy" );
	set( "object", ([
		"amount3"  : 2,
		"amount10" : 1,
		"amount2"  : 1,
		"file6"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"file2"    : "/open/gblade/obj/sa-head",
		"amount4"  : 1,
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/gblade/obj/sa-head",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"amount9"  : 1,
		"file9"    : "/open/gblade/obj/sa-head",
		"amount8"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/mogi/dragon/obj/dragon-head",
		"file3"    : "/open/mogi/mountain/obj/frog-pill",
		"amount6"  : 1,
		"amount5"  : 1,
		"file7"    : "/obj/gift/bingtang",
		"amount1"  : 1,
	]) );
	set( "build", 10086 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room162",
	]) );
	set( "long", @LONG
这里是小二的人头间
放着各式各样的人头
有焚天魔王的人头
有黄金甲龙的人头
有独孤嵊的人头
有林宏升的人头
还有七色回路魔将的人头
黑白双煞的人头
和杀手需要的人头
真的是应有尽有
看来这里是小二为了展示他的战利品而开的room
看来小二也真够强的了
LONG);
	setup();
	replace_program(ROOM);
}
