inherit ROOM;
void create() {
	set( "short", "$HIR$����$HIC$һ$HIY$��$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"file3"    : "/open/port/obj/wolf_ring",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/capital/guard/gring",
		"file9"    : "/open/killer/obj/k_ring",
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 73,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount7"  : 1,
		"file8"    : "/open/marksman/obj/super_pill",
		"file7"    : "/open/poison/obj/pearl",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"file2"    : "/open/capital/obj/gold_pill",
	]) );
	set( "owner", "flyindance" );
	set( "build", 10072 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room130.c",
		"enter"     : "/open/clan/ou-cloud-club/room/room228",
	]) );
	set( "long", @LONG
����ʮ���޵��ϴ����顳��ס�������Ŵ���
�ǰ���������ʱ�Ĵ�磬��ѧ�ƺ����ڰ�������֮
�ϣ���ȴ�����ڴˣ����˷�װ�θ�Ϊ���ӣ�ֻ��һ
�Ŵ���������˯������ֻ���������õ�ľ��������
���ѣ�ǽ�ǵ��ǰ��Ų�����ߣ�

LONG);
	setup();
	replace_program(ROOM);
}
