inherit ROOM;
void create() {
	set( "short", "���׵���Ϣ��" );
	set( "object", ([
		"file5"    : "/u/d/dhk/questsfan/obj/diamond_cloak",
		"amount4"  : 1,
		"file7"    : "/open/capital/guard/gring",
		"amount6"  : 1,
		"file3"    : "/u/d/dhk/questsfan/obj/diamond_hands",
		"amount2"  : 1,
		"amount7"  : 1,
		"file6"    : "/u/d/dhk/questsfan/obj/diamond_hairpin",
		"file10"   : "/u/d/dhk/questsfan/obj/diamond_boots",
		"amount10" : 1,
		"file1"    : "/u/d/dhk/questsfan/obj/diamond_skirt",
		"amount1"  : 1,
		"file9"    : "/u/d/dhk/questsfan/obj/diamond_legging",
		"file2"    : "/u/d/dhk/questsfan/obj/diamond_belt",
		"amount3"  : 1,
		"file8"    : "/open/prayer/obj/boris-hat",
		"amount8"  : 1,
		"amount9"  : 1,
		"file4"    : "/u/d/dhk/questsfan/obj/diamond_armor",
		"amount5"  : 1,
	]) );
	set( "build", 10161 );
	set( "light_up", 1 );
	set( "owner", "gendor" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room183.c",
	]) );
	set( "long", @LONG
    ������һ�����صĵ����ң���������ʮ�����ɫ�Ľ��ˣ�ÿһ����˶�
����һ����ͬ�����ƣ������ǵı���Ҳ���Ŷ�����������ͬ������������
�ܵĴ���������Ϣ�����������һ��,���׶����������
����Ϣ�õĵط�0
LONG);
	setup();
	replace_program(ROOM);
}
