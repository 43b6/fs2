inherit ROOM;
void create() {
	set( "short", "$HIC$kalin$HIW$��$HIG$��˿ͷ2$NOR$" );
	set( "owner", "taxi" );
	set( "build", 11202 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room4.c",
		"east"      : "/open/clan/hell/room/room55.c",
	]) );
	set( "long", @LONG
��..
kalin �Դ�sui��,һ������������,�ò���������375one
��..��.....��master �� ba ����Ӯ....
��....���kalinֻ�����������ȯά��...
���յ�������ɲ���...ֻ������С�ܴ��������...
��kalin��ͭ���忸���ӵĵ�λҪ����...
LONG);
	setup();
	replace_program(ROOM);
}
