inherit ROOM;
void create() {
	set( "short", "ˮ���涴���" );
	set( "owner", "issei" );
	set( "object", ([
		"amount7"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/ping/obj/chilin_legging",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/obj/gift/lingzhi",
		"amount2"  : 1,
		"amount1"  : 1,
	]) );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room154",
	]) );
	set( "build", 10040 );
	set( "long", @LONG
ˮ����ڼ����޾����졣��ע�⵽�������Ӽ�ſŶ���ҫ�ž�Ө��â��Ѫ������
ɫ��������ӼĤ������ʱ�ᱻѪˮ�ŵñ��ѿ���һ�㣬





�ֺڵĳ涴������һƬ���ţ�������������ʬ������ʴ��

���Ѿ�����ӽ������ĵط���������־����Ƕ�̽������������������



LONG);
	setup();
	replace_program(ROOM);
}
