inherit ROOM;
void create() {
	set( "short", "$HIR$����$HIC$��$NOR$��" );
	set( "object", ([
		"amount8"  : 1386,
		"file6"    : "/open/gblade/obj/dragon_book",
		"file4"    : "/open/ping/obj/ring-2",
		"amount6"  : 1,
		"file7"    : "/open/fire-hole/obj/w-pill",
		"amount1"  : 247,
		"file5"    : "/open/scholar/obj/icefan",
		"file8"    : "/open/fire-hole/obj/g-pill",
		"amount4"  : 1,
		"file1"    : "/open/fire-hole/obj/r-pill",
		"amount3"  : 1,
		"file2"    : "/open/port/obj/wolf_ring",
		"amount7"  : 293,
		"file3"    : "/open/main/obj/shiblade",
		"amount5"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "moblade" );
	set( "build", 10019 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/ou-cloud-club/room/room10",
		"east"      : "/open/clan/ou-cloud-club/room/room107.c",
	]) );
	set( "long", @LONG
��а������������֮�أ��Դӵ�а����������ħ����֮����
־Ҫ���ʧ���Ѿõ�������ȴ���ڶԵ������򲻹����޷�ɱ��ħ��
���ض�һ�ٶ��������������֮ɫ������������Ծ��ڴ˵ؾ�˼��
ѧ���������ƹض���ʱ��Ҳ�������������ˣ���

LONG);
	setup();
	replace_program(ROOM);
}
