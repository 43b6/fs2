inherit ROOM;
void create() {
	set( "short", "���������" );
	set( "build", 10087 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room15",
		"west"      : "/open/clan/13_luck/room/room10.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��̤��˴�����һ����ɭ���µĸо�Ϯ��������������е����У�
���ڴ�ʱ��ĵ����и����㡤�����������������ֻ�ǵ����������
�������ָо��ɣ���������߸߳���ѧ�����㲻����������������ȥ��
�Ƕ��������ġ���ȸ�á���

LONG);
	setup();
	replace_program(ROOM);
}
