inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$��$NOR$��" );
	set( "build", 10174 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room172",
		"east"      : "/open/clan/ou-cloud-club/room/room166.c",
		"down"      : "/open/clan/ou-cloud-club/room/room152",
		"west"      : "/open/clan/ou-cloud-club/room/room165",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

����ǻ�ħ(ads)���λø��ұ�����С����(scs)�ķ��䣮

LONG);
	setup();
	replace_program(ROOM);
}
