inherit ROOM;
void create() {
	set( "short", "����ͤ��" );
	set( "light_up", 1 );
	set( "owner", "poll" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room248",
		"south"     : "/open/clan/13_luck/room/room252.c",
	]) );
	set( "long", @LONG
������ɽ�ϵ���߷壬ңԶ����ȥ�����԰�Զ���ĳ��������۵ף�����
������ȥ����ֻ��Զ������ľ�ɫ����Զ���Ķ�������ȥ����������������
����Զ����ɽ�ϣ�ֻ����Ϊ�����ңԶ�������û�п��ú�����ˡ�������
�ڴ˵���ͤ���Ǹ��ο������ĵط�������ʱ�����İ���Ҳ�����������
ɽ��������ȵȡ�
LONG);
	setup();
	replace_program(ROOM);
}
