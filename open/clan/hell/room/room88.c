inherit ROOM;
void create() {
	set( "short", "$HIC$����������ӡ��$HIY$(fan)$NOR$" );
	set( "light_up", 1 );
	set( "build", 11827 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "long", @LONG
�ظ��ľ���ս���ǵ��괳������ɽׯ��,�ռ��˲��پ���˽�����֮������
���������,�ظ��Ĵ�ɸ����齫֮�����ӡ����,��������̬�ռ���������
��ר���ղذ˽�֮�жμ��ػ������������ĵط�,����Ȥ���˿�����ȥ����,
�����ñ���ǵù黹,��Ȼ��ɸ������Ա�ʺ��:D

LONG);
	setup();
	replace_program(ROOM);
}
