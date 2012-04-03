inherit ROOM;
void create() {
	set( "short", "��-��-��-��-��." );
	set( "owner", "palapala" );
	set( "light_up", 1 );
	set( "build", 10361 );
	set( "object", ([
		"amount9"  : 1,
		"file7"    : "/open/ping/questsfan/obj/diamond_armor",
		"file6"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount5"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/ping/questsfan/obj/diamond_hands",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount8"  : 1,
		"file8"    : "/open/dancer/obj/yuaboots",
		"file2"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file5"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount7"  : 1,
		"file9"    : "/open/dancer/obj/yuawaist",
		"file1"    : "/daemon/class/fighter/ywhelme",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/ping/questsfan/obj/diamond_hairpin",
	]) );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room145",
	]) );
	set( "long", @LONG
���߽���һ��������Ժһ���ķ������棬�㷢����������ǳ�������
���ϵİ������ʯש�������ԵĻ���ʢ����ˮ�ɻ��������ӳ�ŷ·���
��˵���ⷿ�ӵ������Ǹ��ǳ�����������ˣ�����Ĳ�Ƥ������һ
��һ���¶������С�ݵ�Ҷ���ϣ���о����߽���ʱ���������Ŀ���
���ĸо�����Խ��Խ����ʶ�������ӵ����˵�����˭

LONG);
	setup();
	replace_program(ROOM);
}
