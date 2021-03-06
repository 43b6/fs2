inherit ROOM;
void create() {
	set( "short", "$HIC$剑圣居$NOR$" );
	set( "owner", "mudu" );
	set( "object", ([
		"amount8"  : 1,
		"amount3"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/daemon/class/fighter/figring",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/wind-rain/obj/sun_red_cloth",
		"file5"    : "/open/tendo/obj/chaosbelt",
	]) );
	set( "build", 10223 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room246.c",
		"west"      : "/open/clan/sky-wu-chi/room/room271.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
 穿过门帘来到一间寂静的空旷密室，墙上挂着一幅达摩祖师的面壁画像
 ，庄严的气息布满四周，一个英俊挺拔的剑士盘膝打坐于密室中央，一副慈
 祥的面容仿佛灵魂早已出窍悠游于九天云外，如果你对修禅有所兴趣，或许
 可以就地打坐，等待剑士醒来再跟他请教一番。

LONG);
	setup();
	replace_program(ROOM);
}
