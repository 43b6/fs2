inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$NOR$��" );
	set( "object", ([
		"file6"    : "/open/killer/obj/bellstar",
		"file5"    : "/open/killer/obj/bellstar",
		"amount10" : 99999,
		"file7"    : "/open/killer/obj/bellstar",
		"file8"    : "/open/killer/obj/bellstar",
		"amount8"  : 99999,
		"file4"    : "/open/killer/obj/bellstar",
		"amount3"  : 99999,
		"amount9"  : 99999,
		"file2"    : "/open/killer/obj/bellstar",
		"amount7"  : 99999,
		"amount4"  : 99999,
		"amount2"  : 99999,
		"file3"    : "/open/killer/obj/bellstar",
		"file10"   : "/open/killer/obj/bellstar",
		"amount6"  : 99999,
		"amount5"  : 99999,
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/water-ball",
		"file9"    : "/open/killer/obj/bellstar",
	]) );
	set( "build", 10088 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room16.c",
		"west"      : "/open/clan/ou-cloud-club/room/room138.c",
		"up"        : "/open/clan/ou-cloud-club/room/room154",
		"east"      : "/open/clan/ou-cloud-club/room/room134.c",
		"north"     : "/open/clan/ou-cloud-club/room/room197",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

�������ҹ�к�(cowboy)�ķ��䣬�ұ����������轣��(left)֮����
��������������(issei)��ˮ���涴

LONG);
	setup();
	replace_program(ROOM);
}
