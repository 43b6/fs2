inherit ROOM;
void create() {
	set( "short", "��ջ����" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
		"amount4"  : 1,
		"file3"    : "/daemon/class/blademan/obj/ublade",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"file7"    : "/open/snow/obj/figring",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/capital/obj/blade2",
	]) );
	set( "build", 10320 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room96",
		"east"      : "/open/clan/13_luck/room/room42.c",
		"down"      : "/open/clan/13_luck/room/room9.c",
		"����¥"    : "/open/clan/13_luck/room/room43.c",
		"west"      : "/open/clan/13_luck/room/room41.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��ӭ������ʮ������Ŀ�ջ������������񖟵ĵ�С��CHECK IN
��������������Ϳ��Իص������᷿��Ϣ�ˣ�������Ҫ�κη�����
ֱ��CTƵ������ר��Ϊ�����񡫡�
                                               лл���� ����

             ��������ǰ�ߣ����ǡ�����¥����
             ��������ǰ�ߣ����ǡ����¥����
             ��������ǰ�ߣ����ǡ�����¥����

LONG);
	setup();
	replace_program(ROOM);
}
