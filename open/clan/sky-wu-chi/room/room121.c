inherit ROOM;
void create() {
	set( "short", "武器房" );
	set( "owner", "biwem" );
	set( "object", ([
		"file4"    : "/open/killer/obj/black",
		"amount3"  : 1,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file1"    : "/open/killer/obj/bellstar",
		"amount4"  : 15,
		"amount2"  : 1,
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 2296,
	]) );
	set( "light_up", 1 );
	set( "build", 10051 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room210",
	]) );
	set( "long", @LONG
这里所放的正是罕世珍宝，所有名家武器防具尽收其内，刀光剑影四散飞射，
其不是有人舞剑，而是名刀名剑所散发出的霸气，房内正中间的两方挂着两幅
字联盗亦有盗，侠盗高飞，而中间放着正是罕闻寄宝无名宝刀，他在散发出无
与伦比的霸气，使别人不敢轻易进入此房间。
LONG);
	setup();
	replace_program(ROOM);
}
