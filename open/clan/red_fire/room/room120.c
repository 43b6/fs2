inherit ROOM;
void create() {
	set( "short", "$HIW$�� �� ʯ · ��$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room41.c",
		"west"      : "/open/clan/red_fire/room/room121",
	]) );
	set( "long", @LONG
һ������ɫ��$HIW$����ʯ$NOR$���������ио�һ������$HIC$ͯ$HIG$��$HIR$��$HIY$��$NOR$�����������
������$HIW$����ʯ$NOR$��ɵ���ʯ·�ϣ��·��ֻص���ͯ��ʱ������$HIM$����$NOR$��һ����
�������������Ǳ�����$HIM$����$NOR$����ǰ������һ��δ֪�����������硣


LONG);
	setup();
	replace_program(ROOM);
}
