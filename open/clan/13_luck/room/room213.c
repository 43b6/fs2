inherit ROOM;
void create() {
	set( "short", "����" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room212",
		"down"      : "/open/clan/13_luck/room/room214",
	]) );
	set( "long", @LONG

����������������ս�������������ˡ����ߡ����˵����ǳ��������
�������꣬�����Ľ��ݿ�������άһ��ͨ���ˣ��ۿ���������
���ٺ��ǣ��������в��������ڴ˵��ˣ���֪�����Ƿ������������
�꣬������ǰ�������ǻ��Ϊ��һ�����ꡣ

LONG);
	setup();
	replace_program(ROOM);
}
