inherit ROOM;
void create() {
	set( "short", "С���ĵ�����" );
	set( "light_up", 1 );
	set( "build", 10040 );
	set( "owner", "suzukiami" );
	set( "exits", ([
		"west"      : "/open/clan/demon_castle/room/room11",
		"down"      : "/open/clan/demon_castle/room/room15",
		"north"     : "/open/clan/demon_castle/room/room13",
	]) );
	set( "long", @LONG
��������˵������,�����ܹ��������ĵ���ֻ��һ̨.
���п�����,ϣ������Ӣ������ȫ������pass.
��˵limitҪ�����...
�����������ȥ...
hi
�Ҿ�ȥ����
LONG);
	setup();
	replace_program(ROOM);
}
