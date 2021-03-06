inherit ROOM;
void create() {
	set( "short", "小乌龟的装备室" );
	set( "owner", "turtle" );
	set( "object", ([
		"amount10" : 1,
		"file5"    : "/open/killer/obj/k_ring",
		"file2"    : "/open/fire-hole/obj/b-pill",
		"file9"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount8"  : 1,
		"file7"    : "/open/firedancer/npc/eq/r_armbands",
		"file3"    : "/open/firedancer/npc/eq/r_pants",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount2"  : 2,
		"file6"    : "/obj/gift/hobowdan",
		"amount5"  : 1,
		"file10"   : "/daemon/class/fighter/armband",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 313,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10557 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room183",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    你抬头，只见门旁壁上凿四字[乌龟装备]，一踏进门，举目四望
，房中一排排的列满本制书架，衣架等，只见室中壁上，桌上，架上
，柜中，几间，尽皆列满兵刃，式样繁多，都是珍贵宝物。突然传来
一阵阵的怪声，讈调郤异常的凄凉悲切，是你一生之中都从未听到过
这般哭不像哭，笑不像笑的声音。猝不及防的突然闻此异声，使你心
惊胆战，更是吓得遍体泠汗，毛骨悚然，乌龟如影随形出现在你的身
后。

LONG);
	setup();
	replace_program(ROOM);
}
