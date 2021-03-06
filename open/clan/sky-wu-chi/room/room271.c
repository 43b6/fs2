inherit ROOM;
void create() {
	set( "short", "$HIG$铸$HIM$剑$HIY$台$NOR$" );
	set( "owner", "mudu" );
	set( "object", ([
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/gsword/obj1/khelmet",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/main/obj/bird_legging",
		"file2"    : "/open/tendo/obj/red_dragon_chain",
		"amount4"  : 1,
		"file3"    : "/open/gsword/obj1/karmband",
		"amount9"  : 1,
		"file1"    : "/open/fire-hole/obj/g-pill",
		"file10"   : "/open/magic-manor/obj/magic-sign",
		"amount2"  : 1,
		"amount1"  : 9,
		"file5"    : "/open/main/obj/m_cloak",
		"file9"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "build", 10030 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room221",
	]) );
	set( "long", @LONG
四周摆满了一堆材料，各式各样的钢材还有剑身靠在墙边，
一池清澈的水摆在火炉边，火炉里的木炭正在熊熊的燃烧着，四
周的温度十分的高，你不经留下汗来，正当你走出来时却踢到一
块漆黑的东西，你心想莫非这是传说中的玄铁吗？？？
LONG);
	setup();
	replace_program(ROOM);
}
