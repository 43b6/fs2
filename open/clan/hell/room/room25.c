inherit ROOM;
void create() {
	set( "short", "��ʥ֮·" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room58",
	]) );
	set( "long", @LONG
    ����һ����ֱ�ĳ��ȣ����ܳ����������ʥ����;��ǽ���Ͽ�����
        ��ʽ������ħ���书�Լ���¼������ħ��ս����Ҫ���£���������ϸ
        �ļ�¼�з��֣������ɹ���ħ�����߶���������ʥ��װ������ߣ���
        ����������ܹ���ȫ������������֮���ܡ�
LONG);
	setup();
	replace_program(ROOM);
}
