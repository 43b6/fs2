inherit ROOM;
void create() {
	set( "short", "(���鲻��)" );
	set( "owner", "zuba" );
	set( "light_up", 1 );
	set( "build", 10188 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room249",
	]) );
	set( "long", @LONG
��������������˼���ĵط�........think
С���ƺ�������������ط�.........
��ʱ��������С��һ���˶��Է�����������
С���ƺ�����̾��Ҳ��֪�����˺���
Ҳ����Щ����С��Ҫ������Եİ�.....
�Ա��и���......��С����Ϣ�ĵط�...ZzZzZz




LONG);
	setup();
	replace_program(ROOM);
}
