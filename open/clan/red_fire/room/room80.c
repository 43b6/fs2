inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIM$�󷹵� $HIY$����$HIW$��¥$HIC$��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/red_fire/room/room85.c",
		"f5"        : "/open/clan/red_fire/room/room134",
		"f4"        : "/open/clan/red_fire/room/room163",
		"f3"        : "/open/clan/red_fire/room/room79.c",
		"f1"        : "/open/clan/red_fire/room/room71.c",
	]) );
	set( "long", @LONG
��......�ÿ���$HIY$����$NOR$ร������õ�$HIR$��ɫ$NOR$�߼���̺��$HIC$��˹$NOR$���ڵģ���
�����$HIW$�ƾ�$NOR$��ȫ������$HIM$����$NOR$����ˮ�����飬���ߵ�ǽ�澹Ȼ�������ϵȵ�
$YEL$��ľ$NOR$�����ּ�װ�Σ�һ��һ����������ǽ���ϸ����ֳ����ȵ����ź͸߼�
���ѹ�$HIR$��õ$NOR$����˵��������δ�����µĽ����Ƽ�����ɵĸ߼�סլ��....
���ҿ���ֱ�ӵ�ϲ����$HIW$¥��$NOR$......


LONG);
	setup();
	replace_program(ROOM);
}
