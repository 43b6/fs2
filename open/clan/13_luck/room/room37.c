inherit ROOM;
void create() {
	set( "short", "���⺣��" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room38.c",
		"north"     : "/open/clan/13_luck/room/room51",
		"south"     : "/open/clan/13_luck/room/room46",
		"east"      : "/open/clan/13_luck/room/room47.c",
	]) );
	set( "long", @LONG

    ����������ȥ�������ܿ�����Զ�ĵط���Ҳ�ƺ�������½�أ�ֻ
����һ��Ƭ�������󺣣�����С�Ƴ���С�ˣ����˵����͡��������
��֪�����ķ���Բ��ԣ�����Զ����ȥ���ǿ������κ�һ��յأ���
�������ǲ�����·�ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
