inherit ROOM;
void create() {
	set( "short", "[1;36m��[37m��[0m��[0m" );
	set( "build", 10038 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room236",
		"west"      : "/open/clan/ou-cloud-club/room/room225.c",
		"south"     : "/open/clan/ou-cloud-club/room/room214.c",
		"east"      : "/open/clan/ou-cloud-club/room/room221.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
���С�Ľ�������������˲��ý���ķ��䡣
����������������������������������������������
��������տ�(flower)�ķ��䣬�ұ�����ˮ֮��(mosia)�ķ��䡣

LONG);
	setup();
	replace_program(ROOM);
}
