inherit ROOM;
void create() {
	set( "short", "[1;36m��[37m��[0m��[1;31m�յ�վ[0m" );
	set( "build", 10020 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room240",
		"south"     : "/open/clan/ou-cloud-club/room/room217.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�Ķ�¥������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
���С�Ľ�������������˲��ý���ķ��䡣
��
���������ӱӱ(sakira)������С�ݣ��ұߵķ�������ʩ���С�
LONG);
	setup();
	replace_program(ROOM);
}
