inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIR$���� $HIM$�󷹵�$HIC$��$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "build", 10127 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room32",
		"hotel"     : "/open/clan/red_fire/room/room70.c",
		"south"     : "/open/clan/red_fire/room/room31.c",
	]) );
	set( "long", @LONG
 
                    $HIR$��$HIG$��$HIY$��$HIC$��$HIR$��$HIG$��$HIY$��$HIC$��$HIR$��$HIG$��$HIY$��$HIC$��$HIR$��$HIG$��$HIY$��
                    $HIC$��  $HIR$��   ��   $HIM$��   ��   ��  $HIR$��
                    $HIG$��                          $HIY$��
                    $HIC$��  $HIR$Red_Fire  $HIM$H  O  T  E  L $HIG$��
                    $HIY$��$HIC$��$HIR$��$HIG$��$HIY$��$HIC$��$HIR$��$HIG$��$HIY$��$HIC$��$HIR$��$HIG$��$HIY$��$HIC$��$HIR$��
                            $HIW$������    ����     
                      $HIY$��$HIM$����������������������$HIY$��
                      $HIM$����$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$����
                      ��������������������������
                      ����$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$����
                    $HIY$��$HIM$��������������������������$HIY$��
                    $HIM$������$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$������
                    ������������������������������
                    ������$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$������
                    ������������������������������
     $HIR$����������  ��$HIM$ ������$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$��$HIC$��$HIM$������ $HIR$��  ��  ��  ��
    $HIB$��  ��  ��  �� $HIM$ ������������������������������  $HIB$��  ��  ��  ��
    $HIW$�U  �U  �U  �U $HIM$ ��    ��      ��      ��    ��  $HIW$�U  �U  �U  �U
    $HIW$�U  �U  �U  �U $HIM$ ��    ��      ��      ��    ��  $HIW$�U  �U  �U  �U
    $HIW$�U  �U  �U  �U $HIM$ ��    ��      ��      ��    ��  $HIW$�U  �U  �U  �U
    $HIW$�U  �U  �U  �U $HIM$ ��    ��      ��      ��    ��  $HIW$�U  �U  �U  �U
    $HIC$��������������������������������������������������������������$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
