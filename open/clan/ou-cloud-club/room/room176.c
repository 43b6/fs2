inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$��$NOR$��$NOR$" );
	set( "build", 10021 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room179.c",
		"north"     : "/open/clan/ou-cloud-club/room/room181",
		"west"      : "/open/clan/ou-cloud-club/room/room173.c",
		"south"     : "/open/clan/ou-cloud-club/room/room172.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

���������(wuchy)���Է����ұ������Ҹ�(doa)���Ҹ�ȪԴ��

LONG);
	setup();
	replace_program(ROOM);
}
