inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$$HIG$��$NOR$$HIC$��$NOR$$HIM$��$NOR$" );
	set( "owner", "borchin" );
	set( "light_up", 1 );
	set( "object", ([
		"amount3"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/capital/obj/blade2",
		"amount6"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/capital/obj/blade2",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/daemon/class/blademan/obj/ublade",
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file3"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"file7"    : "/open/mogi/dragon/obj/dragonar",
		"amount7"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"file8"    : "/open/mogi/castle/obj/blood-water",
		"file9"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10062 );
	set( "exits", ([
		"enter"     : "/open/clan/red_fire/room/room104",
		"north"     : "/open/clan/red_fire/room/room102.c",
	]) );
	set( "long", @LONG

�������������;������ʱ����Ȼ����ǰ����һ����µ�
$MAG$С��$NOR$���߽�һ������ǰ�İڷ���һֻ$YEL$����$NOR$���Ա߻���$HIC$�ɺ�$NOR$
��һ�Է����ţ����������������������$HIM$����Ϊ�֣���
��Ϊ��$NOR$������������������ɷ���˰���


LONG);
	setup();
	replace_program(ROOM);
}
