inherit ROOM;
void create() {
	set( "short", "$HIM$��$HIW$������ $HIB$�����$HIM$��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"southwest" : "/open/clan/red_fire/room/room27",
	]) );
	set( "long", @LONG
        


                              $HIY$������    ������ 


                              ����������������


                              ����������������

                                  $HIB$����$HIW$����$NOR$



LONG);
	setup();
	replace_program(ROOM);
}
