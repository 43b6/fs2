inherit ROOM;
void create() {
	set( "short", "九曲桥" );
	set( "object", ([
		"amount1"  : 3,
		"amount3"  : 37,
		"file1"    : "/open/ping/obj/poison_pill",
		"file3"    : "/open/doctor/pill/gnd_pill",
	]) );
	set( "build", 10035 );
	set( "owner", "jsa" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room186",
		"east"      : "/open/clan/sky-wu-chi/room/room200.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
九曲桥向东西蜿蜒而去，两旁盛开的花朵羼着雨丝
散着淡淡清香；花形嫣雅色泽艳丽，气味芬芳四时绽放
，衬着葱郁的枝叶，翠蔓红蘤终年热闹，待风度花丛浓
郁馥盈，真让人疑似无日不春时，有‘出淤泥而不染’
之美称的荷花看起来是那么的高雅圣洁，桥下的鱼儿不
时的探出头来，这里真是个不错的地方。
LONG);
	setup();
	replace_program(ROOM);
}
