inherit ROOM;
void create() {
	set( "short", "����������" );
	set( "object", ([
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file9"    : "/open/wu/npc/obj/armband",
		"file2"    : "/daemon/class/fighter/figring",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file6"    : "/open/port/obj/wolf_ring",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10851 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room302",
	]) );
	set( "long", @LONG

    ������[33m����������[0m��ר��Ϊ��û�з�����½������������ģ���
�����������ʣ����½��İ����и�����ȥ�ĵط�����Ϣ�ĵط���ʹ����
����Ϊʮ�������ս����һ��Ϊ���ɵ�δ����Ŭ����һͬ��ƴ������
�����ش�������һ��ɴ�����ϣ����Ϊ���µ�һ����������

LONG);
	setup();
	replace_program(ROOM);
}
