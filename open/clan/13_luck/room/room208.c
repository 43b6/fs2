inherit ROOM;
void create() {
	set( "short", "��¥�ߵ�" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room209",
		"north"     : "/open/clan/13_luck/room/room207",
	]) );
	set( "long", @LONG

������ս���ٻغϺ���ò����׽����򹫸�����ˣ�������������
�߲���ߵ���������������ŨŨ��Ѫ��ζ���˵�ǽ�Ͽ̻�������ͼ��
���ƺ�������˵�Ŵ˵صĹ��£����ϵĺ�����������������Ҳ��ʮ��
�����գ�����С�Ĳ�Ҫ��Ϊ���ϵĺ���֮һ��

LONG);
	setup();
	replace_program(ROOM);
}
