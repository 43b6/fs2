inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$��$NOR$��" );
	set( "build", 10080 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room215.c",
		"north"     : "/open/clan/ou-cloud-club/room/room217",
		"east"      : "/open/clan/ou-cloud-club/room/room216.c",
		"south"     : "/open/clan/ou-cloud-club/room/room211.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
���С�Ľ�������������˲��ý���ķ��䡣
����������������������������������������������
��������(kent)�ķ��䣬�ұ�������(kingsir)�ķ��䡣

LONG);
	setup();
	replace_program(ROOM);
}
