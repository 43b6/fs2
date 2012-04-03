inherit ROOM;
void create() {
	set( "short", "$HIM$● $HIR$教主 $HIY$玄关$HIM$ ●$NOR$" );
	set( "owner", "fsmud" );
	set( "object", ([
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"amount7"  : 1,
		"file9"    : "/open/wu/npc/obj/armband",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/dancer/obj/yuawaist",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"file10"   : "/daemon/class/fighter/ywhand",
		"amount6"  : 1,
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"file5"    : "/open/killer/obj/k_ring",
		"amount8"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/gsword/obj/yuskirt",
		"amount4"  : 1,
	]) );
	set( "build", 10110 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room110.c",
		"bor"       : "/open/clan/red_fire/room/room102",
		"welo"      : "/open/clan/red_fire/room/room135.c",
		"down"      : "/open/clan/red_fire/room/room113.c",
		"up"        : "/open/clan/red_fire/room/room169.c",
	]) );
	set( "long", @LONG

这理是红莲教暂时的高层会议厅....
厅中的摆设非常的富丽堂皇.........但是这里
一般人是不能进去.....只有帮中的爱玫教主
召集高层开会时才能进去.....其他的帮众
想要参与的......除非经过高层授权
或教主亲自召见......才能进来一窥究竟


LONG);
	setup();
	replace_program(ROOM);
}
