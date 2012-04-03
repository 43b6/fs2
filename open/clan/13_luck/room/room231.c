inherit ROOM;
void create() {
	set( "short", "��С�Ͳر����" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount5"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/ping/obj/ring-2",
		"amount7"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"file5"    : "/open/wu/npc/obj/armband",
		"file4"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"amount6"  : 1,
		"file2"    : "/open/dancer/obj/yuawaist",
	]) );
	set( "owner", "sznn" );
	set( "build", 10293 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room287",
		"west"      : "/open/clan/13_luck/room/room101.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��һ���žͱ�����ҫ�۵Ĺ�â����������ϸһ������ȫ������ǿ
�������ͷ��߶�ʱ�е�����˼�飬�����������������ȡ�����ǿ��
�Ķ������а�����ǿ�����Ϻ�о�ȫ���ս�������������������˲�
�٣���װ�����ϳ���ս����������ɱ

LONG);
	setup();
	replace_program(ROOM);
}
