inherit ROOM;
void create() {
	set( "short", "$HIC$��$YEL$����$HIW$·$HIC$��$NOR$" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room126",
		"north"     : "/open/clan/red_fire/room/room128.c",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "long", @LONG
����������ߵ�һ������$YEL$��Ţ$NOR$��Ұ��$HIW$С·$NOR$����ʱ���ие�һ����
���������$HIR$ð��$HIM$����$NOR$��Ȼʹ�������ǰ������������ȴ��������Ǵ粽��
�У����з�����һ���������ߵ���ͷ��������һ���Ѿ������������$HIC$ҧ
��$HIW$����$NOR$��ǰ����....��


LONG);
	setup();
	replace_program(ROOM);
}
