inherit ROOM;
void create() {
	set( "short", "����" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room218",
		"down"      : "/open/clan/13_luck/room/room220",
	]) );
	set( "long", @LONG

����������������ս�������������ˡ����ߡ����˵����ǳ��������
����Ѫ������ү�������Ľ��ݿ�������άһ��ͨ���ˣ��ۿ�������
�ⲻ�ٺ��ǣ��������в��������ڴ˵��ˣ���֪�����Ƿ����������
����ү��������ǰ�������ǻ��Ϊ��һ�����ꡣ

LONG);
	setup();
	replace_program(ROOM);
}
