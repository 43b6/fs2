inherit ROOM;
void create() {
	set( "short", "����" );
	set( "outdoors", "/open/clan/13_luck" );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room168",
		"down"      : "/open/clan/13_luck/room/room192",
	]) );
	set( "long", @LONG

����һ������Ѩ���ǰ���ֵ���һ���޴�������ѣ����㱻�ŵ�
ƨ����������֪�����ﻷ���ã����ǲ��ܴ��ŵ�ԭ����������Ͼ�
�������ֻèһ����ͻȻ�㷢�ּ�ֻ���ϴӶ����·�����������
�����㣬��е�һ��ɱ����Χ��������ܡ�

LONG);
	setup();
	replace_program(ROOM);
}
