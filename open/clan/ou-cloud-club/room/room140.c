inherit ROOM;
void create() {
	set( "short", "�컵ļ�" );
	set( "object", ([
		"amount1"  : 640,
		"file1"    : "/open/mogi/castle/obj/ninepill",
	]) );
	set( "owner", "neonn" );
	set( "light_up", 1 );
	set( "build", 11211 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room16",
	]) );
	set( "long", @LONG
�������컵ļ�,û�������������....................:)
TIN FORCE �Ǻ��±��˳��Ĩ�.�����пյĻ�,��ӭ���������.
��Ҳ�Ǻܰ��ɾ�����,ǧ����EQ�������߰����.
���µĻ�,��ӭ�����E-MAIL���� ֪���ҵ�Email �� ?

LONG);
	setup();
	replace_program(ROOM);
}
