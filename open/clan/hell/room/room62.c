inherit ROOM;
void create() {
	set( "short", "���˲�·" );
	set( "object", ([
		"amount2"  : 41,
		"amount3"  : 1,
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 200,
		"file1"    : "/open/fire-hole/obj/g-pill",
		"file2"    : "/open/fire-hole/obj/g-pill",
	]) );
	set( "owner", "zero" );
	set( "build", 10023 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room60.c",
		"west"      : "/open/clan/hell/room/room58.c",
		"hole"      : "/open/clan/hell/room/room61",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

        ��������֮�󣬷����Լ�Ư����һ������Ĵ�Ԫ���У�������������
        �����װ������γ�����ȥ��ȡ��ȴ�����䷨����ʱ����ǰ���ƺ���
        ����ͨ�����������ұ߿�ȥ��ͻȻһ��а����Ϣ�ϳ壬���г���ɱ¾
        ��תͷ����߿�ȥ������ӿ�����޵�������ȫ����һ������֮����


LONG);
	setup();
	replace_program(ROOM);
}
