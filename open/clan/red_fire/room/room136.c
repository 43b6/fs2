inherit ROOM;
void create() {
	set( "short", "$HIM$��$HIR$����$HIY$�ܵ�$HIM$��$NOR$" );
	set( "build", 70 );
	set( "exits", ([
		"up"        : "/open/clan/red_fire/room/hall.c",
		"bor"       : "/open/clan/red_fire/room/room102.c",
		"pipi"      : "/open/clan/red_fire/room/room133",
		"boy"       : "/open/clan/red_fire/room/room111.c",
		"borcc"     : "/open/clan/red_fire/room/room174",
		"welo"      : "/open/clan/red_fire/room/room68",
	]) );
	set( "long", @LONG
�˴���$HIR$����$NOR$����ʱ���Ѵ����ˣ�û����֪��$HIM$��������$NOR$�˽�����$HIY$�ܵ�$NOR$��
�����⡣����������ഫҲֻ��$HIC$����$NOR$��֪����һ���������$HIC$����$NOR$ͬ���ô�
�˵أ��ͻ��ܵ�����������Ĵ��֡�


LONG);
	setup();
	replace_program(ROOM);
}
