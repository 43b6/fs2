inherit ROOM;
void create() {
	set( "short", "��֮��" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room163",
		"south"     : "/open/clan/13_luck/room/room158.c",
		"north"     : "/open/clan/13_luck/room/room166.c",
		"west"      : "/open/clan/13_luck/room/room163.c",
	]) );
	set( "long", @LONG

�����������ɭ�֣�����Ũ��ɢ����ǰֻ����ãã��һ��Ƭ������
������ָ��������Ʈɢ���������ζ���������Ҳ�����ζ����Դ����
��ãã�ؿ�����Զ���ľ��ۣ������ž��У������е�һ�����⣬����
�ƺ������������㿴��

LONG);
	setup();
	replace_program(ROOM);
}
