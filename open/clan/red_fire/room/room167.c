inherit ROOM;
void create() {
	set( "short", "$BLU$��ڤ$NOR$$HIY$����$NOR$��$BLU$��ڤ��$NOR$" );
	set( "build", 10078 );
	set( "owner", "poluy" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room82.c",
		"home"      : "/open/clan/red_fire/room/hall",
	]) );
	set( "long", @LONG

�˴���$HIR$����$NOR$$HIY$����$NOR$$BLU$��ڤ$NOR$$HIY$����$NOR$��ס����������Ȼֻ��ƽƽ�����
���裬��������������ܻᱻ�ֱ�������֮��������������
����֮����������һ��$HIM$��$NOR$$YEL$��$NOR$����������һ�۾Ϳɿ���������
֮$HIM$��$NOR$�����Ϲ�ʱ$HIC$����$NOR$����֮$HIM$��$NOR$$HIR$��$NOR$$YEL$��$NOR$��$YEL$��$NOR$�������¾Ÿ�̫����
$HIC$���Ƽ�$NOR$������������$HIY$����$NOR$���������$HIY$���$NOR$��û�뵽�����ڴ�
�����⴫˵�е�������


LONG);
	setup();
	replace_program(ROOM);
}
