inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"amount5"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"amount4"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 12087 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room303.c",
		"south"     : "/open/clan/13_luck/room/room314",
		"north"     : "/open/clan/13_luck/room/room275.c",
	]) );
	set( "long", @LONG

    ��ɣ���£����䳣�䣬��������ʮ��������������е����˵�Ϊ[33m��[0m
[33m��[0m����������ʮ��������ȹ̣����˵����涼���Ÿ����ڵķ���������
�������ö���Ϊ��ûʱ�����߸������İ��ڣ����½�����û�������
����û�Լ��ķ�����Խ���һ�¡�

LONG);
	setup();
	replace_program(ROOM);
}
