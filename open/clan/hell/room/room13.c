inherit ROOM;
void create() {
	set( "short", "$HIB$���������ߡ���һ�����������ͳ�һ�����ʲ�Ķ��������š�$BLK$" );
	set( "owner", "creed" );
	set( "object", ([
		"amount4"  : 1,
		"amount9"  : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10285 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room127",
		"east"      : "/open/clan/hell/room/room143.c",
		"south"     : "/open/clan/hell/room/room2.c",
		"west"      : "/open/clan/hell/room/room99.c",
	]) );
	set( "long", @LONG

$RED$���Ź�$NOR$ - 
    �������������������ڡ����Źء���������ǰ������һ���ߴ��
��ɫ��¥�������������޿�������ж�ǰ������Ϊһ�����Źؾ��޷���
�������ˡ�������ǰ�ǻ�����࣬����һ���ͳ���������ʱ�˿̡����
���ڲ�֪���б����˽�ȥ��

  ������(Ghost king)
LONG);
	setup();
	replace_program(ROOM);
}
