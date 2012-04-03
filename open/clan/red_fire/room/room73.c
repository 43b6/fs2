inherit ROOM;
void create() {
	set( "short", "����ר��������" );
	set( "owner", "andy" );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/main/obj/et_sword",
		"amount1"  : 1,
		"amount10" : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10001 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room9.c",
		"east"      : "/open/clan/red_fire/room/room74",
	]) );
	set( "long", @LONG
�����ǰ��ϼҵ�һ������ŵı����������������������ǿ
�������ı�����ƽ�����Ҳ�����ͨ�����ﶼ�У������������ǽ�ֹ
�����ȡ�����ġ������ŵĶ���ͨ�����ϱ���Ҳ�����õ�������
����Ҫ�Ļ��Ǻ���������Ķ����ġ����һ�ᣬƽ�������õ�����
�����ƻ�צ�ͺ�������ǵ�ʹ�ú�Żء�

LONG);
	setup();
	replace_program(ROOM);
}
