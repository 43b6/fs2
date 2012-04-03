inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$NOR$��" );
	set( "object", ([
		"amount7"  : 1,
		"file6"    : "/open/love/obj/shield",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount8"  : 1,
		"file10"   : "/open/prayer/obj/boris-cloth",
		"file2"    : "/open/poison/obj/pearl",
		"file1"    : "/open/scholar/obj/s_hands",
		"amount9"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file9"    : "/open/wu/npc/obj/armband",
		"file7"    : "/open/ping/obj/ring-2",
		"amount10" : 1,
	]) );
	set( "owner", "saysay" );
	set( "build", 10343 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room150",
		"east"      : "/open/clan/ou-cloud-club/room/room218",
		"north"     : "/open/clan/ou-cloud-club/room/room125.c",
		"south"     : "/open/clan/ou-cloud-club/room/room152.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣
������������������������������������������
�����С����(kiroro)�İ���԰���ұ������������(flyindance)�ķ��䣮

LONG);
	setup();
	replace_program(ROOM);
}
