inherit ROOM;
void create() {
	set( "short", "�������ſڡ�" );
	set( "owner", "joy" );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room257",
		"north"     : "/open/clan/13_luck/room/room259.c",
	]) );
	set( "long", @LONG
�ߵ�����С�����ſڣ��������������͵�һƬ���⣬���ɵ���������ӵ���
λ��ʿ�������Ը������ũ�أ������뵽�о�ʫ���������ġá������յ��磬��
�κ�������˭֪����⸣����������ࡣ���뵽����㲻�ɵ�����м�������
�������������С�����濴��������λ��ʿ�ڴ˾�ס��
LONG);
	setup();
	replace_program(ROOM);
}
