inherit ROOM;
void create() {
	set( "short", "��ȸ�ÿ�" );
	set( "owner", "aman" );
	set( "object", ([
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"amount2"  : 9,
		"amount7"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/fire-hole/obj/r-pill",
		"amount10" : 1,
		"amount4"  : 2,
		"file5"    : "/open/ping/obj/ring-2",
		"amount6"  : 1,
		"file3"    : "/open/snow/obj/figring",
		"file4"    : "/open/mogi/castle/obj/sspill",
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
	]) );
	set( "build", 10377 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room14",
		"west"      : "/open/clan/13_luck/room/room16.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����������ȸ�õ����棬���űߵ�ʯ�����ŷ�ˣ�����������ź�
������˵�˺����ǻ������԰����ʱ�䣬��ʮ������Ļ���ʦ��һ��һ
�����������ϵģ�ʹ�����������ԡ������������ʧ����ֻ���Ҳ��ʮ
������ľ���������

LONG);
	setup();
	replace_program(ROOM);
}
