inherit ROOM;
void create() {
	set( "short", "$HIW$�� �� ʯ · ��$NOR$" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room122.c",
		"west"      : "/open/clan/red_fire/room/room124",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "long", @LONG
һ������ɫ��$HIW$����ʯ$NOR$���������ио�һ������$HIC$ͯ$HIG$��$HIR$��$HIY$��$NOR$�����������
������$HIW$����ʯ$NOR$��ɵ���ʯ·�ϣ��·��ֻص���ͯ��ʱ����ͻȻ�㷢��Զ��
��һ��$HIY$�ݴ�$NOR$���������ÿ�������$HIR$ɷ$HIC$�羰$NOR$��ȴ��һ�ɲ�֪��$HIM$ħ��$NOR$����������
һ��һ����ǰ����........��


LONG);
	setup();
	replace_program(ROOM);
}
