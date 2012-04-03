inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "vickey" );
	set( "object", ([
		"amount1"  : 1,
		"file5"    : "/open/doctor/pill/gnd_pill",
		"amount7"  : 14,
		"file7"    : "/open/doctor/pill/f_pill",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file6"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 1,
		"amount10" : 1,
		"file9"    : "/open/ping/obj/poison_pill",
		"file10"   : "/open/ping/obj/cloud",
		"amount5"  : 19,
		"amount9"  : 3,
		"file1"    : "/open/capital/obj/gold_pill",
		"file3"    : "/open/snow/obj/stone",
		"amount2"  : 1,
		"file2"    : "/open/ping/obj/poison_pill",
		"amount6"  : 7,
	]) );
	set( "build", 11130 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room323",
		"east"      : "/open/clan/13_luck/room/room298.c",
		"north"     : "/open/clan/13_luck/room/room268",
	]) );
	set( "long", @LONG

    ��ɣ���£����䳣�䣬��������ʮ������������������˵�Ϊ[0;1;35m��[1mq[0m
[0;1;35m��[1mD[0m����������ʮ������ĺ󾢣����˵����涼���Ÿ����ڵķ���������
�������ö���Ϊ��ûʱ�����߸������İ��ڣ����½�����û�������
����û�Լ��ķ�����Խ���һ�¡�

LONG);
	setup();
	replace_program(ROOM);
}
