inherit ROOM;
void create() {
	set( "short", "����" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room221",
		"down"      : "/open/clan/13_luck/room/room223",
	]) );
	set( "long", @LONG

����������������ս�������������ˡ����ߡ����˵����ǳ��������
�����裭�׵��ӣ������Ľ��ݿ�������άһ��ͨ���ˣ��ۿ�������
�ⲻ�ٺ��ǣ��������в��������ڴ˵��ˣ���֪�����Ƿ����������
�׵��ӣ�������ǰ�������ǻ��Ϊ��һ�����ꡣ

LONG);
	setup();
	replace_program(ROOM);
}
