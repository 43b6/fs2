inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$��$NOR$��$HIM$��ͥ$NOR$" );
	set( "build", 10034 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room210.c",
		"north"     : "/open/clan/ou-cloud-club/room/room211",
		"east"      : "/open/clan/ou-cloud-club/room/room202.c",
		"south"     : "/open/clan/ou-cloud-club/room/room193.c",
		"down"      : "/open/clan/ou-cloud-club/room/room118.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

�����(badcow)���ϼ�Ȧ�������ұ�����ˮ��(lnergy)�ķ��䡣

LONG);
	setup();
	replace_program(ROOM);
}
