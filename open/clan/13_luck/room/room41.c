inherit ROOM;
void create() {
	set( "short", "��ջ����" );
	set( "object", ([
		"file1"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
	]) );
	set( "build", 10317 );
	set( "exits", ([
		"���¥"    : "/open/clan/13_luck/room/room99",
		"east"      : "/open/clan/13_luck/room/room40.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��ӭ������ʮ������Ŀ�ջ������������񖟵ĵ�С��CHECK IN
��������������Ϳ��Իص������᷿��Ϣ�ˣ�������Ҫ�κη�����
ֱ��CTƵ������ר��Ϊ�����񡫡�
                                               лл���� ����

             
               ������ǰ�ߣ����ǡ����¥����
             
LONG);
	setup();
	replace_program(ROOM);
}
