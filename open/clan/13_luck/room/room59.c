inherit ROOM;
void create() {
	set( "short", "�������С��" );
	set( "owner", "aszyzit" );
	set( "object", ([
		"file3"    : "/open/wind-rain/obj/sun_red_cloth",
		"file9"    : "/open/killer/memory/static",
		"file1"    : "/open/killer/memory/static",
		"amount5"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"file2"    : "/open/killer/memory/static",
		"amount3"  : 1,
		"file5"    : "/open/tendo/obj/chaosbelt",
		"amount1"  : 1,
		"file6"    : "/daemon/class/fighter/figring",
		"file4"    : "/open/mogi/dragon/obj/power",
		"amount4"  : 24,
		"amount6"  : 1,
		"file7"    : "/open/port/obj/wolf_ring",
	]) );
	set( "build", 10119 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room54.c",
		"enter"     : "/open/clan/13_luck/room/room120",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    һ�����䣬�ֿ�����ÿ�찾ҹ�Ŀɺ�ʮ�� chamber������������
Щ���ߣ�turntableÿ�������������Ĳ���EMI�� debug�������ڵ�
�����£�Ҳδ������һ�ݲ���Ĺ���...

        Ҳ�����Լ���Ŭ����ֵ����������������..

LONG);
	setup();
	replace_program(ROOM);
}
