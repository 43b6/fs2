inherit ROOM;
void create() {
	set( "short", "$HIW$�� �� ʯ · ��$NOR$" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room123.c",
		"west"      : "/open/clan/red_fire/room/room125",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "long", @LONG
һ������ɫ��$HIW$����ʯ$NOR$���������ио�һ������$HIC$ͯ$HIG$��$HIR$��$HIY$��$NOR$�����������
������$HIW$����ʯ$NOR$��ɵ���ʯ·�ϣ��·��ֻص���ͯ��ʱ������$HIM$����$NOR$��һ��$HIC$·
��$NOR$����$HIM$����$NOR$����ǰ����˵���Ե���һ���˼��ɾ���


LONG);
	setup();
	replace_program(ROOM);
}
