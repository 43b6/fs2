inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIY$����$HIW$һ¥$HIC$��$NOR$" );
	set( "build", 10 );
	set( "light_up", 1 );
	set( "exits", ([
		"r104"      : "/open/clan/red_fire/room/room119",
		"north"     : "/open/clan/red_fire/room/room76.c",
		"south"     : "/open/clan/red_fire/room/room74.c",
		"r103"      : "/open/clan/red_fire/room/room111.c",
	]) );
	set( "long", @LONG
��......�ÿ���$HIY$����$NOR$ร������õĺ�ɫ�߼�$HIR$��̺$NOR$�ǲ�˹���ڵģ���
����ĵƾߣ�ȫ�����÷�������$HIC$ˮ��$NOR$���飬���ߵ�ǽ�澹Ȼ�������ϵȵ�
$HIM$��ľ$NOR$�����ּ�װ�Σ�һ��һ����������ǽ���ϸ����ֳ����ȵ����ź͸߼�
���ѹ�$HIR$��õ$NOR$����˵��������δ�����µ�$HIR$��$HIG$��$HIY$��$HIC$��$NOR$����ɵĸ߼�סլ������
��ķ���ֱ��� 103 �ź� 104 �š�


LONG);
	setup();
	replace_program(ROOM);
}
