inherit ROOM;
void create() {
	set( "short", "�׻���" );
	set( "build", 159 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room12",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    һ���׻��ÿ���һ������ͻ���ͼ�����㱻����һ������ʵ��Ҳ��
ʮ�������������ĵط���ֻҪ�������һ�������ﶼ�ᱻ��ֻ�ͻ���
������ʹ��������������˵��ֻ�ͻ���ʱ���ϻ�Ѳ��ʮ�����飬�в�
����˵�п�����

LONG);
	setup();
	replace_program(ROOM);
}
