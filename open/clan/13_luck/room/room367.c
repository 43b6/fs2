inherit ROOM;
void create() {
	set( "short", "����ѵ���� - " );
	set( "object", ([
		"file4"    : "/open/badman/obj/badhelmet",
		"amount1"  : 1,
		"file1"    : "/open/capital/obj/blade2",
		"file2"    : "/open/doctor/pill/human_pill",
		"amount2"  : 32,
		"amount4"  : 1,
	]) );
	set( "owner", "dancer" );
	set( "build", 10140 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room119",
	]) );
	set( "long", @LONG
������Ƕ��������ĺ���С����ҹ�ι������˵�ѵ���������ܼ���������ҵ��
��Ӣ���Ӷ���ͨ���Ͽ��Ŀ���ĺ���С���ĸ�����ʿ���ܳ�Ϊ����С���ĸ���
��ʿ��һ���������к���С������ʿ������������١�ǽ����һ�Ź���(sign)��
�����Ѹ�����ʿ���ʹ�������ϰ����
LONG);
	setup();
	replace_program(ROOM);
}
