inherit ROOM;
void create() {
	set( "short", "$HIY$���ĵ�$NOR$֮$HIY$�ʽ���$NOR$" );
	set( "owner", "creed" );
	set( "build", 12522 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room13.c",
		"west"      : "/open/clan/hell/room/room98",
	]) );
	set( "long", @LONG
�߽��ʽ���ֻ��һ�����Ż���������ݵ�������������
��������������Ŷ�������������͸�Ź�â��¶���·����
Ƥ������һ������Ĺ������ǳ��������ڼ�����������
���������䷳�ĶԽ��ڵ��ӽ����Ž����İ��塣
  ��[31m���ڽ�ū[0m��[33m����ɱ[0m(Sword guard)
  ���ڵڶ������� [36m������[0m(Master sky)

LONG);
	setup();
	replace_program(ROOM);
}
