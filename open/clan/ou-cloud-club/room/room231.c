inherit ROOM;
void create() {
	set( "short", "$HIY$�۱���$NOR$" );
	set( "object", ([
		"amount1"  : 311,
		"file4"    : "/obj/gift/xiandan",
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/ping/obj/poison_pill",
		"amount6"  : 1,
		"amount7"  : 1,
		"file8"    : "/obj/gift/xisuidan",
		"file7"    : "/obj/gift/xisuidan",
		"file2"    : "/obj/gift/shenliwan",
		"amount2"  : 1,
		"amount3"  : 1,
		"file10"   : "/obj/gift/shenliwan",
		"amount10" : 1,
		"amount8"  : 1,
		"file6"    : "/obj/gift/shenliwan",
		"file3"    : "/obj/gift/xisuidan",
		"amount9"  : 1,
		"file9"    : "/obj/gift/xisuidan",
		"file5"    : "/obj/gift/unknowdan",
	]) );
	set( "owner", "enter" );
	set( "build", 10076 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room101.c",
	]) );
	set( "long", @LONG
��˵�еľ۱��裬��֪Ϊ�ο��Խ������У����ž۱�����
װ���Ÿ�ʽ�����ı�����ڴ�������ȡ֮�����ĲƸ��뱦��
�����ǽ�������ȴҲֻ�ǿտյģ������κζ���������һ˽˽
��ȾҲ���ü��ˣ�����˵���б�����Ƹ����أ�

LONG);
	setup();
	replace_program(ROOM);
}
