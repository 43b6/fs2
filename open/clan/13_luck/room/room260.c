inherit ROOM;
void create() {
	set( "short", "���һ����֡� " );
	set( "owner", "joy" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room259",
		"north"     : "/open/clan/13_luck/room/room261.c",
	]) );
	set( "long", @LONG
�����һ��ֵ������ߣ�������Σ���ķ����ܾ����ƺ�������͵�����㡣
��������ôƯ���ľ�ɫ���棬����������͵Ϯ�㣬�ƺ�Ҳ���ĸ���Ը�ġ���
���ܵ�С����Ҳ�ı�������Χ��������ȦȦ�������������Ҳ������������
�ˡ�
LONG);
	setup();
	replace_program(ROOM);
}
