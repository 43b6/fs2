inherit ROOM;
void create() {
	set( "short", "Ѫ����" );
	set( "objects", ([
		"/open/clan/hell/npc/npc32" : 1,
		"/open/clan/hell/npc/npc31" : 1,
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room41",
		"up"        : "/open/clan/hell/room/room12.c",
		"enter"     : "/open/clan/hell/room/room61.c",
	]) );
	set( "long", @LONG
        �ĵ�������֮��....һʱ֮���㱻�ŵĻ����ɢһ��Ҳ����ͣ��....
        ������....������ƾ�ű����ǿ���书��Ϊ����������������һ��һ
        ������ǰ̽��....�����ŷ�����ǰ��һ������ĵط�....
        һ����������ĩ�յľ����������ǰ....���еľ�ɫ������û��Ѫ��
        ����ɫ����....���Ÿ�ʽ�����Ĳп�Ļ���....ȫ������û����Ѫ��
        �ĵ�������֮��....һʱ֮���㱻�ŵĻ����ɢһ��Ҳ����ͣ��....


LONG);
	setup();
	replace_program(ROOM);
}
