inherit ROOM;
void create() {
	set( "short", "���⺣��" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room31.c",
		"west"      : "/open/clan/13_luck/room/room33.c",
		"south"     : "/open/clan/13_luck/room/room49",
		"east"      : "/open/clan/13_luck/room/room46.c",
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
