inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$��$NOR$��" );
	set( "light_up", 1 );
	set( "build", 10032 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room183.c",
		"north"     : "/open/clan/ou-cloud-club/room/room193",
		"east"      : "/open/clan/ou-cloud-club/room/room192.c",
		"south"     : "/open/clan/ou-cloud-club/room/room181.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

��������(linda)�ķ��䣬�ҷ�������ʰ��(assassin)�����صش���

LONG);
	setup();
	replace_program(ROOM);
}
