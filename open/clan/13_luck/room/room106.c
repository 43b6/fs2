inherit ROOM;
void create() {
	set( "short", "$HIC$������$NOR$" );
	set( "owner", "poll" );
	set( "object", ([
		"amount3"  : 29,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file1"    : "/open/fire-hole/obj/r-pill",
		"amount4"  : 35,
		"file5"    : "/open/killer/obj/s_pill",
		"file4"    : "/open/ping/obj/poison_pill",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 13,
		"amount8"  : 1,
		"file9"    : "/open/killer/obj/black",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/fire-hole/obj/w-pill",
		"amount6"  : 1,
		"amount5"  : 466,
		"amount1"  : 14,
	]) );
	set( "build", 10137 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room60",
		"south"     : "/open/clan/13_luck/room/room105",
	]) );
	set( "long", @LONG
$HIW$�粻ͣ���˲�����һ����Ӱ��ԶԶ�ķ��������ţ�Ũ�ҵ�ɱ����
�����㲻�ҿ�������Ȼ���˶��ˣ���������һ�����У���ͣ����ת��
������һ����һ�У�һ���ֿ���һ�У�ɲ�Ǽ���ͣ�ˣ���֮��Ҳͣ��
��ֻ��$HIR$��$HIY$��$HIG$ذ$HIC$��$HIW$�����������������С�$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
