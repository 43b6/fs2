inherit ROOM;
void create() {
	set( "short", "����д����1" );
	set( "owner", "kanno" );
	set( "object", ([
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount8"  : 1,
		"file1"    : "/open/killer/obj/bellstar",
		"amount5"  : 1,
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount10" : 1,
		"amount1"  : 250,
		"amount3"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/mogi/castle/obj/lochagem",
		"file2"    : "/open/killer/memory/static",
		"amount2"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
	]) );
	set( "light_up", 1 );
	set( "build", 10044 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room114.c",
		"up"        : "/open/clan/red_fire/room/room55.c",
		"down"      : "/open/clan/red_fire/room/hall.c",
	]) );
	set( "long", @LONG

������һ�䴴��д���ң��㿴���ϸ�����Ŭ������ͷ��
������ר�ĵ�д�壬��˵����С�ɴ�󽻴��������ҵ
���ڷ����֮ǰ��һ��Ҫ������������......��....��
....��....����������룬��Ӱ�쵽ÿһλɱ��ร���
�޷���ɵڶ��εĽ��ף������������øϸ���Խ��Խ��
�......��Ϊ......���Ե���ʳ�Զ��ʣ�����....��..
..��....


LONG);
	setup();
	replace_program(ROOM);
}
