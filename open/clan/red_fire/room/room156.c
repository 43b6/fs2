inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIR$���� $HIM$����$HIC$����$HIY$��$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "exits", ([
		"down"      : "/open/clan/red_fire/room/room42",
	]) );
	set( "long", @LONG
��һ��վ��Ϊ�˷�ֹ$HIR$������$NOR$���е������˵�����$HIR$����$HIY$ʥ��$NOR$�������ģ�
��Ȼ��ׯ�����Ƕ���������ƽ����գ�����$HIR$����$NOR$������Ŵ�������һȺ��
Ф֮ͽ��$HIR$����$NOR$���ڴ�������վ������ǰ�����顣


LONG);
	setup();
	replace_program(ROOM);
}
