inherit ROOM;
void create() {
	set( "short", "ָ����Է�" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/new_heaven/room/room9",
		"south"     : "/open/clan/new_heaven/room/room4",
	]) );
	set( "long", @LONG
    �������������޵Ĺ�����, ����������İ��ĳ��Ŵ� ��
�Ĵ���Ƭ,����һ�������, ��˵���Կ����ɵĿ���ĵ���,
�Ǹ�������豸,����������Ҫ÷�ѩ�����,��Ϊ÷�ѩ��
�������������������޵ķ����ˡ�
�����Ӽ��(accuse)����, ��������������run tin�������
accuse <id>��������ȥ���й���ȥ�����⡣

LONG);
	setup();
	replace_program(ROOM);
}
