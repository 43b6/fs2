inherit ROOM;
void create() {
	set( "short", "[1;37m����[0m" );
	set( "build", 4554 );
	set( "exits", ([
		"fly"       : "/open/clan/ou-cloud-club/room/room244",
		"enter"     : "/open/clan/ou-cloud-club/room/room313",
		"north"     : "/open/clan/ou-cloud-club/room/room307.c",
	]) );
	set( "long", @LONG
����С����̤�ϼ���ʯ�ݣ���ǰͻȻ���������������
��ǰ����һ����ʵȴ�����˰��ĵ�ľ�ݣ����Ե�ˮ��������
����ˮ�������ֱ���һ��ԼĪ�����˸ߵ�ʯ�������Ż��ɫ
�������֡�[1;31m��а[0m������������ٶ���һ������Ȼ���ֽ�а��
�ֵ����ƾ�����һ�ױ仯��ǧ�Ľ������㲻�������������
��˭����Ī�����Ȥ��
��
LONG);
	setup();
	replace_program(ROOM);
}
