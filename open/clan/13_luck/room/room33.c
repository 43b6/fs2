inherit ROOM;
void create() {
	set( "short", "���⺣��" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room47",
		"east"      : "/open/clan/13_luck/room/room32.c",
		"south"     : "/open/clan/13_luck/room/room34.c",
	]) );
	set( "long", @LONG

    Ư���ں���Ҳ�кü�����ʱ�ˣ���ʼ���Ҳ�·���������ڷ���ʱ
��ͻȻ����ǰ���������˵ĳ����������Ǌ�����ô���������ǿ�����
·�أ����Ǌ������������ķ���ȥ������Խ��Խ�����ˣ���������
�ⷽ��ȥӦ�������ҵ���·�ˡ�    

LONG);
	setup();
	replace_program(ROOM);
}
