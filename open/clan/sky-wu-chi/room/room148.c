inherit ROOM;
void create() {
	set( "short", "���ƾ�" );
	set( "owner", "herozero" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"west"      : "/open/clan/sky-wu-chi/room/room96",
	]) );
	set( "object", ([
		"amount4"  : 1,
		"file2"    : "/open/doctor/pill/sky_pill",
		"amount6"  : 4,
		"amount9"  : 1,
		"file6"    : "/open/doctor/pill/ice_pill",
		"file8"    : "/open/doctor/pill/gnd_pill",
		"amount5"  : 1,
		"file1"    : "/open/mogi/castle/obj/blood-water",
		"amount3"  : 1,
		"amount1"  : 4,
		"file9"    : "/obj/gift/xiandan",
		"file5"    : "/open/mogi/dragon/obj/power",
		"amount7"  : 1,
		"file3"    : "/open/mogi/castle/obj/leave",
		"file10"   : "/obj/gift/hobowdan",
		"file4"    : "/obj/gift/lingzhi",
		"amount10" : 1,
		"file7"    : "/open/killer/obj/kill_yar_head",
		"amount2"  : 13,
		"amount8"  : 38,
	]) );
	set( "light_up", 1 );
	set( "build", 11440 );
	set( "long", @LONG
����һ�����������ǰ����һ�䲻���۵�С�ݣ�ֻ����ǰ�з���
�������ڴ�ɽ�У����֪���������Ȼ����������Ī��������ʿס
������������ڣ�����ֻ�м򵥵ĳ��裬¯�������Ų�ˮ�����ϵ���
�������������Ŵ�����ٵĺ�����������ĳ�����һƬ������
LONG);
	setup();
	replace_program(ROOM);
}
