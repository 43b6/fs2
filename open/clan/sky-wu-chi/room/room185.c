inherit ROOM;
void create() {
	set( "short", "寒雪冰霜的小套房" );
	set( "object", ([
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount4"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount8"  : 1,
	]) );
	set( "build", 10207 );
	set( "owner", "roboo" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room182",
	]) );
	set( "long", @LONG
走进房间里，你可以看到寒雪冰霜正在忙着打扫环境呢。旁边的音响正拨放着悠扬的古典音乐，在小茶几上还摆放着一束美丽的玫瑰花，令你觉得整个人都轻松了起来。当你坐下来的时候，你注意到在桌上有一张寒雪冰霜和他女朋友的合照，照片里的他看起来十分的幸福呢。
LONG);
	setup();
	replace_program(ROOM);
}
