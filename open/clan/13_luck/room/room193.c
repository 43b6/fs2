inherit ROOM;
void create() {
	set( "short", "���黨԰" );
	set( "owner", "roarii" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
		"file6"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10833 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room4",
	]) );
	set( "long", @LONG

    ����ǻƳǴ���Եļ��黨԰��������۹�ȥһ��Ƭ�Ļ����ݲݣ�
ƽ��ʱ���Կ���һЩ�������ǹ�Ů�����ͻ���Ϸ�������۷��໥���ޣ�
�����������Ĵ�ٹ��ˣ������Ļ�ŭ�ţ�����ֻ��һ����ɴ����ԼԼ
���Կ�������ֻ����С�ɰ�����Ů�ǣ��ǵ�Զ�۵������������ġ�

LONG);
	setup();
	replace_program(ROOM);
}
