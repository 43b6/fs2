inherit ROOM;
void create() {
	set( "short", "�����Ƶ�" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10485 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room299.c",
		"south"     : "/open/clan/13_luck/room/room320",
		"east"      : "/open/clan/13_luck/room/room301.c",
		"north"     : "/open/clan/13_luck/room/room271.c",
	]) );
	set( "long", @LONG

    ��ɣ���£����䳣�䣬��������ʮ������������������˵�Ϊ[0;1;37m��[1m��[0m
[0;1;37m��[1mD[0m����������ʮ����������������˵����涼���Ÿ����ڵķ���������
�������ö���Ϊ��ûʱ�����߸������İ��ڣ����½�����û�������
����û�Լ��ķ�����Խ���һ�¡�

LONG);
	setup();
	replace_program(ROOM);
}
