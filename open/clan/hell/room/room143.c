inherit ROOM;
void create() {
	set( "short", "װ����" );
	set( "object", ([
		"amount2"  : 1,
		"file7"    : "/open/wu/npc/obj/armband",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file3"    : "/open/ping/obj/ring-2",
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"amount5"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"file8"    : "/open/ping/obj/chilin_legging",
		"amount7"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"amount8"  : 1,
	]) );
	set( "owner", "zxcv" );
	set( "light_up", 1 );
	set( "build", 12984 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room140",
		"west"      : "/open/clan/hell/room/room13.c",
	]) );
	set( "long", @LONG
�����ǺٺٺǺǷ�װ���ɵط�,�����ڷ��źٺٺǺ�ƽʱ����ʱ������װ��,��Ȼ�����ϵȻ�,��ȴ���úٺٺǺ�������,������ź���,����֮צ,����ѥ,���˿��.ħ����,��֮����.���м�,...............�ȵ�,���������и��ʺϺٺٺǺǴ���װ����ָ��
LONG);
	setup();
	replace_program(ROOM);
}
