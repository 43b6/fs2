inherit ROOM;
void create() {
	set( "short", "�Ұ�" );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room135",
		"east"      : "/open/clan/hell/room/room94.c",
	]) );
	set( "long", @LONG
��ˮ���ڰ��ߵ���ʯ��,���ϵؽ���һ������ˮ��,�����ʯͷ���걻��ˮ
��ʴ,���沼���˴��СС�Ķ�,�����쳣����,������������,�Ṧ��Ҫ��һ��
��ˮ׼,����������亣����,վ�ڱȽϸߵ�ʯ����������ȥ,�ƺ��ڶ�����һƬ
�Ƚ�ƽ̹��ɳ��,�Ұ��ı�����һ���ͱ�.

LONG);
	setup();
	replace_program(ROOM);
}
