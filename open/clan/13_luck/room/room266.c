inherit ROOM;
void create() {
	set( "short", "��֯������" );
	set( "owner", "kanako" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room309",
		"south"     : "/open/clan/13_luck/room/room304.c",
	]) );
	set( "light_up", 1 );
	set( "build", 11601 );
	set( "long", @LONG

    ����ƽ�ϳǣ����ǿ��µķ���ɽկ������һȺ�޶�������ͷĿ��
�����׾��ǳ������ǵ���ͷĿ�����У������ǵ�ͷҲ�������ţ�����Ҳ
��Ҳ������ȥ��կ��Ϊ�˾������󣬶����ͷĿҪС��һ�㣬ѧ�˶μ�
����ʽ���ᱻ����������

LONG);
	setup();
	replace_program(ROOM);
}
