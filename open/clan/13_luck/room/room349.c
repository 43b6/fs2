inherit ROOM;
void create() {
	set( "short", "��ϵ�δ��ķ���" );
	set( "object", ([
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 12,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount5"  : 1,
		"amount1"  : 33,
		"file5"    : "/daemon/class/blademan/obj/ublade",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"amount7"  : 1,
		"file10"   : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"amount3"  : 6,
		"file3"    : "/open/mogi/castle/obj/sspill",
	]) );
	set( "build", 10140 );
	set( "owner", "konanii" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room342",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ������ϵ�δ��ķ��䣬ֻ���ſ�վ�ŷ磬�أ�ˮ�����Ǵ�������
������ϵ�δ������õ�GM�����������ķ��䣬�߽�ȥһ������һ����
���ܸ�һ�����߼ܣ����������ķ���һЩ�����������۵�װ�����ٽ�
ȥ������һ�����������Ϸ�һ�����ԣ�������ϵ�δ�������֮�����
�������ƨ�õģ��������ǵ��ۣ�ͻ����ϵ�δ����ڳ����Ұ�ġ�


LONG);
	setup();
	replace_program(ROOM);
}
