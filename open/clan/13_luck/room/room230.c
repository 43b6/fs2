inherit ROOM;
void create() {
	set( "short", "����֮��" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room229",
		"west"      : "/open/clan/13_luck/room/room228",
	]) );
	set( "long", @LONG

��������Χ��������ë����Ȼ�������г����һ��������Ż��Ѫ��ζ
����������ȥ��ֻ��һ������������������൱���Ͼɣ���֪����
�����������ˣ���˵������һ������ǿ��������������Ⱥ���ۼ���
������֪�ж���������ʿ͵�����ﱦ�ȴ��ɥ���

LONG);
	setup();
	replace_program(ROOM);
}
