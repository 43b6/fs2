inherit ROOM;
void create() {
	set( "short", "���ձ���" );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/hall",
		"enter"     : "/open/clan/hell/room/room94",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
������С������˽������ĵط�,ƽ���������Ǿ��Խ�������,������С������
��pill,eq,��һЩ������Ʒ,�����������Ҫ,��ǢС������,�����Ի������ó���
�ʹ�ҷ����,�����ſ�����һ��������,����Ī��,��һֻС���������￴����

LONG);
	setup();
	replace_program(ROOM);
}
