inherit ROOM;
void create() {
	set( "short", "ħ֮����" );
	set( "owner", "zero" );
	set( "object", ([
		"amount2"  : 200,
		"amount1"  : 1,
		"file2"    : "/open/fire-hole/obj/g-pill",
		"file1"    : "/daemon/class/fighter/figring",
	]) );
	set( "build", 13364 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room24",
		"west"      : "/open/clan/hell/room/room62.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
    
        һ����������̱�һ����ɱ����������Χ������֮�⻹��һ���ױ�
        ���̵ĸо����֣���Ŀ�����ϱ���ǰ��һ������(statue)���ջ�ֻ
        ����������Ѫ������а��װ��������������ʧ�ڷ���ǿ�����е�
        �У�ͻȻ���ܱ���֮���������գ�����ӵ������ɱ����ռ�������


LONG);
	setup();
	replace_program(ROOM);
}
