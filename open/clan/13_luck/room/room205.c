inherit ROOM;
void create() {
	set( "short", "��¥�ߵ�" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room206",
		"north"     : "/open/clan/13_luck/room/room204",
	]) );
	set( "long", @LONG

������ս���ٻغϺ���ò����׽�Ѫ˫�۸�����ˣ�������������
�˲���ߵ���������������ŨŨ��Ѫ��ζ���˵�ǽ�Ͽ̻�������ͼ��
���ƺ�������˵�Ŵ˵صĹ��£����ϵĺ�����������������Ҳ��ʮ��
�����գ�����С�Ĳ�Ҫ��Ϊ���ϵĺ���֮һ��

LONG);
	setup();
	replace_program(ROOM);
}
