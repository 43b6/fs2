inherit ROOM;
void create() {
	set( "short", "����ˮ��" );
	set( "object", ([
		"amount3"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount9"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"file4"    : "/open/mogi/castle/obj/lochagem",
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 1,
		"file3"    : "/open/mogi/castle/obj/lochagem",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"amount7"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/open/mogi/castle/obj/lochagem",
	]) );
	set( "build", 10206 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room304.c",
		"south"     : "/open/clan/13_luck/room/room315",
		"east"      : "/open/clan/13_luck/room/room302.c",
		"north"     : "/open/clan/13_luck/room/room264.c",
	]) );
	set( "long", @LONG

    ��ɣ���£����䳣�䣬��������ʮ��������������е����˵�Ϊ[0;1;36m��[1m��[0m
[0;1;36m��[1mD[0m����������ʮ������ķ��������˵����涼���Ÿ����ڵķ���������
�������ö���Ϊ��ûʱ�����߸������İ��ڣ����½�����û�������
����û�Լ��ķ�����Խ���һ�¡�

LONG);
	setup();
	replace_program(ROOM);
}
