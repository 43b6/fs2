inherit ROOM;
void create() {
	set( "short", "$HIR$�챦ʯ��ָ$NOR$�����" );
	set( "build", 10157 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room39",
	]) );
	set( "long", @LONG
�챦ʯ��ָ�ڵ�����������ֵıر���Ʒ,����������ϲ��������Ұ�æ������
װ������,Ȼ������ʱ����Ƽ��Ľ���,�ܶ������Ѿ�������������װ����,С������
�Ǵӹ�ȥ�߹�������,�����ڽ����ָ�������ʱ��,�ص�����һ��챦ʯ�ķ���,
�ô���廳�챦ʯ��ָ��ȥ�ķ����ʷ

LONG);
	setup();
	replace_program(ROOM);
}
