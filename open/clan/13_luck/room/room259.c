inherit ROOM;
void create() {
	set( "short", "��ʯ��·�� " );
	set( "owner", "joy" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room260.c",
		"south"     : "/open/clan/13_luck/room/room258",
	]) );
	set( "long", @LONG
�߳����һ���֮�󣬲ŷ����ոյ��һ���ֻ���Ż��˵ģ������ǹ���Ҫ����
�Թ����赲İ���˵Ľ�������ֻ��ס�ڡ�����С�����������Ҫ�Ż��Ż�������
���ѡ���˵ס����Ƭ�һ��ֵ���������ʿ��ƽ����̫���⽭���ϵ����飬���ո�
��Ƭ�һ��־��Ǿ�ס���������ʿ�����µ���֣�Ŀ��Ҳֻ�Ǻ�ֹ���������
���߶��ѣ�����û��Ҫ�˺��˵��ġ�
LONG);
	setup();
	replace_program(ROOM);
}
