inherit ROOM;
void create() {
	set( "short", "ɳ̲" );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room144",
		"west"      : "/open/clan/hell/room/room142.c",
	]) );
	set( "long", @LONG
Խ����ʯ����һ�ߵ���,���ֵ�������ʱ�������治����ͨ�Ĳ�,�˵��Ѿ���
ȫ��������ʯ��Ӱ��,��������ƽ���׵�ɳ��,���˵ĺۼ������ӡ��ɳ���γ�
һ�������Ļ���,ɳ���ı����ƺ���һƬ������,�������Ǻ����״�Խ,������ȥ
Ҳ��ɳ��,����������������м��������ڿ���Ʈ�.

LONG);
	setup();
	replace_program(ROOM);
}
