inherit ROOM;
void create() {
	set( "short", "���¥" );
	set( "build", 363 );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room98",
		"out"       : "/open/clan/13_luck/room/room41.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��������ʮ������Ŀ�ջ���������¥����Ҳ��װ����Ϊ������
�������ſڹ�����ʯ�����������������������̲�ס�࿴���ۣ�����
�����ϵķ�˵�̵���������������������ȥ����������Ϲ���һ��
������飬�Ե����ɷǷ���

LONG);
	setup();
	replace_program(ROOM);
}
