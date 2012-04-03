inherit ROOM;
void create() {
	set( "short", "�����׵�" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"file6"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/daemon/class/fighter/figring",
		"amount1"  : 1,
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10236 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room297.c",
		"south"     : "/open/clan/13_luck/room/room322",
		"east"      : "/open/clan/13_luck/room/room299.c",
		"north"     : "/open/clan/13_luck/room/room269",
	]) );
	set( "long", @LONG

    ��ɣ���£����䳣�䣬��������ʮ������������������˵�Ϊ[33m��[0m
[33m��[0m����������ʮ����������������˵����涼���Ÿ����ڵķ���������
�������ö���Ϊ��ûʱ�����߸������İ��ڣ����½�����û�������
����û�Լ��ķ�����Խ���һ�¡�

LONG);
	setup();
	replace_program(ROOM);
}
