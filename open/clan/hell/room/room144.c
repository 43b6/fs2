inherit ROOM;
void create() {
	set( "short", "ɳ̲" );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room141",
		"west"      : "/open/clan/hell/room/room94.c",
	]) );
	set( "long", @LONG
̤��ѩ�׵�ɳ����ǰ��,������һ��������,���˿̵�����ȫû����������
������,ɳ�����Ű��ߵ���״����������������������ȥ,�������Ṧ���治�ϱ�
����,ֻ��Ͽ��ҵ����뵺�ϵĵ�·,����һ�����Ĵ�����,�����ż�������һ�㶼
�����.

LONG);
	setup();
	replace_program(ROOM);
}
