inherit ROOM;
void create() {
	set( "short", "$HIW$�� �� ʯ · $HIC$·��$NOR$ $HIW$��$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room131",
		"east"      : "/open/clan/red_fire/room/room124.c",
		"north"     : "/open/clan/red_fire/room/room126.c",
	]) );
	set( "long", @LONG
        
                  $HIC$�q�T�T�T�T�T�T�T�T�T�T�T�T�T�T�r
                  �U$BLU$��                        ��$HIC$�U
                  �U   $HIM$����$NOR$----$HIW$��$HIR$��Ҷ$HIY$������$HIW$��$HIC$   �U
                  �U                            �U
                  �U   $HIM$�ϱ�$NOR$----$HIW$��$HIG$��Ҷ$HIY$������$HIW$��$HIC$   �U
                  �U$BLU$��                        ��$HIC$�U
                  �t�T�T�T�j�j�T�T�T�T�j�j�T�T�T�s
                          �U�U        �U�U
                          �U�U        �U�U
                    $HIG$����������������������������$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
