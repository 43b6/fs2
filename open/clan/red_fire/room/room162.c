inherit ROOM;
void create() {
	set( "short", "$HIC$��$NOR$$HIG$��$NOR$$HIY$��$NOR$$HIR$ʹ$NOR$��$HIM$ԡ��$NOR$" );
	set( "build", 10093 );
	set( "owner", "fsfs" );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room109",
	]) );
	set( "long", @LONG

������$HIC$��$NOR$$HIG$��$NOR$$HIY$��$NOR$$HIR$ʹ$NOR$��$HIM$ԡ��$NOR$�������ӵ�����Ƚ�����ԡ�豸֮
�⣬��������$HIC$ˮ��$NOR$��$HIY$SPA$NOR$ ��$HIB$��Ӿ��$NOR$�ȵ���ʩ������һ�Ը�
�ѷ���$HIR$ˮ��Ħ�г�$NOR$��$HIY$�㽶��$NOR$��$HIC$ˮ�Ͽ�ͧ$NOR$��ˮ�ϻ���ߣ�
��������ſ��б�ʾ������$HIM$ԡ��$NOR$�������ǻ��������ǲ���
�ߴ�ط��ˣ���Ϊ����Ĳ��ü���ʩ��ֱ������һ��$HIB$ˮ��
��԰$NOR$�ˡ�


LONG);
	setup();
	replace_program(ROOM);
}
