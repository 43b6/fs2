inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIR$����$HIC$���Ǻ� $HIM$���Ŵ���$HIY$��$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "build", 11120 );
	set( "exits", ([
		"westdown"  : "/open/clan/red_fire/room/room65",
		"eastdown"  : "/open/clan/red_fire/room/room64",
		"south"     : "/open/clan/red_fire/room/room44.c",
	]) );
        set( "long", @LONG
��վ��$HIM$����$NOR$����������$HIC$���Ǻ�$NOR$�����峺�ĺ�ˮ�����ɣ�....�ӵ׺���
����һЩ$HIW$��$NOR$�����գ�����˭����ô�������Ǳ���ˮ�п�$HIW$��$NOR$������������
ȥ��һ��......�ǺǺǣ�......$HIY$����$NOR$���߶���Ү��������һ�߰�����....
..����ȥ���������......�����ģ�������˵����


LONG);
        setup();
        replace_program(ROOM);
}

