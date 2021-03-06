inherit ROOM;
void create() {
	set( "short", "$HIW$封印之城 $MAG$凤$NOR$兮$HIR$舞$HIC$天$HIY$翔$NOR$" );
	set( "light_up", 1 );
	set( "build", 11043 );
	set( "object", ([
		"amount10" : 1,
		"file8"    : "/open/dancer/obj/yuaboots",
		"file7"    : "/open/dancer/obj/yuaboots",
		"file5"    : "/open/dancer/obj/yuaboots",
		"file4"    : "/open/dancer/obj/yuaboots",
		"file10"   : "/open/dancer/obj/yuaboots",
		"file1"    : "/open/dancer/obj/yuaboots",
		"file6"    : "/open/dancer/obj/yuaboots",
		"file9"    : "/open/dancer/obj/yuaboots",
		"amount4"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/dancer/obj/yuaboots",
	]) );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room156",
		"up"        : "/open/clan/ou-cloud-club/room/room159",
	]) );
	set( "long", @LONG

    烈焰滔天,帜热的圣火在你面前掀起一道千尺高的火网,却无法压下你
对火焰背后不寻常反应的疑问,运足超越本身极限的十二成功力,一口气冲
进火网,却见到令人惊异的景象,只见一头凤凰正在烈焰当中翩翩起舞,完全
不把身旁的致命圣火当作一回事,原来是每五百年才出现一次的浴火凤凰,
看着祂优雅圣洁的舞姿,让人心神醉驰,就在这令人我之际,神圣的灵兽全身
覆上火焰,化成一道耀眼火光,飞向天际,你身旁的圣火同时消逝无踪,良久,
天上降下一道神光,一双绝对惊世骇俗的神器缓缓降下...

LONG);
	setup();
	replace_program(ROOM);
}
