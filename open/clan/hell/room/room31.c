inherit ROOM;
void create() {
	set( "short", "��ŭ֮ȭ" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/daemon/class/fighter/figring",
	]) );
	set( "light_up", 1 );
	set( "build", 11926 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "long", @LONG
�ഫ����������һ�μ�ŭ֮ʱ,�ٵظ�����һȭ,�ͳ�ǰ�����ǰ�����ɽ��
�Ӵ�ֻҪ���������õ�����������ᱻ����ڴ�,���ڴ˵ڱ��޵���,������Ĺ�
���Ǳ��Ե������ɵ�ԭ������,ȡ��Ϊ��ŭ֮ȭ,�Լ����������ص�����,��
�������������֮��

LONG);
	setup();
	replace_program(ROOM);
}
