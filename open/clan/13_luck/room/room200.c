inherit ROOM;
void create() {
	set( "short", "����" );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room199",
		"down"      : "/open/clan/13_luck/room/room201.c",
	]) );
	set( "long", @LONG

����������������ս�������������ˡ����ߡ����˵����ǳ��������
�����飭������࣬�����Ľ��ݿ�������άһ��ͨ���ˣ��ۿ�����
���ⲻ�ٺ��ǣ��������в��������ڴ˵��ˣ���֪�����Ƿ���������
��������࣬������ǰ�������ǻ��Ϊ��һ�����ꡣ

LONG);
	setup();
	replace_program(ROOM);
}
