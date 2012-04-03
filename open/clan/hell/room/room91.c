inherit ROOM;
void create() {
	set( "short", "$HIR$‘赤狱混沅’$NOR$焚天魔王人头丢弃室" );
	set( "object", ([
		"amount1"  : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"amount3"  : 1,
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"amount2"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
	]) );
	set( "light_up", 1 );
	set( "build", 10027 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room23",
	]) );
	set( "long", @LONG
说到有人头的地方，就属阴曹地府最多，多到数不完
虽然说焚天魔王是一等一的高手，不过由于阴曹地府有强
力的实力之下，也是轻易打倒，不过这里怎会多到如此多
呢，事实上，地府里面有专门收集别人打赢敌人后所留下
的头，又因为在敌人死后又要来到阴曹地府，所以也就顺
手又多了几个，在狂想里，焚天魔王算是最难打也是最常
去被打的高手，所以多到要被丢到啦机筒去了。。。

LONG);
	setup();
	replace_program(ROOM);
}
