inherit ROOM;
void create() {
	set( "short", "�޳���-" );
	set( "light_up", 1 );
	set( "object", ([
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount2"  : 10,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount7"  : 87,
		"amount8"  : 1,
		"amount3"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/wind-rain/obj/sun_red_cloth",
		"file6"    : "/daemon/class/fighter/ywhand",
		"file7"    : "/open/killer/obj/s_pill",
		"file2"    : "/open/ping/obj/poison_pill",
		"file10"   : "/open/killer/obj/dagger",
		"amount5"  : 1,
		"amount1"  : 1,
	]) );
	set( "build", 10604 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room135.c",
		"enter"     : "/open/clan/ou-cloud-club/room/room174",
	]) );
	set( "long", @LONG

     ������ɱ�֡�����������������ſڣ�����о���һ��ѹ��
һ���뷿�䣬һ�ɴ̱ǵ�ҩζ��Ǻ����һ��ͷ��Ŀѣ����������
ȴ����һ����ӰѸ�ٵ��ڸ�ҩˮ����¯���ƶ��������㿴���󶮵�
���ߣ�����Ƭ�����װ׵Ĳ��������и�����ǲ���ͻ�����룬
׼���з�ʲô�°����ˣ������Ȳ�������������������������һ��

LONG);
	setup();
	replace_program(ROOM);
}
