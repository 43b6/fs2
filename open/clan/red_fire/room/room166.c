inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIR$VIP $HIY$����$HIW$��¥$HIC$��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room165",
		"enter"     : "/open/clan/red_fire/room/room134",
	]) );
	set( "long", @LONG
��......�ÿ���$HIY$����$NOR$ร������õĺ�ɫ�߼�$HIR$��̺$NOR$�ǲ�˹���ڵģ���
����ĵƾߣ�ȫ�����÷�������$HIC$ˮ��$NOR$���飬���ߵ�ǽ�澹Ȼ�������ϵȵ�
$HIM$��ľ$NOR$�����ּ�װ�Σ�һ��һ����������ǽ���ϸ����ֳ����ȵ����ź͸߼�
���ѹ�$HIR$��õ$NOR$����˵��������δ�����µ�$HIR$��$HIG$��$HIY$��$HIC$��$NOR$����ɵĸ߼�סլ������
�ȵ׾��Ǻ����д����������������....ǰ�滹��$HIY$����$NOR$���Դ��Ү��


LONG);
	setup();
	replace_program(ROOM);
}
