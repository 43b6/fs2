inherit ROOM;
void create() {
	set( "short", "���鵤ҩ��" );
	set( "owner", "amei" );
	set( "object", ([
		"amount9"  : 2,
		"amount1"  : 141,
		"file4"    : "/open/killer/obj/s_pill",
		"file2"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount6"  : 314,
		"amount5"  : 131,
		"amount7"  : 1,
		"file8"    : "/open/doctor/pill/gnd_pill",
		"file10"   : "/open/doctor/pill/sky_pill",
		"file5"    : "/open/doctor/pill/human_pill",
		"amount3"  : 1,
		"amount4"  : 15,
		"file9"    : "/open/fire-hole/obj/r-pill",
		"amount2"  : 1,
		"file7"    : "/open/fire-hole/obj/g-pill",
		"amount10" : 3,
		"amount8"  : 9,
		"file6"    : "/open/doctor/pill/gnd_pill",
		"file1"    : "/open/doctor/pill/sky_pill",
	]) );
	set( "build", 10046 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room293",
	]) );
	set( "long", @LONG
������AMEI�����־�����ҩ֮�е����鵤�ĵط����������Ч
�����ָܻ����е���������������ϧ�����������ת�߻�����
�����컯���Ĺ�Ч���Ĳ�������ò���ǰ�������־����ɵ�
�����鵤������ǿ�ģ����Ҳ�����ȡ�ü�������Ҫ�ǵ�Ҫ��
AMEI˵O��������
LONG);
	setup();
	replace_program(ROOM);
}
