inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$NOR$��" );
	set( "object", ([
		"file10"   : "/open/doctor/obj/feather",
		"file2"    : "/open/doctor/obj/feather",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/doctor/obj/feather",
		"amount3"  : 1,
		"file5"    : "/open/doctor/obj/feather",
		"amount7"  : 1,
		"file1"    : "/open/doctor/obj/feather",
		"file9"    : "/open/doctor/obj/feather",
		"file4"    : "/open/doctor/obj/feather",
		"file8"    : "/open/doctor/obj/feather",
		"amount6"  : 1,
		"file7"    : "/open/doctor/obj/feather",
		"amount5"  : 1,
		"file3"    : "/open/doctor/obj/feather",
		"amount8"  : 1,
		"amount9"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10559 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room200",
		"jump"      : "/open/clan/ou-cloud-club/room/room305",
		"west"      : "/open/clan/ou-cloud-club/room/room198.c",
		"north"     : "/open/clan/ou-cloud-club/room/room246.c",
		"south"     : "/open/clan/ou-cloud-club/room/room18.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

�����С��(mming)�����ķ��䣬�ұ�����������(breeze)����ɽ����

LONG);
	setup();
	replace_program(ROOM);
}
