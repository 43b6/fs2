inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room169",
		"east"      : "/open/clan/13_luck/room/room166.c",
		"west"      : "/open/clan/13_luck/room/room168.c",
		"north"     : "/open/clan/13_luck/room/room169",
	]) );
	set( "long", @LONG

�����������ɭ�֣�����Ũ��ɢ����ǰֻ����ãã��һ��Ƭ������
������ָ��Խ����ͷ��ȥ����������Ũ�������ƺ���һ����������
С�Ķ�Ѩ�����洫��ϡϡ���µ��������ƺ���һЩ�����������߶���
���ӣ�����������ɶ������

LONG);
	setup();
	replace_program(ROOM);
}
