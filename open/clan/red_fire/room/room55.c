inherit ROOM;
void create() {
	set( "short", "$HIM$�� $HIR$���� $HIY$����$HIM$ ��$NOR$" );
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

�����Ǻ�������ʱ�ĸ߲������....
���еİ���ǳ��ĸ����û�.........��������
һ�����ǲ��ܽ�ȥ.....ֻ�а��еİ�õ����
�ټ��߲㿪��ʱ���ܽ�ȥ.....�����İ���
��Ҫ�����......���Ǿ����߲���Ȩ
����������ټ�......���ܽ���һ������


LONG);
	setup();
	replace_program(ROOM);
}
