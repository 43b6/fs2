inherit ROOM;
void create() {
	set( "short", "��¥�ߵ�" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room225.c",
		"north"     : "/open/clan/13_luck/room/room223",
	]) );
	set( "long", @LONG

������ս���ٻغϺ���ò����׽���ĩ�Ÿ�����ˣ�������������
������ߵ���������������ŨŨ��Ѫ��ζ���˵�ǽ�Ͽ̻�������ͼ��
���ƺ�������˵�Ŵ˵صĹ��£����ϵĺ�����������������Ҳ��ʮ��
�����գ�����С�Ĳ�Ҫ��Ϊ���ϵĺ���֮һ��

LONG);
	setup();
	replace_program(ROOM);
}
