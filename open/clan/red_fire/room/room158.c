inherit ROOM;
void create() {
	set( "short", "$HIY$��$NOR$$HIC$��$NOR$$HIM$ܿ$NOR$��$HIC$��$NOR$$HIM$ܿ$NOR$$HIR$����$NOR$$HIY$��$NOR$" );
	set( "owner", "seiko" );
	set( "build", 4008 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room77",
	]) );
	set( "long", @LONG

һ����ΰ׳�۵�$HIB$��Ժ$NOR$ӳ��������̧ͷһ�����Ŷ�����һ��ľ����Ҷ
����$HIB$��$NOR$��$HIR$����$NOR$д�š�$HIR$��ܿ����$NOR$���ĸ����֡�������д�����ǲԾ�������
�������嶨�������룺��������ֵ��ˣ���������ȫ�ŵĴ���ˡ���
��ǰ������һ�����˳������˸ߵ�$YEL$ʯ��$NOR$�����Ͽ���������֣�

                    $HIG$����$NOR$$HIM$��һ$NOR$$HIR$����$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
