inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIY$����$HIW$һ¥$HIC$��$NOR$" );
	set( "exits", ([
		"r107"      : "/open/clan/red_fire/room/room158",
		"south"     : "/open/clan/red_fire/room/room76.c",
		"north"     : "/open/clan/red_fire/room/room72.c",
		"r108"      : "/open/clan/red_fire/room/room159",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��......�ÿ���$HIY$����$NOR$ร������õĺ�ɫ�߼�$HIR$��̺$NOR$�ǲ�˹���ڵģ���
����ĵƾߣ�ȫ�����÷�������$HIC$ˮ��$NOR$���飬���ߵ�ǽ�澹Ȼ�������ϵȵ�
$HIM$��ľ$NOR$�����ּ�װ�Σ�һ��һ����������ǽ���ϸ����ֳ����ȵ����ź͸߼�
���ѹ�$HIR$��õ$NOR$����˵��������δ�����µ�$HIR$��$HIG$��$HIY$��$HIC$��$NOR$����ɵĸ߼�סլ������
��ķ���ֱ��� 107 �ź� 108 �š�


LONG);
	setup();
	replace_program(ROOM);
}
