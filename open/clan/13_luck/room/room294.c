inherit ROOM;
void create() {
	set( "short", "С��ͷ�����᷿" );
	set( "owner", "pighead" );
	set( "object", ([
		"amount1"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"file5"    : "/open/gsword/obj/may_ring",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount9"  : 1,
		"file9"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount7"  : 1,
		"amount2"  : 1,
		"file2"    : "/obj/gift/hobowdan",
		"file4"    : "/open/sky/obj11/purple-crystal",
		"file7"    : "/open/capital/obj/blade2",
		"amount5"  : 1,
	]) );
	set( "build", 10296 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room127",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �����ǿɰ�С��ͷ�����᷿�������Ҫ�Ǵ���ս���õ���������
������񵶣�����ҹǧ�񣬺��Ͻ𵶣��ȶ�����ս���в���ȱ����
���������û�����ǣ�����Ҫ��εֿ�����ռ��еı�̬�������
����Ĵ�ŵ��������Ǻ����ġ�

LONG);
	setup();
	replace_program(ROOM);
}
