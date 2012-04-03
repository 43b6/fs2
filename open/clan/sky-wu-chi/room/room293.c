inherit ROOM;
void create() {
	set( "short", "����ҩ��" );
	set( "owner", "amei" );
	set( "object", ([
		"amount10" : 1,
		"file10"   : "/open/magic-manor/obj/maun-shadow-blade",
		"file2"    : "/open/doctor/pill/gnd_pill",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount3"  : 24,
		"amount2"  : 245,
		"file4"    : "/open/doctor/pill/human_pill",
		"amount6"  : 1,
		"file3"    : "/open/doctor/item/sick_item",
		"amount5"  : 41,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 354,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/doctor/item/sick_item",
		"file1"    : "/open/doctor/pill/sky_pill",
		"file9"    : "/open/gblade/obj/dragon_book",
		"amount4"  : 1510,
	]) );
	set( "build", 10815 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room286.c",
		"east"      : "/open/clan/sky-wu-chi/room/room233.c",
		"back"      : "/open/clan/sky-wu-chi/room/room251",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"north"     : "/open/clan/sky-wu-chi/room/room292.c",
	]) );
	set( "long", @LONG
������AMEI������ҩ������������˾������鵤��Щ��ҩʮ�ֵ����
��������û�еõ�ͬ����������O�������ǰ�����Ҫȥ���ħ��ʱһ��
���õ���Щ��ҩ���������м���Ļ�Ҳ���Ը�AMEI˵һ��������Щ�����
ǧ��Ҫ�Լ���O.......
LONG);
	setup();
	replace_program(ROOM);
}
