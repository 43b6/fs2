inherit ROOM;
void create() {
	set( "short", "$HIY$�����ֽ��Ŵ�$NOR$" );
	set( "build", 12306 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/hall",
	]) );
	set( "long", @LONG
�����ǵظ��Ĵ���й�С���ǷŽ�ֽ�ĵط�,��ϸ�����ܵ�ǽ��,ȫ������ֽ
Ǯ���ɵ�,�ظ��Ľ����ڴ˴�,�����Ҫ����ʱ����Ŀ��ֵ�,��û�¹������
Ǯ��,�������չ���Ǯ��Ȼ���������,�ɱ������͵Ǯ�,�ӵ�����Ҳ�����
͵��Ǯ׷������

LONG);
	setup();
	replace_program(ROOM);
}
