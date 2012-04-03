inherit ROOM;
void create() {
	set( "short", "С־������" );
	set( "owner", "mwf" );
	set( "light_up", 1 );
	set( "object", ([
		"amount2"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/open/snow/obj/figring",
		"amount10" : 1,
		"amount5"  : 1,
		"file8"    : "/open/scholar/obj/icefan",
		"file7"    : "/open/wu/npc/obj/armband",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file1"    : "/open/port/obj/wolf_ring",
		"amount1"  : 1,
		"file10"   : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10001 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room113",
	]) );
	set( "long", @LONG
���ﵽ��������[0;1;35m��[1m��[1m��[1m��[0m���ڿ������ִ���[0;1;33m��[1mC[1m��[1m��[0m���о�
�ͺ�����һ����ʿ������������Զ����һ���ߴ����
Ӱ����ϸһ��ԭ����[0;1;36m��[1mp[1m��[1m��[0m��������Ϣ��ԭ��������[0;1;36m��[1mp[1m��[1m��[0m
��[35m������[0m��[35m��Ϣ��[0m��
LONG);
	setup();
	replace_program(ROOM);
}
