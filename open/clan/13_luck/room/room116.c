inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "long" );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room62.c",
	]) );
	set( "long", @LONG
��������ռ��е�һλ����������Ÿ���Ī�����ѧ��
�裬�������ڿ����г�Ϊ��һ������ѧ��Ϊͻ�Ƴ�ѧ�����˵�
ͬʱ����Ҳ�����������������㣬ʹ���޷���֪��ȥ��ȴԭ
����������ʮ�������е���˼���У�������ʿ������

LONG);
	setup();
	replace_program(ROOM);
}
