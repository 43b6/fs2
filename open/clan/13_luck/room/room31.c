inherit ROOM;
void create() {
	set( "short", "���⺣��" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room30.c",
		"south"     : "/open/clan/13_luck/room/room32.c",
		"east"      : "/open/clan/13_luck/room/room37.c",
		"west"      : "/open/clan/13_luck/room/room39",
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
