inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIY$����$HIW$һ¥$HIC$��$NOR$" );
	set( "build", 6 );
	set( "light_up", 1 );
	set( "exits", ([
		"r101"      : "/open/clan/red_fire/room/room73.c",
		"north"     : "/open/clan/red_fire/room/room75.c",
		"south"     : "/open/clan/red_fire/room/room70.c",
		"r102"      : "/open/clan/red_fire/room/room78",
	]) );
	set( "long", @LONG
��......�ÿ���$HIY$����$NOR$ร������õĺ�ɫ�߼�$HIR$��̺$NOR$�ǲ�˹���ڵģ���
����ĵƾߣ�ȫ�����÷�������$HIC$ˮ��$NOR$���飬���ߵ�ǽ�澹Ȼ�������ϵȵ�
$HIM$��ľ$NOR$�����ּ�װ�Σ�һ��һ����������ǽ���ϸ����ֳ����ȵ����ź͸߼�
���ѹ�$HIR$��õ$NOR$����˵��������δ�����µ�$HIR$��$HIG$��$HIY$��$HIC$��$NOR$����ɵĸ߼�סլ������
��ķ���ֱ��� 101 �ź� 102 �š�


LONG);
	setup();
	replace_program(ROOM);
}
