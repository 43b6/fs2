inherit ROOM;
void create() {
	set( "short", "��ң��" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 1,
		"file3"    : "/obj/gift/bingtang",
		"amount1"  : 1,
		"file1"    : "/obj/gift/bingtang",
		"file2"    : "/obj/gift/xisuidan",
	]) );
	set( "owner", "bor" );
	set( "build", 6567 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room161.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
һ���žͿ��Կ������ϸ߸߹��������д����ң������ټ�����
��������еľ���,����ׯ�ϵ��������˾����е����
��ɢ����һ��������Ϣ�Ŀ��������������ĸ��־�������
ԭ��������Ϣ���������µ��ྡྷ����û�������ڹ�����
һ��ȥ�ͻᱻ�����������������

LONG);
	setup();
	replace_program(ROOM);
}
