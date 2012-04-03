inherit ROOM;
void create() {
	set( "short", "װ����" );
	set( "object", ([
		"amount2"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/scholar/obj/icefan",
		"file10"   : "/open/ping/obj/ring-2",
		"file3"    : "/daemon/class/bonze/puty_pullium",
		"amount3"  : 1,
		"file1"    : "/open/capital/room/king/obj/km-boots",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"file8"    : "/daemon/class/fighter/armband",
		"amount7"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"amount8"  : 1,
		"file2"    : "/open/capital/room/king/obj/km-belt",
		"file6"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "owner", "zxcv" );
	set( "light_up", 1 );
	set( "build", 11553 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room137.c",
		"west"      : "/open/clan/hell/room/room143",
	]) );
	set( "long", @LONG
�����ǺٺٺǺǷ�װ���ɵط�,�����ڷ��źٺٺǺ�ƽʱ����ʱ������װ��,��Ȼ�����ϵȻ�,��ȴ���úٺٺǺ�������,������ź���,����֮צ,����ѥ,���˿��.ħ����,��֮����.���м�,...............�ȵ�,���������и��ʺϺٺٺǺǴ���װ����ָ��
,
LONG);
	setup();
	replace_program(ROOM);
}
