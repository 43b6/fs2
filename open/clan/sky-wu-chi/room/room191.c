inherit ROOM;
void create() {
	set( "short", "$HIG$��$HIG$��$HIG$��$NOR$��С�׷� " );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/main/obj/et_sword",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"file10"   : "/open/snow/obj/figring",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/main/obj/firesword",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
	]) );
	set( "owner", "snowman" );
	set( "build", 10023 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room193",
	]) );
	set( "long", @LONG
��������ľҶ����һ����
ӵ�й��˵��ٶȼ�ʵ����˧��������
����$HIW$������$HIC$����$NOR$��$HIY$����$NOR$����������Ҫ�Ŀ���
����Ҫ���ϻ�ӰҲ��Ҫ���˵��ǻۣ�����Ŭ����ѧ�Ƿǳ���Ҫ��
�ڴ���һ�쿨�����ܳ�Ϊ�̽�ĵ�һ����
LONG);
	setup();
	replace_program(ROOM);
}
