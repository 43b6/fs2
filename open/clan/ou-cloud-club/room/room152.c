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
		"file1"    : "/daemon/class/blademan/obj/six-neck",
		"file9"    : "/open/killer/obj/bellstar",
	]) );
	set( "build", 10157 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room153.c",
		"up"        : "/open/clan/ou-cloud-club/room/room164.c",
		"north"     : "/open/clan/ou-cloud-club/room/room149.c",
		"east"      : "/open/clan/ou-cloud-club/room/room151.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

����ǻ���Ѽ(oasis)�ķ��䣬�ұ�����С��(sisao)�ķ��䣮

LONG);
	setup();
	replace_program(ROOM);
}
