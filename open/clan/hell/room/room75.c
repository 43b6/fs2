inherit ROOM;
void create() {
	set( "short", "$HIR$�ص�$NOR$" );
	set( "light_up", 1 );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/magic-sign",
	]) );
	set( "build", 1137 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room76.c",
		"west"      : "/open/clan/hell/room/room78",
		"east"      : "/open/clan/hell/room/room77",
	]) );
	set( "long", @LONG
���������ܵظ�������صط���ͨ�����˸߽ײ���
Ա�����������⣬�������ǲ�׼��������ģ���������
�ĵص����ƺ���һ��Ҳ�����ŷ��䡣����뵽��������
���⣬�Ͳ�������Щ�������һ�Եķ�����Ҳ��ʱ�Ĵ�
�������������ƺ������ǰ����š�

LONG);
	setup();
	replace_program(ROOM);
}

