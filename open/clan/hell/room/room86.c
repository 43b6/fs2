inherit ROOM;
void create() {
	set( "short", "$HIY$�����ӡ��$NOR$" );
	set( "light_up", 1 );
	set( "build", 10195 );
	set( "exits", ([
		"fire"      : "/open/clan/hell/room/room82.c",
		"soil"      : "/open/clan/hell/room/room85.c",
		"out"       : "/open/clan/hell/room/room28",
		"wood"      : "/open/clan/hell/room/room83.c",
		"golden"    : "/open/clan/hell/room/room84.c",
		"water"     : "/open/clan/hell/room/room79.c",
	]) );
	set( "long", @LONG
�ظ��ľ���ս���ǵ��괳������ɽׯ��,�ռ��˲��پ���˽�����֮������
���������,�ظ��Ĵ�ɸ����齫֮�����ӡ����,��������̬�ռ���������
��ר���ղذ˽�֮�жμ��ػ������������ĵط�,����Ȥ���˿�����ȥ����,
�����ñ���ǵù黹,��Ȼ��ɸ������Ա�ʺ�� :D

LONG);
	setup();
	replace_program(ROOM);
}
