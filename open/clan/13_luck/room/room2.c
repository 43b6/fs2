inherit ROOM;
void create() {
	set( "short", "ӽȪͤ" );
	set( "build", 11257 );
	set( "object", ([
		"amount10" : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/main/obj/dragon-moon",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount7"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room154",
		"west"      : "/open/clan/13_luck/room/hall.c",
	]) );
	set( "long", @LONG

    ��ӽȪͤ��ֻ��һ��ʯ���ͼ���ʯ�Σ�������������Щ��ʷ�˵���
��ǰԶ��ʱ����е��ǳ����ˣ���ΪĿ�ĵؼ��������ʯ���Ϸ���һ
�����ӣ���������������һ�̣����������⿴ȥ���Խ�����Ȫ�ķ�⾡
���۵ף�����Ҳ��������ϲ���ĵط���

LONG);
	setup();
	replace_program(ROOM);
}
