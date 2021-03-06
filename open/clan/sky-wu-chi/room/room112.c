// Room : /open/clan/sky-wu-chi/room/room112.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
你进入了太子的神秘小屋里..看着里面的装饰，使你感觉到有一
股很神秘的力量似的！你无意间看到墙上悬挂着一个$HIY$告示板 (Board)$NOR$
，在往里面走看到了许多奇奇怪怪的物品，让你看都看不懂..导致你
头昏脑胀的很不舒服！恨不得赶紧离开此地..
　　　　　　　　$HIC$(此地凝聚一股很强大的寒气)$NOR$

LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "out" : "/open/clan/sky-wu-chi/room/room111",
]) );
	set( "clan_room", "天道无极" );
	set( "item_desc", ([ /* sizeof() == 1 */
  "board" : "这里是屋主 太子(James)的发呆、蹲内力、休息..之处。
",
]) );
	set( "short", "懒人．神秘小屋 " );
	set( "owner", "lazycancer" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file3"    : "/obj/gift/unknowdan",
		"amount6"  : 1,
		"file2"    : "/obj/gift/hobowdan",
		"amount10" : 1,
		"amount3"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
	]) );
	set( "build", 10068 );
	set( "light_up", 1 );
	setup();

	}
