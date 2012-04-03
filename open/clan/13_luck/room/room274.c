inherit ROOM;
void create() {
	set( "short", "���˲ݻ���" );
	set( "owner", "szn" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/ping/obj/gold_hand",
		"file7"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/ping/obj/ring-2",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/daemon/class/fighter/armband",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room310",
		"south"     : "/open/clan/13_luck/room/room305",
	]) );
	set( "build", 10146 );
	set( "light_up", 1 );
	set( "long", @LONG

    ���⣬���Ǹ���˵��С��а�������е����˲ݻ��𣿴��˵��Ʒ���
����а��ҩʦ���洫��һ������ǧ�������ţ����ϱ�̬�Ľ������ѹ���
free mob�еĺݽ�ɫ�������ǻ��������콣���������ᱻ�򻵣�������
�˲ݻ���֮���ף�ϣ����ϧʹ�á�

LONG);
	setup();
	replace_program(ROOM);
}
