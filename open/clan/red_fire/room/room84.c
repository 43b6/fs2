inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIY$����$HIW$��¥$HIC$��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room85.c",
		"r208"      : "/open/clan/red_fire/room/room96.c",
		"r207"      : "/open/clan/red_fire/room/room118",
		"south"     : "/open/clan/red_fire/room/room83.c",
	]) );
	set( "long", @LONG
��......�ÿ���$HIY$����$NOR$ร������õĺ�ɫ�߼�$HIR$��̺$NOR$�ǲ�˹���ڵģ���
����ĵƾߣ�ȫ�����÷�������$HIC$ˮ��$NOR$���飬���ߵ�ǽ�澹Ȼ�������ϵȵ�
$HIM$��ľ$NOR$�����ּ�װ�Σ�һ��һ����������ǽ���ϸ����ֳ����ȵ����ź͸߼�
���ѹ�$HIR$��õ$NOR$����˵��������δ�����µ�$HIR$��$HIG$��$HIY$��$HIC$��$NOR$����ɵĸ߼�סլ������
��ķ���ֱ��� 207 �ź� 208 �š�


LONG);
	setup();
	replace_program(ROOM);
}
