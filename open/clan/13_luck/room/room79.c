inherit ROOM;
void create() {
	set( "short", "����С�ߵ���" );
	set( "object", ([
		"amount3"  : 1,
		"amount9"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
		"amount8"  : 1,
		"file4"    : "/open/ping/obj/gold_hand",
		"file8"    : "/open/wu/npc/obj/armband",
		"file2"    : "/open/ping/obj/ring-2",
		"file1"    : "/open/ping/obj/chilin_legging",
		"amount7"  : 1,
		"amount10" : 1,
		"file10"   : "/open/gsword/obj/nine_hat",
		"amount1"  : 1,
		"file5"    : "/open/gsword/obj/yugem",
		"amount6"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file9"    : "/open/gsword/obj/yuskirt",
	]) );
	set( "owner", "pitlin" );
	set( "build", 10047 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room76",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
����һ��С����Ϣ�ĺõط�����һ�ɷ����ζ����ʹ������ͨ��
������һ�ֿ�˯�ŵθо�������˯ʱ��������˯���α���Ҳ�޷���
���㡣�Ա��и�С�����³������䣬���ӣ��������������һ���᲻
���뿪�͸о�����ʼ���ⲻ����η��䣬���������뿪���������С
�߰�Ϣ��ps.(��Ϣ=������Ϣ)
LONG);
	setup();
	replace_program(ROOM);
}
