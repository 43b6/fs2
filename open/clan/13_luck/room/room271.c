inherit ROOM;
void create() {
	set( "short", "��ѩ�����" );
	set( "object", ([
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount2"  : 1,
		"file7"    : "/open/ping/obj/gold_hand",
		"amount10" : 1,
		"amount1"  : 1,
		"file4"    : "/open/ping/obj/ring-2",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"amount6"  : 1,
		"amount5"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
	]) );
	set( "owner", "force" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room278",
		"south"     : "/open/clan/13_luck/room/room300.c",
	]) );
	set( "build", 10224 );
	set( "light_up", 1 );
	set( "long", @LONG

    ��˵�л���˱�ס����䣬�������˶���ʱ���޷��ƶ����˽�����
ƽ��˰�ٵ����У�����������Ϊ����䣬������һ���ǮҲ����ν��Ϊ
������һֻ����䣬���Ժ������������������ʹ������Ĵ�������
���һ������Ը����������������

LONG);
	setup();
	replace_program(ROOM);
}
