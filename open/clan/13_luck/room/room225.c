inherit ROOM;
void create() {
	set( "short", "����" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room224",
		"down"      : "/open/clan/13_luck/room/room226",
	]) );
	set( "long", @LONG

����������������ս�������������ˡ����ߡ����˵����ǳ��������
����ĩ����ĩ�ţ������Ľ��ݿ�������Ψһ��ͨ���ˣ��ۿ�������
�ⲻ�ٺ��ǣ��������в��������ڴ˵��ˣ���֪�����Ƿ����������
��ĩ�ţ�������ǰ�������ǻ��Ϊ��һ�����ꡣ 

LONG);
	setup();
	replace_program(ROOM);
}
