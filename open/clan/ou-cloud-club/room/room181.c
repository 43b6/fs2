inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$��$NOR$��" );
	set( "build", 10313 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room176.c",
		"east"      : "/open/clan/ou-cloud-club/room/room185.c",
		"west"      : "/open/clan/ou-cloud-club/room/room23.c",
		"north"     : "/open/clan/ou-cloud-club/room/room184",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

����ǵϿ�(dico)�ķ��䣬�ұ�����ż������(dunno)֮����

LONG);
	setup();
	replace_program(ROOM);
}
