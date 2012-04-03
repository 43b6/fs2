inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "andylin" );
	set( "object", ([
		"file7"    : "/open/gsword/obj/yuskirt",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/fire-hole/obj/g-pill",
		"amount5"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"amount4"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file5"    : "/open/ghost-hole/obj/flute",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount3"  : 6,
		"amount1"  : 1,
		"amount10" : 1,
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"file8"    : "/obj/gift/bingtang",
		"amount2"  : 9,
		"file4"    : "/daemon/class/bonze/puty_pullium",
	]) );
	set( "build", 10048 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room74.c",
		"north"     : "/open/clan/red_fire/room/room112",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�����Ƿ����ӵ�һ������ŵı����������������������ǿ
�������ı�����ƽ�����Ҳ�����ͨ�����ﶼ�У������������ǽ�ֹ
�����ȡ�����ġ������ŵĶ���ͨ�����ϱ���Ҳ�����õ�������
����Ҫ�Ļ��Ǻ���������Ķ����ġ����һ�ᣬƽ�������õ�����
�����콣�ͺ�������ǵ�ʹ�ú�Żء�


LONG);
	setup();
	replace_program(ROOM);
}
