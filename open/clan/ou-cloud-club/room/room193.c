inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$��$NOR$��" );
	set( "build", 10039 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room184.c",
		"east"      : "/open/clan/ou-cloud-club/room/room33.c",
		"west"      : "/open/clan/ou-cloud-club/room/room194.c",
		"north"     : "/open/clan/ou-cloud-club/room/room203",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

����Ǧ�ѩ�� �绨��(nickm)�ķ��䣬�ҷ���(ring)�������ţ�

LONG);
	setup();
	replace_program(ROOM);
}
