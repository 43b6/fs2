inherit ROOM;
void create() {
	set( "short", "miffy ��¥1-1" );
	set( "object", ([
		"file5"    : "/daemon/class/fighter/ywhand",
		"amount9"  : 1415,
		"amount2"  : 1,
		"file7"    : "/daemon/class/fighter/armband",
		"amount10" : 1,
		"amount6"  : 1,
		"file4"    : "/open/killer/obj/dagger",
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"file3"    : "/open/port/obj/wolf_ring",
		"amount3"  : 1,
		"file1"    : "/open/killer/obj/hate_knife",
		"amount7"  : 1,
		"file10"   : "/open/dancer/obj/yuawaist",
		"file6"    : "/open/gsword/obj/yuskirt",
		"amount4"  : 1,
		"file9"    : "/open/killer/obj/s_pill",
		"amount1"  : 87078,
		"amount5"  : 1,
		"file8"    : "/open/killer/obj/k_ring",
	]) );
	set( "light_up", 1 );
	set( "build", 10611 );
	set( "owner", "miffy" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room319.c",
		"out"       : "/open/clan/sky-wu-chi/room/room212",
		"up"        : "/open/clan/sky-wu-chi/room/room321.c",
		"west"      : "/open/clan/sky-wu-chi/room/room320.c",
	]) );
	set( "long", @LONG
������miffy ��¥�ĵ�һ��ƫ��,�����ŵĶ��������ڱȽ���ͨ������
���������ǳ�Ϊmiffy ƽ����ȥս��ʱ�Ļ�װ��,������ͬ����һ����
������miffy ��¥��һ��֮1
��������miffy �ڻ�װʱ�ĵڶ�����,���䷿���������eq �պþ���һ����
��ս��װ..
LONG);
	setup();
	replace_program(ROOM);
}
