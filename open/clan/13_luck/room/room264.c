inherit ROOM;
void create() {
	set( "short", "���û�ϥ��" );
	set( "object", ([
		"amount10" : 1,
		"amount9"  : 1,
		"file1"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount5"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file4"    : "/open/scholar/obj/icefan",
		"amount2"  : 1,
		"file2"    : "/open/ping/obj/gold_hand",
		"amount1"  : 1,
		"file9"    : "/open/gsword/obj/yuskirt",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount6"  : 1,
	]) );
	set( "owner", "mei" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room308",
		"south"     : "/open/clan/13_luck/room/room303.c",
	]) );
	set( "build", 10245 );
	set( "light_up", 1 );
	set( "long", @LONG

    �˷��ߣ�Ϊ�����޲����Ƶ���ǧ������������������еģ�������
ǧ��֮�����������ڳ���ɽ���������������������ܵУ�����Ϊ��ֻ��
һ���Ӵ���״̬���������������������ķ��߲���˵�о��еģ�ҲҪ
����û���˸�ȥ��Ϊ����һ��[0;1;33m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[0m��

LONG);
	setup();
	replace_program(ROOM);
}
