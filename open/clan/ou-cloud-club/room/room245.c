inherit ROOM;
void create() {
	set( "short", "ɽׯ���" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room124.c",
	]) );
	set( "long", @LONG
ͨ������ɽׯ�ڵĵ�·������·�Բ����Ÿ�����
�Ÿ��ɵľ��ر��������Ƹ�ڰ���ɽׯ����ʦ����
�ǣ�ׯǰ����������䣬�ⲻ֪����ɽׯ�����֡���
�е�һ����ͨ�˵�������ɽ���ׯ�ڣ���ׯ����
ǰ���ŷǳ������Ĺؿ������ţ�

LONG);
	setup();
	replace_program(ROOM);
}
