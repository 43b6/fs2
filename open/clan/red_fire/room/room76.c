inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIY$����$HIW$һ¥$HIC$��$NOR$" );
	set( "build", 31 );
	set( "light_up", 1 );
	set( "exits", ([
		"r105"      : "/open/clan/red_fire/room/room132",
		"south"     : "/open/clan/red_fire/room/room75.c",
		"r106"      : "/open/clan/red_fire/room/room101.c",
		"north"     : "/open/clan/red_fire/room/room77",
	]) );
	set( "long", @LONG
��......�ÿ���$HIY$����$NOR$ร������õĺ�ɫ�߼�$HIR$��̺$NOR$�ǲ�˹���ڵģ���
����ĵƾߣ�ȫ�����÷�������$HIC$ˮ��$NOR$���飬���ߵ�ǽ�澹Ȼ�������ϵȵ�
$HIM$��ľ$NOR$�����ּ�װ�Σ�һ��һ����������ǽ���ϸ����ֳ����ȵ����ź͸߼�
���ѹ�$HIR$��õ$NOR$����˵��������δ�����µ�$HIR$��$HIG$��$HIY$��$HIC$��$NOR$����ɵĸ߼�סլ������
��ķ���ֱ��� 105 �ź� 106 �š�


LONG);
	setup();
	replace_program(ROOM);
}
