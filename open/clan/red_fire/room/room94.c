inherit ROOM;
void create() {
	set( "short", "$HIR$��$HIG$ͳ$HIC$��$HIY$��$NOR$" );
	set( "owner", "laster" );
	set( "object", ([
		"file2"    : "/u/h/houng/eq/legging1",
		"amount1"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 10012 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room81",
	]) );
	set( "long", @LONG

����һ�䶥����$HIR$��$HIG$ͳ$HIC$��$HIY$��$NOR$��ȫŷʽװ�꣬���뼴����һ������$HIY$ɳ��$NOR$��
�������42���$HIC$��ƽ�����$NOR$��ǽ������������������ֵֹ�$HIW$����$NOR$��
����һ�����㷢��$HIM$����$NOR$�������㿴���ƺ�����������ζ�����


LONG);
	setup();
	replace_program(ROOM);
}
