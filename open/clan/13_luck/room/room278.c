inherit ROOM;
void create() {
	set( "short", "������צ��" );
	set( "owner", "fighter" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room271",
	]) );
	set( "object", ([
		"amount5"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
		"file5"    : "/open/doctor/obj/needle9",
		"file1"    : "/open/gsword/obj/dragon-sword",
		"file7"    : "/open/marksman/obj/dragon_bow",
		"amount2"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/gsword/obj/yuskirt",
	]) );
	set( "build", 10431 );
	set( "light_up", 1 );
	set( "long", @LONG

    �˷��ߣ�Ϊ�����޲����Ƶ���ǧ������������������еģ�������
ǧ��֮�����������ڳ���ɽ���������������������ܵУ�����Ϊ��ֻ��
һ���Ӵ���״̬���������������������ķ��߲���˵�о��еģ�ҲҪ
����û���˸�ȥ��Ϊ����һ��[0;1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m��

LONG);
	setup();
	replace_program(ROOM);
}
