inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$��$NOR$��" );
	set( "build", 10004 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room170.c",
		"north"     : "/open/clan/ou-cloud-club/room/room176",
		"east"      : "/open/clan/ou-cloud-club/room/room171.c",
		"south"     : "/open/clan/ou-cloud-club/room/room164",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

����ǽ���٫��(limit)�Ĳؽ��ӣ��ұ����Ƿ�֮��(windson)�ķ��䣮

LONG);
	setup();
	replace_program(ROOM);
}
