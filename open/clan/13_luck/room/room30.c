inherit ROOM;
void create() {
	set( "short", "�ۿ�" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room31",
		"enter"     : "/open/clan/13_luck/room/room29.c",
	]) );
	set( "long", @LONG

    �����ǿ��Դȥ�տ���Ψһˮ·���ۿڱ�ͣ�˼���С��������
��������һ�Ҵ���һ�����������ڵ�Ư���ں��ϣ����������ĺ��磬
�ۣ����Ƕ�ô���������£�����׼��Ҫ����ʱ���㿴�˿������ϵ�
���ˣ������ƺ�������һ���Ĺ��ɣ����������ѵ���Ƭ���б��¹���
����

LONG);
	setup();
	replace_program(ROOM);
}
