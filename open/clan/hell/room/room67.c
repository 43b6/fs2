inherit ROOM;
void create() {
	set( "short", "$HIY$ħ����$HIW$֮��$NOR$PART3" );
	set( "build", 10957 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room56.c",
	]) );
	set( "long", @LONG

�׻�˵��һ���ж�...����������...
��Ȼ����ҪŬ���ĸ����ڸ���ȥ��...
����ҿ��ֵ���ħ����ɵ�С����ʱ...
�����˸�лhell������͹�����...
hell�ľ����漣���������ǿ�����...

����������һ����,������˵ : ��~ ������!!

LONG);
	setup();
	replace_program(ROOM);
}
