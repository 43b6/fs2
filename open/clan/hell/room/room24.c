inherit ROOM;
void create() {
	set( "short", "��ħ֮��" );
	set( "owner", "zero" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room60",
	]) );
	set( "long", @LONG
    ����һ��������ߵ��������Ź��ȵ�а������;��ǽ���Ͽ���������
        ����ɵ��书��ǿ���ħ����������˼����ж��������������Ҽ���
        ��������ħ��սֻ������һȺ�Գ����ߵİ���ӽ������������ʱ��
        ӡħ����������Щǿ������������˽硣
LONG);
	setup();
	replace_program(ROOM);
}
