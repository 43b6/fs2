inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIY$����$HIW$һ¥$HIC$��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"r110"      : "/open/clan/red_fire/room/room45",
		"enter"     : "/open/clan/red_fire/room/room71.c",
		"south"     : "/open/clan/red_fire/room/room77.c",
		"r109"      : "/open/clan/red_fire/room/room68.c",
	]) );
	set( "long", @LONG
��......�ÿ���$HIY$����$NOR$ร������õĺ�ɫ�߼�$HIR$��̺$NOR$�ǲ�˹���ڵģ���
����ĵƾߣ�ȫ�����÷�������$HIC$ˮ��$NOR$���飬���ߵ�ǽ�澹Ȼ�������ϵȵ�
$HIM$��ľ$NOR$�����ּ�װ�Σ�һ��һ����������ǽ���ϸ����ֳ����ȵ����ź͸߼�
���ѹ�$HIR$��õ$NOR$����˵��������δ�����µ�$HIR$��$HIG$��$HIY$��$HIC$��$NOR$����ɵĸ߼�סլ������
��ķ���ֱ��� 109 �ź� 110 �ţ�����....ǰ�滹��$HIY$����$NOR$���Դ��Ү��
�������


LONG);
	setup();
	replace_program(ROOM);
}
