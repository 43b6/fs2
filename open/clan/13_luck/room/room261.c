inherit ROOM;
void create() {
	set( "short", "���һ�ɭ�֡� " );
	set( "owner", "poll" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room260",
		"north"     : "/open/clan/13_luck/room/room247.c",
	]) );
	set( "long", @LONG
���߽��һ������ϡ����Զ������ϡϡ���յ����������ڸոպܶ��
��·�Ͳ�̫��ô�����ˡ�ֻ�����һ�����ĳ��ں����е���࣬�о��ƺ���
���˹����������ֵģ�������ֻ�Ǹ���ε��ַ����ѣ������ȥ�����߳�
��Ƭ�һ��֡�
LONG);
	setup();
	replace_program(ROOM);
}
