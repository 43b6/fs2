inherit ROOM;
void create() {
	set( "short", "�������" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 13695 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room298.c",
		"south"     : "/open/clan/13_luck/room/room321",
		"east"      : "/open/clan/13_luck/room/room300.c",
		"north"     : "/open/clan/13_luck/room/room270",
	]) );
	set( "long", @LONG

    ��ɣ���£����䳣�䣬��������ʮ������������������˵�Ϊ[0;1m��[1mB[0m
[0;1m��[1mD[0m����������ʮ����������������˵����涼���Ÿ����ڵķ���������
�������ö���Ϊ��ûʱ�����߸������İ��ڣ����½�����û�������
����û�Լ��ķ�����Խ���һ�¡�

LONG);
	setup();
	replace_program(ROOM);
}
