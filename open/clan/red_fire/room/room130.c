inherit ROOM;
void create() {
	set( "short", "$HIC$��$YEL$����$HIW$·$HIC$��$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room129",
		"north"     : "/open/clan/red_fire/room/room131",
	]) );
	set( "long", @LONG
����������ߵ�һ������$YEL$��Ţ$NOR$��Ұ��$HIW$С·$NOR$����ʱ���ие�һ����
���������$HIR$ð��$HIM$����$NOR$��Ȼʹ�������ǰ������������ȴ��������Ǵ粽��
�У����з�����һ���������ߵ���ͷ��������һ���Ѿ������������$HIC$ҧ
��$HIW$����$NOR$��ǰ����....��


LONG);
	setup();
	replace_program(ROOM);
}
