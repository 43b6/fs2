inherit ROOM;
void create() {
	set( "short", "��߷�����" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-cloak",
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
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10221 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room282.c",
		"east"      : "/open/clan/13_luck/room/room306.c",
		"west"      : "/open/clan/13_luck/room/room301",
		"out"       : "/open/clan/13_luck/room/room5.c",
	]) );
	set( "long", @LONG

    ������ţ����߸���ߣ����Ÿ�ʽ��������߸����ߣ�ǿ�������
�������硣����....�ȣ�Ҳ�Ӳ���������ֵ�Χ�ˣ�����Ϊ�½����ӳ�
����eq��wp�ң�ϣ������һ��..

               [0;1;32m��[1m��[1m��[1m��[1m��[1mA[1m��[1mH[1m��[1mQ[1m��[1mT[1m��[1m��[1m��[1ma[0m��[0;1;34m��[1m��[1m��[1m��[1m��[1mQ[1m��[1mT[1m��[1mH[1m��[1mA[1m��[1m��[1m��[1ma[0m
������������
     WEST �� [0;1;31m��[1mZ[1m��[1m��[1m��[1m��[0m    SOUTH �� [0;1;36m��[1m��[1m��[1m��[1m��[1m��[0m    [0;1;33m��[1m��[1m��[1m��[1m��[1m��[0m �� EAST

LONG);
	setup();
	replace_program(ROOM);
}
