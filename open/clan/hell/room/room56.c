inherit ROOM;
void create() {
	set( "short", "$HIY$ħ����$HIW$֮��$NOR$PART2 " );
	set( "build", 10066 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room67.c",
		"west"      : "/open/clan/hell/room/room22.c",
	]) );
	set( "long", @LONG

ԭ��ħ����֮��ֻ��һ��...����ɾ��ò�����...��Ϊhell��ÿ���˶��Ǳ�����... :P
������~ ����..������..����������...
���Ի������������...����ħ����֮��part2����....
wahaha
ף���ʹ�����....�����н���...�����н�......
LONG);
	setup();
	replace_program(ROOM);
}
