inherit ROOM;
void create() {
	set( "short", "$HIC$��Ԫ��϶$NOR$" );
	set( "owner", "koi" );
	set( "build", 14625 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/ou-cloud-club/room/room156",
		"south"     : "/open/clan/ou-cloud-club/room/room162.c",
	]) );
	set( "long", @LONG

    ǰ��������Щ��Ũ��,���㿴�������ܻ���,���˿����Ե�ʱ��ֻ�б�
�ոո��Ӵ��ҵߵ�,���ǽӽ���ľ�������������������,�����������
���������,�ǻ�������Ǵ��,��Ũ���Ϊϡɢ֮ʱ,����Լ����ǰ������
һ�����صĹų�...

LONG);
	setup();
	replace_program(ROOM);
}
