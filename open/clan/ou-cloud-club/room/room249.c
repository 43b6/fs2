inherit ROOM;
void create() {
	set( "short", "$HIY$���ƾ�6n$NOR$" );
	set( "object", ([
		"amount5"  : 99999,
		"amount10" : 99999,
		"amount9"  : 99999,
		"amount6"  : 99999,
		"amount4"  : 99999,
		"file5"    : "/open/killer/obj/bellstar",
		"amount8"  : 99999,
		"file3"    : "/open/killer/obj/bellstar",
		"amount7"  : 99999,
		"file2"    : "/open/killer/obj/bellstar",
		"amount3"  : 99999,
		"file7"    : "/open/killer/obj/bellstar",
		"file4"    : "/open/killer/obj/bellstar",
		"file9"    : "/open/killer/obj/bellstar",
		"file10"   : "/open/killer/obj/bellstar",
		"amount2"  : 99999,
		"file8"    : "/open/killer/obj/bellstar",
		"file6"    : "/open/killer/obj/bellstar",
	]) );
	set( "build", 16127 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room302",
		"south"     : "/open/clan/ou-cloud-club/room/room246",
		"west"      : "/open/clan/ou-cloud-club/room/room250.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

�����������(zuba)�ķ��䣬�ұ���������(bleak)�ķ��䡣

LONG);
	setup();
	replace_program(ROOM);
}
