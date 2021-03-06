inherit ROOM;
void create() {
	set( "short", "往空瓶子兵器室入口" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file1"    : "/open/doctor/pill/sky_pill",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"file2"    : "/open/ping/obj/poison_pill",
		"file5"    : "/obj/gift/shenliwan",
		"amount2"  : 51,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount1"  : 11,
	]) );
	set( "owner", "ywarter" );
	set( "build", 10017 );
	set( "exits", ([
		"enter"     : "/open/clan/sky-wu-chi/room/room124",
		"south"     : "/open/clan/sky-wu-chi/room/room137.c",
	]) );
	set( "long", @LONG
这里是往空瓶子兵器室的通道..当你还没进去入口之前你已经看到
一些不是顶好的兵器,但也是有名的武器被丢在一旁了...你不禁的想到
要是里面的武器没有比现在的更好才怪..但是到底是什么武器才算是
可以放进这兵器室里面呢..你又不禁的想着..嗯..看来还是要一探究竟
才会知道里面到底是有些什么样的好兵器

LONG);
	setup();
	replace_program(ROOM);
}
