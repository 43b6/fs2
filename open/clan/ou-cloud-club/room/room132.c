inherit ROOM;
void create() {
	set( "short", "私藏馆" );
	set( "object", ([
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/daemon/class/fighter/armband",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount8"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file4"    : "/daemon/class/fighter/figring",
		"amount2"  : 1,
		"amount10" : 1,
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"file5"    : "/open/tendo/obj/chaosbelt",
		"amount4"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "owner", "saysay" );
	set( "build", 10181 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room119.c",
	]) );
	set( "long", @LONG
此处放着剑君十二恨的私藏防具，可用来激发内力用，桌上
摆的有金风细雨楼那打来的$HIR$夕霞红纱$NOR$，魔刀门的$HIC$魔法盾$NOR$，跟舞清
风身上的$HIY$妖幻披肩$NOR$，$HIY$头带$NOR$，$HIY$护膝$NOR$，跟泷山任正晴的$HIR$阳炎臂环$NOR$及$HIY$狂
龙翔天破$NOR$，而桌后椅上则摆着$YEL$混沌腰带$NOR$，$HIC$罗刹女饰$NOR$跟$HIY$幸运草环$NOR$．

LONG);
	setup();
	replace_program(ROOM);
}
