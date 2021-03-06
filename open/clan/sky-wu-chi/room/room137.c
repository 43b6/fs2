inherit ROOM;
void create() {
	set( "short", "吹雪之松小径" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "object", ([
		"file7"    : "/open/mogi/castle/obj/sspill",
		"amount10" : 95,
		"amount7"  : 171,
		"file6"    : "/open/fire-hole/obj/k-pill",
		"amount6"  : 38,
		"amount3"  : 16,
		"amount5"  : 15,
		"file2"    : "/open/fire-hole/obj/g-pill",
		"file4"    : "/open/fire-hole/obj/b-pill",
		"amount4"  : 200,
		"file3"    : "/open/fire-hole/obj/y-pill",
		"amount9"  : 400,
		"file1"    : "/open/fire-hole/obj/p-pill",
		"file10"   : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 88,
		"amount2"  : 312,
		"file8"    : "/open/fire-hole/obj/r-pill",
		"file5"    : "/open/doctor/pill/human_pill",
		"amount8"  : 380,
		"file9"    : "/open/fire-hole/obj/w-pill",
	]) );
	set( "build", 12120 );
	set( "owner", "ywarter" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room117",
		"enter"     : "/open/clan/sky-wu-chi/room/room136.c",
		"out"       : "/open/clan/sky-wu-chi/room/room151.c",
	]) );
	set( "long", @LONG
走进了[1;37m‘[1;34m霸气堂[1;37m’[0m后，你来到了通往空瓶子卧室的回路小径上
这里气温开始下降，可能是空瓶子的居所是依山而建的，所以也就
往里面走等于是往山上走了上去。气温也越来越低，两旁的松树上
都沾满了厚厚的雪花，四周景色也开始变成一片的雪白色。此时你
已用轻功奔走了快三里的路程，但是就是还没到空瓶子居的后院，
眼中开始因雪花飘飘落下而模糊起来。

LONG);
	setup();
	replace_program(ROOM);
}
