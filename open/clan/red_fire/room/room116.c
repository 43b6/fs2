inherit ROOM;
void create() {
	set( "short", "$HIC$威洛$NOR$的$HIW$卧房$NOR$" );
	set( "object", ([
		"file2"    : "/open/gsword/obj/dragon-cloth",
		"file8"    : "/open/gsword/obj/dragon-sword",
		"amount1"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/dancer/obj/yuawaist",
		"file5"    : "/daemon/class/scholar/obj/gold_pen",
		"amount8"  : 1,
		"file7"    : "/open/ping/obj/cloud",
		"amount7"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount4"  : 1,
		"amount3"  : 24,
		"file4"    : "/open/main/obj/et_sword",
		"file1"    : "/open/main/obj/et_sword",
		"file3"    : "/open/ping/obj/poison_pill",
		"amount9"  : 1,
		"amount2"  : 1,
	]) );
	set( "build", 10526 );
	set( "item_desc", ([
		"舒适的大床" : @ITEM
这是一张舒适的大床
ITEM,
	]) );
	set( "owner", "welo" );
	set( "exits", ([
		"out"       : "/open/clan/red_fire/room/room117",
		"east"      : "/open/clan/red_fire/room/room115",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

这是$HIC$威洛$NOR$日常生活起居的地方，舒适的$HIW$床铺$NOR$上有着舒服
的$HIM$棉被$NOR$与$HIY$枕头$NOR$，让你一见就想上去躺躺看，床头柜上有
着一个小$HIR$烛台$NOR$，这是为了剑士$HIC$威洛$NOR$睡觉前喜欢看书的坏
习惯。卧房的布置果然跟其他地方不一样，充满着$HIY$温馨$NOR$
的感觉，温暖的$HIM$色调$NOR$让你不由自主的放松心情，在历经
武林间的打打杀杀之后，$HIC$威洛$NOR$最想做的事情便是回到卧
房好好的睡上一觉。旁边有个$HIB$落地窗$NOR$，窗外是个种满植
物的$HIW$阳台$NOR$。


LONG);
	setup();
	replace_program(ROOM);
}
