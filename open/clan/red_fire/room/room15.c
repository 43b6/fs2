// Room : /open/clan/red_fire/room/room15.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "cmkroom", 1 );
	set( "no_transmit", 1 );
	set( "clan_room", "红莲教" );
	set( "short", "$HIR$忘$NOR$$HIG$忧$NOR$$HIC$雅$NOR$$HIM$筑$NOR$$MAG$书房$NOR$" );
	set( "owner", "borchin" );
	set( "object", ([
		"amount8"  : 1,
		"file1"    : "/open/ping/obj/poison_pill",
		"amount10" : 1,
		"amount3"  : 1,
		"file9"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/obj/gift/xiandan",
		"amount4"  : 101,
		"amount1"  : 38,
		"amount9"  : 1,
		"file3"    : "/obj/gift/shenliwan",
		"amount7"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/fire-hole/obj/b-pill",
		"amount5"  : 15,
		"amount6"  : 1,
		"file7"    : "/obj/gift/unknowdan",
		"file10"   : "/obj/gift/bingtang",
		"amount2"  : 553,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"file5"    : "/open/fire-hole/obj/r-pill",
	]) );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room104",
	]) );
	set( "build", 10440 );
	set( "long", @LONG

这里放满无数的书籍，除了基本的$HIM$四书五经$NOR$之外，更收集
$YEL$古$NOR$$HIC$今$NOR$$HIM$中外$NOR$的各种典籍。随手拿了一本来看，「$HIC$离散数学$NOR$”
书里面所有写的尽是一些深奥难懂的符号，再拿起另外一
本书，「$HIR$线性代数$NOR$”这又是什么东东啊，只见内容一样是
莫宰羊。心想这些书莫非是已经失传的$RED$绝世$NOR$$HIB$武功$NOR$$HIC$密笈$NOR$。


LONG);
	setup();

	}
