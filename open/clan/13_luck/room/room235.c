inherit ROOM;
void create() {
	set( "short", "���㹬" );
	set( "object", ([
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file7"    : "/open/prayer/obj/boris-boots",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/capital/obj/gold_pill",
		"amount7"  : 1,
		"file6"    : "/open/killer/obj/dagger",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/prayer/obj/kylin-belt",
	]) );
	set( "light_up", 1 );
	set( "build", 10015 );
	set( "owner", "rickshu" );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room97",
	]) );
	set( "long", @LONG
���㹬ռ�ؼ��㣬���̨ͤ��������ɭ����ɽ�ƶ���������ǧ���
���循��壬����й�����֮���ɡ������߲����ƣ����Ⱥɽ֮�ϣ�
ʹ���㹬������������ƽԭ�������������Ϸ�������Զ����ȫ��������
ƫ����һ�ֽ�������ʯ�����������⣬��������ľ��������
LONG);
	setup();
	replace_program(ROOM);
}
