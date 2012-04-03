inherit ROOM;
void create() {
	set( "short", "����" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"file2"    : "/open/wu/npc/obj/armband",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/scholar/obj/icefan",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
	]) );
	set( "owner", "titanic" );
	set( "build", 10050 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room53.c",
		"enter"     : "/open/clan/13_luck/room/room82",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����һ�������ζ�ĳ�����һ�߽����������ŵ���ߴ�����
��ķ��㣬��ǰһ������λ�ļ�����������Ŀ�ˮֱ�������Ӹ�����
����Ľ���������û����һλʥ��̵մ����Ӳ����书һ����������
��������̾���ѣ�����Ī����


LONG);
	setup();
	replace_program(ROOM);
}
