inherit ROOM;
void create() {
	set( "short", "$HIY$ħ����$HIW$֮��$NOR$PART1" );
	set( "light_up", 1 );
	set( "build", 10720 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room56.c",
		"west"      : "/open/clan/hell/room/room23.c",
	]) );
	set( "long", @LONG
�����еõ�ħ����Ƭ��ʱ��,�����Ὣ֮����ڴ˴�,���˼���ɱ�������Ĺ���
֮��,Ҳ���������������ʱ��,���������͵�ħ��,����֮��,ż����������������
��������֮��,����ϸһ��,�����������ܶ���������������Ƭ,��ӳ�ŵ����Ļ��
��������Եظ���ʵ�����¹���

LONG);
	setup();
	replace_program(ROOM);
}
