inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$NOR$��$NOR$" );
	set( "light_up", 1 );
	set( "build", 10854 );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room15.c",
		"west"      : "/open/clan/ou-cloud-club/room/room137.c",
		"east"      : "/open/clan/ou-cloud-club/room/room136.c",
		"south"     : "/open/clan/ou-cloud-club/room/room125",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

����ǲ�(perth)���޳��ң��ұ����Ǿñ�������(bbsboss)�ļң�

LONG);
	setup();
	replace_program(ROOM);
}
