inherit ROOM;
void create() {
	set( "short", "����֮��" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room230",
		"north"     : "/open/clan/13_luck/room/room227",
	]) );
	set( "long", @LONG

��������Χ��������ë����Ȼ�������г����һ��������Ż��Ѫ��ζ
������·��ȴû�п����κ�ʬ�׻��ߴ򶷹��ĺۼ�����̤�ŽŲ�С��
����ǰ���ţ��Ų����������������ֲֿ������գ���֪�ж�������
�Ǹ��ֵ��˱������ڴˡ�

LONG);
	setup();
	replace_program(ROOM);
}
