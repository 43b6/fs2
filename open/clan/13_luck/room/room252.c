inherit ROOM;
void create() {
	set( "short", "��ɽ�š�" );
	set( "owner", "poll" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room250",
		"north"     : "/open/clan/13_luck/room/room249",
	]) );
	set( "long", @LONG
�������ߵ�ɽ·�������������ÿ������ʣ����񽭺���Ũ���ɱ��һ��
������ɽ���µľ�ɫ����ȥ�������ո��������Ǹ������Աߵ�С��Ҳ�ƺ�
�����������Ĺ������ļ���ˮ������������˸���ͷ׵�ɫ�ʡ���ƽ��������
��ϼ��ӳ�ճ�һƬ�����ľ���������۾�����Ŀ��Ͼ����
LONG);
	setup();
	replace_program(ROOM);
}
