inherit ROOM;
void create() {
	set( "short", "����" );
	set( "owner", "hild" );
	set( "object", ([
		"amount6"  : 82,
		"amount5"  : 49,
		"file1"    : "/open/ping/obj/poison_pill",
		"file8"    : "/open/doctor/pill/gnd_pill",
		"amount8"  : 8,
		"file6"    : "/open/fire-hole/obj/w-pill",
		"amount9"  : 1,
		"file3"    : "/open/fire-hole/obj/r-pill",
		"amount4"  : 12,
		"file5"    : "/open/fire-hole/obj/p-pill",
		"file9"    : "/obj/gift/xisuidan",
		"amount1"  : 53,
		"file7"    : "/open/doctor/pill/sky_pill",
		"amount7"  : 14,
		"amount3"  : 88,
		"file2"    : "/open/doctor/pill/gnd_pill",
		"file4"    : "/open/fire-hole/obj/b-pill",
		"amount2"  : 75,
	]) );
	set( "build", 10004 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room168.c",
	]) );
	set( "long", @LONG
�ⷿ����������а��Ե����з�����ϸһ���м��и�������ʯ��������
���еĹؼ���һ��Ҫ�߽�ȥ����Ȼ���׹����ػ�һ��������ʰ����Ҫ��
���ⷿ�䣬����Ҫ���׾�����Ҫ���൱���˽⣬��Ҫ�п��õ�������Ҫ
��Ȼһ�������У�û���˿����ӳ���ط�������ƽ�����£��þ��ͻ��
����������ֻ���������ķݡ�

LONG);
	setup();
	replace_program(ROOM);
}
