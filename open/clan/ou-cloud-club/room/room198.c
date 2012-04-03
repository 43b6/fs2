inherit ROOM;
void create() {
	set( "short", "С��������" );
	set( "object", ([
		"file5"    : "/open/ping/obj/gold_hand",
		"amount7"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount4"  : 1,
		"amount3"  : 3,
		"file6"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"file9"    : "/daemon/class/fighter/figring",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount9"  : 1,
		"file3"    : "/open/mogi/castle/obj/sspill",
		"amount8"  : 1,
		"amount2"  : 4,
		"amount6"  : 1,
		"file2"    : "/open/fire-hole/obj/b-pill",
	]) );
	set( "owner", "mming" );
	set( "light_up", 1 );
	set( "build", 10054 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room197.c",
		"west"      : "/open/clan/ou-cloud-club/room/room235",
	]) );
	set( "long", @LONG
��δ���뷿��ǰ������ĺ����ѱ�������͸�����������ƿ�
���ص�ʯ�Ž��뷿���ڣ�ӭ������ĵ���Ȼ��Ϣ�������书����
�ϲ�����ʹ���£����ѿ������ӵ������������ڹ���������
·�ߡ�������ʲô��û�У�Ψһ����עĿ���ǰ��������������
һ������Ĵ���һ��ɢ�������ȵĴ���������С���������ڹ���
������

LONG);
	setup();
	replace_program(ROOM);
}
