inherit ROOM;
void create() {
	set( "short", "��֮��С��" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room168",
		"south"     : "/open/clan/13_luck/room/room169.c",
		"west"      : "/open/clan/13_luck/room/room182.c",
		"north"     : "/open/clan/13_luck/room/room168.c",
		"down"      : "/open/clan/13_luck/room/room167",
	]) );
	set( "long", @LONG

����һ����Ұ�ݸ��ǵ�С·��ʹ�㲻�����ֲ����ݴԲ���ͨ�У�����
����İ�����������ĵ�����С���Ƕ�ô�����ߣ�ʹ�㲻�ò�С��
�������ǰ��Խ������Ѩ����ϡϡ���µ�������Խ��Խ������ʹ�㲻
�ò���߾������Է��κ�״��������

LONG);
	setup();
	replace_program(ROOM);
}
