inherit ROOM;
void create() {
	set( "short", "��֮����" );
	set( "object", ([
		"file2"    : "/open/ping/obj/gold_hand",
		"file1"    : "/open/ping/obj/chilin_legging",
		"amount1"  : 1,
		"amount2"  : 1,
	]) );
	set( "build", 10133 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room25",
		"east"      : "/open/clan/hell/room/room62",
	]) );
	set( "long", @LONG
     
        һ����������̱�һ����ů����������Χ������֮�⻹��һ��ʥ��
        �����ַ������ƣ���Ŀ�����ϱ���ǰ��һ������(statue)��������ֻ
        ������ȫ����ǰ��δ������ʥװ����ͻȻ�������е�������װ����
        ����������ϣ���о����Լ���һ���ش��ʹ����ӵ������������


LONG);
	setup();
	replace_program(ROOM);
}
