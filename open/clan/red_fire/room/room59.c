inherit ROOM;
void create() {
	set( "short", "$HIC$����$NOR$��$HIM$��$HIY$��$HIW$��$NOR$" );
	set( "owner", "welo" );
	set( "build", 10217 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room68",
	]) );
	set( "long", @LONG

���ܵ�$HIW$���$NOR$����ֱ��������һ���鷿��û������$HIC$����$NOR$
��$HIM$��$HIY$��$HIW$��$NOR$����������������嵽��������Ҫ����$HIR$��$HIG$��$HIY$��$HIC$
��$NOR$��������Ŀ�Ĵ������������Ŀ��$HIW$'̫������' $HIC$'����
����' $HIR$'��а����'$NOR$�벻��$HIC$����$NOR$����Щʧ���Ѿõ�$HIY$����$NOR$��
��ӵ�У�ֻ�������ɨ��һ����Ⱦ��������Ե���$HIR$����
��$NOR$δ����$HIW$ͼ���$NOR$��


LONG);
	setup();
	replace_program(ROOM);
}
