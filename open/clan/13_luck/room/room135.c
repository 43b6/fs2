inherit ROOM;
void create() {
	set( "short", "�쳾����¥" );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room115",
	]) );
	set( "long", @LONG

    ��ն��飬�������У����������쳾����¥�������Լ��Ĺ�ȥ��
��һ����ѧ���⺺��һ·����������ѧ��Ϊ���ڴﵽ���壬Ϊ���书
��Ϊ���������������ָ���Ⱥ�ڵĴ˵أ������ܵ�����ǰ����ָ����
����ͻ������ļ��ޡ�

LONG);
	setup();
	replace_program(ROOM);
}
