inherit ROOM;
void create() {
	set( "short", "����" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room205",
		"down"      : "/open/clan/13_luck/room/room207",
	]) );
	set( "long", @LONG

����������������ս�������������ˡ����ߡ����˵����ǳ��������
�����ۣ�Ѫ˫�ۣ������Ľ��ݿ�������άһ��ͨ���ˣ��ۿ�������
�ⲻ�ٺ��ǣ��������в��������ڴ˵��ˣ���֪�����Ƿ����������
Ѫ˫�ۣ�������ǰ�������ǻ��Ϊ��һ�����ꡣ

LONG);
	setup();
	replace_program(ROOM);
}
