inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$��$NOR$��" );
	set( "build", 10119 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room212.c",
		"north"     : "/open/clan/ou-cloud-club/room/room214",
		"east"      : "/open/clan/ou-cloud-club/room/room213.c",
		"south"     : "/open/clan/ou-cloud-club/room/room203.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
���С�Ľ�������������˲��ý���ķ��䡣
����������������������������������������������
�����ħ�����Ż�ʮ��(miko)�ķ��䣬�ұ�����÷Ӱ����(icpms)�ķ��䡣

LONG);
	setup();
	replace_program(ROOM);
}
