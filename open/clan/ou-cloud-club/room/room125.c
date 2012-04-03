inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$NOR$��" );
	set( "owner", "skygod" );
	set( "object", ([
		"file4"    : "/open/love/obj/cloth1",
		"amount5"  : 1,
		"file3"    : "/open/magic-manor/obj/wood-ball",
		"amount1"  : 1,
		"file7"    : "/open/ping/obj/gold_hand",
		"amount4"  : 1,
		"file6"    : "/open/magic-manor/obj/fire-ball",
		"file5"    : "/open/scholar/obj/icefan",
		"file1"    : "/open/port/obj/wolf_ring",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 10174 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room149",
		"east"      : "/open/clan/ou-cloud-club/room/room133.c",
		"west"      : "/open/clan/ou-cloud-club/room/room129.c",
		"north"     : "/open/clan/ou-cloud-club/room/room135.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

�������(super)�ļң��ұ����ǽ���٫��(limit)��٫�ƾӣ�

LONG);
	setup();
	replace_program(ROOM);
}
