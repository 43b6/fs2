inherit ROOM;
void create() {
	set( "short", "����" );
	set( "light_up", 1 );
	set( "build", 10200 );
	set( "owner", "suzukiami" );
	set( "exits", ([
		"up"        : "/open/clan/demon_castle/room/room12",
	]) );
	set( "long", @LONG
������һ������
С��������ץ���ĸ����������޵�
�������㿴����Ƥ����..���˱�...
��Ȼ���пɴ�Ѽ
����һͷ������ֻ���뱦��
��ϸһ����Ȼ�Ǹ�����³³��ս���������ſ���һֻ������
��ֻ��һֱ˵����������..ԭ���ǹ�Ȼ��
LONG);
	setup();
	replace_program(ROOM);
}
